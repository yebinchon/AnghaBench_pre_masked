
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iss_csiphy {TYPE_1__* iss; int cfg_regs; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct iss_csiphy *VAR_5, u32 VAR_6)
{
 u32 VAR_7;
 u8 VAR_8;

 FUNC_2(VAR_5->iss, VAR_5->cfg_regs, VAR_0,
         VAR_1,
         VAR_6 | VAR_3);

 VAR_8 = 0;
 do {
  FUNC_3(1);
  VAR_7 = FUNC_1(VAR_5->iss, VAR_5->cfg_regs, VAR_0)
      & VAR_2;

  if (VAR_7 != VAR_6 >> 2)
   VAR_8++;

 } while ((VAR_7 != VAR_6 >> 2) && (VAR_8 < 250));

 if (VAR_8 == 250) {
  FUNC_0(VAR_5->iss->dev, "CSI2 CIO set power failed!\n");
  return -VAR_4;
 }

 return 0;
}
