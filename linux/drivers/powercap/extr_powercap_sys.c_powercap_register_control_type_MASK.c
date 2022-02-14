
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct powercap_control_type_ops {int release; } ;
struct TYPE_3__ {int * class; } ;
struct powercap_control_type {int allocated; int node; int idr; TYPE_1__ dev; struct powercap_control_type_ops const* ops; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct powercap_control_type* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct powercap_control_type*) ;
 struct powercap_control_type* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct powercap_control_type*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

struct powercap_control_type *FUNC_12(
    struct powercap_control_type *VAR_6,
    const char *VAR_7,
    const struct powercap_control_type_ops *VAR_8)
{
 int VAR_9;

 if (!VAR_7)
  return FUNC_0(-VAR_0);
 if (VAR_6) {
  if (!VAR_8 || !VAR_8->release)
   return FUNC_0(-VAR_0);
  FUNC_8(VAR_6, 0, sizeof(*VAR_6));
 } else {
  VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_2);
  if (!VAR_6)
   return FUNC_0(-VAR_1);
  VAR_6->allocated = 1;
 }
 FUNC_9(&VAR_6->lock);
 VAR_6->ops = VAR_8;
 FUNC_1(&VAR_6->node);
 VAR_6->dev.class = &VAR_3;
 FUNC_2(&VAR_6->dev, "%s", VAR_7);
 VAR_9 = FUNC_3(&VAR_6->dev);
 if (VAR_9) {
  if (VAR_6->allocated)
   FUNC_5(VAR_6);
  return FUNC_0(VAR_9);
 }
 FUNC_4(&VAR_6->idr);

 FUNC_10(&VAR_5);
 FUNC_7(&VAR_6->node, &VAR_4);
 FUNC_11(&VAR_5);

 return VAR_6;
}
