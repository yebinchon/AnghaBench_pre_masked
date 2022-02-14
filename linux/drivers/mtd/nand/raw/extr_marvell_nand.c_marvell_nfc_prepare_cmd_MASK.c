
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nand_chip {int controller; } ;
struct marvell_nfc {scalar_t__ regs; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int,int,int ,int ) ;
 struct marvell_nfc* FUNC_5 (int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_7)
{
 struct marvell_nfc *VAR_8 = FUNC_5(VAR_7->controller);
 u32 VAR_9, VAR_10;
 int VAR_11;


 VAR_11 = FUNC_1(VAR_7);
 if (VAR_11) {
  FUNC_0(VAR_8->dev, "Last operation did not succeed\n");
  return VAR_11;
 }

 VAR_9 = FUNC_3(VAR_8->regs + VAR_1);
 FUNC_6(FUNC_2(VAR_8->regs + VAR_3), VAR_8->regs + VAR_3);


 FUNC_6(VAR_9 | VAR_2, VAR_8->regs + VAR_1);
 VAR_11 = FUNC_4(VAR_8->regs + VAR_3, VAR_10,
      VAR_10 & VAR_4,
      VAR_5, VAR_6);
 if (VAR_11) {
  FUNC_0(VAR_8->dev, "Timeout on WRCMDRE\n");
  return -VAR_0;
 }


 FUNC_6(VAR_4, VAR_8->regs + VAR_3);

 return 0;
}
