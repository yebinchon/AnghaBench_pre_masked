
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {scalar_t__ setup_fw_on_resume; scalar_t__ dev; scalar_t__ deep_sleep_required; scalar_t__ mesh_dev; } ;


 int FUNC_0 (struct lbs_private*,int) ;
 int FUNC_1 (struct lbs_private*,int ) ;
 int FUNC_2 (struct lbs_private*) ;
 int FUNC_3 (scalar_t__,char*,int) ;
 int FUNC_4 (scalar_t__) ;

int FUNC_5(struct lbs_private *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0, 0);

 FUNC_4(VAR_0->dev);
 if (VAR_0->mesh_dev)
  FUNC_4(VAR_0->mesh_dev);

 if (VAR_0->deep_sleep_required) {
  VAR_0->deep_sleep_required = 0;
  VAR_1 = FUNC_0(VAR_0, 1);
  if (VAR_1)
   FUNC_3(VAR_0->dev,
       "deep sleep activation failed: %d\n", VAR_1);
 }

 if (VAR_0->setup_fw_on_resume)
  VAR_1 = FUNC_2(VAR_0);

 return VAR_1;
}
