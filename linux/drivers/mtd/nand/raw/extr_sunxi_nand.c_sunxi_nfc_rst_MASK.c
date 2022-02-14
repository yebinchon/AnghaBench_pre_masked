
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sunxi_nfc {int dev; scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int,int,int,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct sunxi_nfc *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 FUNC_2(0, VAR_4->regs + VAR_2);
 FUNC_2(VAR_3, VAR_4->regs + VAR_1);

 VAR_6 = FUNC_1(VAR_4->regs + VAR_1, VAR_5,
     !(VAR_5 & VAR_3), 1,
     VAR_0 * 1000);
 if (VAR_6)
  FUNC_0(VAR_4->dev, "wait for NAND controller reset timedout\n");

 return VAR_6;
}
