
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct powercap_zone {int allocated; TYPE_1__* ops; int lock; int idr; struct powercap_zone* constraints; struct powercap_zone* zone_dev_attrs; struct powercap_zone* name; int id; int parent_idr; } ;
struct powercap_control_type {int allocated; TYPE_1__* ops; int lock; int idr; struct powercap_control_type* constraints; struct powercap_control_type* zone_dev_attrs; struct powercap_control_type* name; int id; int parent_idr; } ;
struct device {scalar_t__ parent; } ;
struct TYPE_2__ {int (* release ) (struct powercap_zone*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct powercap_zone*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct powercap_zone*) ;
 int FUNC_5 (struct powercap_zone*) ;
 struct powercap_zone* FUNC_6 (struct device*) ;
 struct powercap_zone* FUNC_7 (struct device*) ;

__attribute__((used)) static void FUNC_8(struct device *VAR_0)
{
 bool VAR_1;

 if (VAR_0->parent) {
  struct powercap_zone *VAR_2 = FUNC_7(VAR_0);


  VAR_1 = VAR_2->allocated;

  FUNC_1(VAR_2->parent_idr, VAR_2->id);

  FUNC_0(&VAR_2->idr);
  FUNC_2(VAR_2->name);
  FUNC_2(VAR_2->zone_dev_attrs);
  FUNC_2(VAR_2->constraints);
  if (VAR_2->ops->release)
   VAR_2->ops->release(VAR_2);
  if (VAR_1)
   FUNC_2(VAR_2);
 } else {
  struct powercap_control_type *VAR_3 =
      FUNC_6(VAR_0);


  VAR_1 = VAR_3->allocated;
  FUNC_0(&VAR_3->idr);
  FUNC_3(&VAR_3->lock);
  if (VAR_3->ops && VAR_3->ops->release)
   VAR_3->ops->release(VAR_3);
  if (VAR_1)
   FUNC_2(VAR_3);
 }
}
