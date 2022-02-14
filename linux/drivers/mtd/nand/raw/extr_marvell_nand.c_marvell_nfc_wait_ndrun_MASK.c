
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nand_chip {int controller; } ;
struct marvell_nfc {scalar_t__ regs; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int,int,int ,int ) ;
 struct marvell_nfc* FUNC_3 (int ) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_4)
{
 struct marvell_nfc *VAR_5 = FUNC_3(VAR_4->controller);
 u32 VAR_6;
 int VAR_7;





 VAR_7 = FUNC_2(VAR_5->regs + VAR_0, VAR_6,
      (VAR_6 & VAR_1) == 0,
      VAR_2, VAR_3);
 if (VAR_7) {
  FUNC_0(VAR_5->dev, "Timeout on NAND controller run mode\n");
  FUNC_4(FUNC_1(VAR_5->regs + VAR_0) & ~VAR_1,
          VAR_5->regs + VAR_0);
  return VAR_7;
 }

 return 0;
}
