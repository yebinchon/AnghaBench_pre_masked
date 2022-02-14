
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sunxi_nfc {scalar_t__ regs; } ;
struct nand_ecc_ctrl {scalar_t__ bytes; scalar_t__ size; } ;
struct nand_chip {struct nand_ecc_ctrl ecc; int controller; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int*,int,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 struct sunxi_nfc* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct nand_chip *VAR_2, u8 *VAR_3, u8 *VAR_4,
        int VAR_5, u32 VAR_6, bool *VAR_7)
{
 struct sunxi_nfc *VAR_8 = FUNC_6(VAR_2->controller);
 struct nand_ecc_ctrl *VAR_9 = &VAR_2->ecc;
 u32 VAR_10;

 *VAR_7 = 0;

 if (VAR_6 & FUNC_0(VAR_5))
  return -VAR_0;

 if (VAR_6 & FUNC_2(VAR_5)) {
  u8 VAR_11;

  if (FUNC_7(!(FUNC_5(VAR_8->regs + VAR_1) & 0x1))) {
   VAR_11 = 0x0;
  } else {
   VAR_11 = 0xff;
   *VAR_7 = 1;
  }

  if (VAR_3)
   FUNC_4(VAR_3, VAR_11, VAR_9->size);

  if (VAR_4)
   FUNC_4(VAR_4, VAR_11, VAR_9->bytes + 4);

  return 0;
 }

 VAR_10 = FUNC_5(VAR_8->regs + FUNC_3(VAR_5));

 return FUNC_1(VAR_5, VAR_10);
}
