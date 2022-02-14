
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int dev; } ;
struct hl_debug_params {int reg_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct hl_device*,struct hl_debug_params*) ;
 int FUNC_2 (struct hl_device*,struct hl_debug_params*) ;

void FUNC_3(struct hl_device *VAR_2)
{
 struct hl_debug_params VAR_3 = {};
 int VAR_4, VAR_5;

 for (VAR_4 = VAR_0 ; VAR_4 <= VAR_1 ; VAR_4++) {
  VAR_3.reg_idx = VAR_4;
  VAR_5 = FUNC_1(VAR_2, &VAR_3);
  if (VAR_5)
   FUNC_0(VAR_2->dev, "halt ETF failed, %d/%d\n", VAR_5, VAR_4);
 }

 VAR_5 = FUNC_2(VAR_2, &VAR_3);
 if (VAR_5)
  FUNC_0(VAR_2->dev, "halt ETR failed, %d\n", VAR_5);
}
