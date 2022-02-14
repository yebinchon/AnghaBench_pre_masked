
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct isp_csiphy {TYPE_1__* isp; int cfg_regs; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct isp_csiphy *VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 u8 VAR_7;

 FUNC_1(VAR_4->isp, VAR_4->cfg_regs, VAR_1,
   VAR_2, VAR_5);

 VAR_7 = 0;
 do {
  FUNC_3(50);
  VAR_6 = FUNC_2(VAR_4->isp, VAR_4->cfg_regs, VAR_1) &
        VAR_3;

  if (VAR_6 != VAR_5 >> 2)
   VAR_7++;

 } while ((VAR_6 != VAR_5 >> 2) && (VAR_7 < 100));

 if (VAR_7 == 100) {
  FUNC_0(VAR_4->isp->dev, "CSI2 CIO set power failed!\n");
  return -VAR_0;
 }

 return 0;
}
