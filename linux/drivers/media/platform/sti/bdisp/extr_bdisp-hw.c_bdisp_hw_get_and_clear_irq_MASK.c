
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bdisp_dev {scalar_t__ regs; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

int FUNC_3(struct bdisp_dev *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3->regs + VAR_1);


 if (!(VAR_4 & VAR_2)) {
  FUNC_0(VAR_3->dev, "Unexpected IT status: 0x%08X\n", VAR_4);
  FUNC_2(VAR_4, VAR_3->regs + VAR_1);
  return -1;
 }


 FUNC_2(VAR_4, VAR_3->regs + VAR_1);
 FUNC_2(0, VAR_3->regs + VAR_0);

 return 0;
}
