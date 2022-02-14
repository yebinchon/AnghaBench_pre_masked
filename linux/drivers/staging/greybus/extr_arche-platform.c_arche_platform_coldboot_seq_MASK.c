
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arche_platform_drvdata {scalar_t__ state; int is_reset_act_hi; int svc_reset; int dev; int svc_ref_clk; int svc_sysboot; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct arche_platform_drvdata*,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int
FUNC_7(struct arche_platform_drvdata *VAR_1)
{
 int VAR_2;

 if (VAR_1->state == VAR_0)
  return 0;

 FUNC_3(VAR_1->dev, "Booting from cold boot state\n");

 FUNC_5(VAR_1->svc_reset, VAR_1->is_reset_act_hi);

 FUNC_4(VAR_1->svc_sysboot, 0);
 FUNC_6(100, 200);

 VAR_2 = FUNC_1(VAR_1->svc_ref_clk);
 if (VAR_2) {
  FUNC_2(VAR_1->dev, "failed to enable svc_ref_clk: %d\n",
   VAR_2);
  return VAR_2;
 }


 FUNC_5(VAR_1->svc_reset, !VAR_1->is_reset_act_hi);

 FUNC_0(VAR_1, VAR_0);

 return 0;
}
