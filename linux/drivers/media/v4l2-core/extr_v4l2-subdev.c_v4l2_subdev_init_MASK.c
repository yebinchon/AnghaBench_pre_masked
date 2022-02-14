
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_ops {int dummy; } ;
struct TYPE_2__ {char* name; int function; int obj_type; } ;
struct v4l2_subdev {char* name; TYPE_1__ entity; int * host_priv; int * dev_priv; scalar_t__ grp_id; scalar_t__ flags; int * v4l2_dev; struct v4l2_subdev_ops const* ops; int list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct v4l2_subdev *VAR_2, const struct v4l2_subdev_ops *VAR_3)
{
 FUNC_1(&VAR_2->list);
 FUNC_0(!VAR_3);
 VAR_2->ops = VAR_3;
 VAR_2->v4l2_dev = ((void*)0);
 VAR_2->flags = 0;
 VAR_2->name[0] = '\0';
 VAR_2->grp_id = 0;
 VAR_2->dev_priv = ((void*)0);
 VAR_2->host_priv = ((void*)0);





}
