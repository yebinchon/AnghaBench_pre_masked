
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int deep_sleep_required; scalar_t__ mesh_dev; scalar_t__ dev; scalar_t__ is_deep_sleep; } ;


 int FUNC_0 (struct lbs_private*,int ) ;
 int FUNC_1 (struct lbs_private*,int) ;
 int FUNC_2 (scalar_t__,char*,int) ;
 int FUNC_3 (scalar_t__) ;

int FUNC_4(struct lbs_private *VAR_0)
{
 int VAR_1;

 if (VAR_0->is_deep_sleep) {
  VAR_1 = FUNC_0(VAR_0, 0);
  if (VAR_1) {
   FUNC_2(VAR_0->dev,
       "deep sleep cancellation failed: %d\n", VAR_1);
   return VAR_1;
  }
  VAR_0->deep_sleep_required = 1;
 }

 VAR_1 = FUNC_1(VAR_0, 1);

 FUNC_3(VAR_0->dev);
 if (VAR_0->mesh_dev)
  FUNC_3(VAR_0->mesh_dev);

 return VAR_1;
}
