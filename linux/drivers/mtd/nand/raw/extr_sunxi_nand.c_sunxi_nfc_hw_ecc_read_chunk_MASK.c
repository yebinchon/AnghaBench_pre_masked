
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sunxi_nfc {scalar_t__ regs; } ;
struct nand_ecc_ctrl {int size; int bytes; int strength; } ;
struct nand_chip {int options; struct nand_ecc_ctrl ecc; int controller; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,scalar_t__,int) ;
 int FUNC_1 (struct nand_chip*,int,int *,int,int) ;
 int FUNC_2 (int *,int,int *,int,int *,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct nand_chip*,int *,int *,int ,int ,int*) ;
 int FUNC_5 (struct nand_chip*,int *,int ,int,int) ;
 int FUNC_6 (struct nand_chip*,unsigned int*,int) ;
 int FUNC_7 (struct nand_chip*) ;
 int FUNC_8 (struct nand_chip*) ;
 int FUNC_9 (struct nand_chip*,int *,int,int,int) ;
 int FUNC_10 (struct sunxi_nfc*) ;
 int FUNC_11 (struct sunxi_nfc*,int ,int,int ) ;
 struct sunxi_nfc* FUNC_12 (int ) ;
 int FUNC_13 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct nand_chip *VAR_8,
           u8 *VAR_9, int VAR_10,
           u8 *VAR_11, int VAR_12,
           int *VAR_13,
           unsigned int *VAR_14,
           bool VAR_15, bool VAR_16, int VAR_17)
{
 struct sunxi_nfc *VAR_18 = FUNC_12(VAR_8->controller);
 struct nand_ecc_ctrl *VAR_19 = &VAR_8->ecc;
 int VAR_20 = 0;
 bool VAR_21;
 int VAR_22;

 if (*VAR_13 != VAR_10)
  FUNC_1(VAR_8, VAR_10, ((void*)0), 0, 0);

 FUNC_9(VAR_8, ((void*)0), VAR_19->size, 0, VAR_17);

 if (VAR_10 + VAR_19->size != VAR_12)
  FUNC_1(VAR_8, VAR_12, ((void*)0), 0, 0);

 VAR_22 = FUNC_10(VAR_18);
 if (VAR_22)
  return VAR_22;

 FUNC_8(VAR_8);
 FUNC_13(VAR_3 | VAR_2 | VAR_4,
        VAR_18->regs + VAR_6);

 VAR_22 = FUNC_11(VAR_18, VAR_1, 0, 0);
 FUNC_7(VAR_8);
 if (VAR_22)
  return VAR_22;

 *VAR_13 = VAR_12 + VAR_19->bytes + 4;

 VAR_22 = FUNC_4(VAR_8, VAR_9, VAR_16 ? VAR_11 : ((void*)0), 0,
           FUNC_3(VAR_18->regs + VAR_7),
           &VAR_21);
 if (VAR_21)
  return 1;

 if (VAR_22 < 0) {




  if (VAR_8->options & VAR_0)
   FUNC_1(VAR_8, VAR_10, VAR_9,
         VAR_19->size, 0);
  else
   FUNC_0(VAR_9, VAR_18->regs + VAR_5,
          VAR_19->size);

  FUNC_1(VAR_8, VAR_12, VAR_11, VAR_19->bytes + 4,
        0);

  VAR_22 = FUNC_2(VAR_9, VAR_19->size,
        VAR_11, VAR_19->bytes + 4,
        ((void*)0), 0, VAR_19->strength);
  if (VAR_22 >= 0)
   VAR_20 = 1;
 } else {
  FUNC_0(VAR_9, VAR_18->regs + VAR_5, VAR_19->size);

  if (VAR_16) {
   FUNC_1(VAR_8, VAR_12, ((void*)0), 0,
         0);
   FUNC_9(VAR_8, VAR_11, VAR_19->bytes + 4,
            1, VAR_17);

   FUNC_5(VAR_8, VAR_11, 0,
           VAR_15, VAR_17);
  }
 }

 FUNC_6(VAR_8, VAR_14, VAR_22);

 return VAR_20;
}
