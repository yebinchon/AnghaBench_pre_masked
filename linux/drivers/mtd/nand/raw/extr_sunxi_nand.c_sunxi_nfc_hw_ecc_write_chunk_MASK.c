
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sunxi_nfc {scalar_t__ regs; } ;
struct nand_ecc_ctrl {int size; int bytes; } ;
struct nand_chip {struct nand_ecc_ctrl ecc; int controller; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct nand_chip*,int,int *,int ,int) ;
 int FUNC_1 (struct nand_chip*,int const*,int ,int,int) ;
 int FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*,int const*,int,int,int) ;
 int FUNC_5 (struct sunxi_nfc*) ;
 int FUNC_6 (struct sunxi_nfc*,int ,int,int ) ;
 struct sunxi_nfc* FUNC_7 (int ) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct nand_chip *VAR_6,
     const u8 *VAR_7, int VAR_8,
     const u8 *VAR_9, int VAR_10,
     int *VAR_11, bool VAR_12,
     int VAR_13)
{
 struct sunxi_nfc *VAR_14 = FUNC_7(VAR_6->controller);
 struct nand_ecc_ctrl *VAR_15 = &VAR_6->ecc;
 int VAR_16;

 if (VAR_8 != *VAR_11)
  FUNC_0(VAR_6, VAR_8, ((void*)0), 0, 0);

 FUNC_4(VAR_6, VAR_7, VAR_15->size, 0, VAR_13);

 if (VAR_8 + VAR_15->size != VAR_10)
  FUNC_0(VAR_6, VAR_10, ((void*)0), 0, 0);

 VAR_16 = FUNC_5(VAR_14);
 if (VAR_16)
  return VAR_16;

 FUNC_3(VAR_6);
 FUNC_1(VAR_6, VAR_9, 0, VAR_12, VAR_13);

 FUNC_8(VAR_3 | VAR_2 |
        VAR_0 | VAR_4,
        VAR_14->regs + VAR_5);

 VAR_16 = FUNC_6(VAR_14, VAR_1, 0, 0);
 FUNC_2(VAR_6);
 if (VAR_16)
  return VAR_16;

 *VAR_11 = VAR_10 + VAR_15->bytes + 4;

 return 0;
}
