
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct media_entity {unsigned int num_pads; TYPE_1__* pads; TYPE_2__* ops; } ;
struct fwnode_handle {int dummy; } ;
struct fwnode_endpoint {int dummy; } ;
struct TYPE_4__ {int (* get_fwnode_pad ) (struct fwnode_endpoint*) ;} ;
struct TYPE_3__ {unsigned long flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct fwnode_handle*,struct fwnode_endpoint*) ;
 int FUNC_1 (struct fwnode_endpoint*) ;

int FUNC_2(struct media_entity *VAR_1,
    struct fwnode_handle *VAR_2,
    unsigned long VAR_3)
{
 struct fwnode_endpoint VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 if (!VAR_1->ops || !VAR_1->ops->get_fwnode_pad) {
  for (VAR_5 = 0; VAR_5 < VAR_1->num_pads; VAR_5++) {
   if (VAR_1->pads[VAR_5].flags & VAR_3)
    return VAR_5;
  }

  return -VAR_0;
 }

 VAR_6 = FUNC_0(VAR_2, &VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = VAR_1->ops->get_fwnode_pad(&VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_6 >= VAR_1->num_pads)
  return -VAR_0;

 if (!(VAR_1->pads[VAR_6].flags & VAR_3))
  return -VAR_0;

 return VAR_6;
}
