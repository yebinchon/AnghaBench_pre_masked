
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
typedef int u32 ;
struct sunxi_nfc {scalar_t__ regs; int dmac; } ;
struct scatterlist {int dummy; } ;
struct nand_ecc_ctrl {int size; int bytes; int strength; } ;
struct nand_chip {int options; int * oob_poi; struct nand_ecc_ctrl ecc; int controller; } ;
struct mtd_info {int writesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nand_chip*,int,int *,int,int) ;
 int FUNC_4 (int *,int,int *,int,int *,int ,int ) ;
 struct mtd_info* FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct sunxi_nfc*,int ,struct scatterlist*) ;
 int FUNC_8 (struct sunxi_nfc*,int *,int,int,int ,struct scatterlist*) ;
 int FUNC_9 (struct nand_chip*,int *,int *,int,int,int*) ;
 int FUNC_10 (struct nand_chip*) ;
 int FUNC_11 (struct nand_chip*) ;
 int FUNC_12 (struct nand_chip*,int *,int,int,int) ;
 int FUNC_13 (struct nand_chip*,int *,int *,int,int) ;
 int FUNC_14 (struct nand_chip*,unsigned int*,int) ;
 int FUNC_15 (struct nand_chip*,int,int) ;
 int FUNC_16 (struct nand_chip*) ;
 int FUNC_17 (struct nand_chip*) ;
 int FUNC_18 (struct sunxi_nfc*) ;
 int FUNC_19 (struct sunxi_nfc*,int ,int,int ) ;
 struct sunxi_nfc* FUNC_20 (int ) ;
 int FUNC_21 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_22(struct nand_chip *VAR_13, uint8_t *VAR_14,
         int VAR_15, int VAR_16,
         int VAR_17)
{
 bool VAR_18 = VAR_13->options & VAR_4;
 struct sunxi_nfc *VAR_19 = FUNC_20(VAR_13->controller);
 struct mtd_info *VAR_20 = FUNC_5(VAR_13);
 struct nand_ecc_ctrl *VAR_21 = &VAR_13->ecc;
 unsigned int VAR_22 = 0;
 int VAR_23, VAR_24, VAR_25 = 0;
 struct scatterlist VAR_26;
 u32 VAR_27;

 VAR_23 = FUNC_18(VAR_19);
 if (VAR_23)
  return VAR_23;

 VAR_23 = FUNC_8(VAR_19, VAR_14, VAR_21->size, VAR_17,
           VAR_0, &VAR_26);
 if (VAR_23)
  return VAR_23;

 FUNC_11(VAR_13);
 FUNC_15(VAR_13, VAR_16, 0);
 FUNC_17(VAR_13);

 FUNC_21((VAR_3 << 16) | (VAR_2 << 8) |
        VAR_1, VAR_19->regs + VAR_12);

 FUNC_1(VAR_19->dmac);

 FUNC_21(VAR_9 | VAR_6 | VAR_7,
        VAR_19->regs + VAR_10);

 VAR_23 = FUNC_19(VAR_19, VAR_5, 0, 0);
 if (VAR_23)
  FUNC_2(VAR_19->dmac);

 FUNC_16(VAR_13);
 FUNC_10(VAR_13);

 FUNC_7(VAR_19, VAR_0, &VAR_26);

 if (VAR_23)
  return VAR_23;

 VAR_27 = FUNC_6(VAR_19->regs + VAR_11);

 for (VAR_24 = 0; VAR_24 < VAR_17; VAR_24++) {
  int VAR_28 = VAR_24 * VAR_21->size;
  int VAR_29 = VAR_24 * (VAR_21->bytes + 4);
  u8 *VAR_30 = VAR_14 + VAR_28;
  u8 *VAR_31 = VAR_13->oob_poi + VAR_29;
  bool VAR_32;

  VAR_23 = FUNC_9(VAR_13, VAR_18 ? VAR_30 : ((void*)0),
            VAR_15 ? VAR_31 : ((void*)0),
            VAR_24, VAR_27, &VAR_32);


  if (VAR_23 < 0)
   continue;

  if (VAR_15 && !VAR_32) {

   FUNC_3(VAR_13,
         VAR_20->writesize + VAR_29,
         VAR_31, VAR_21->bytes + 4, 0);

   FUNC_12(VAR_13, VAR_31, VAR_24,
           !VAR_24, VAR_16);
  }

  if (VAR_32)
   VAR_25 = 1;

  FUNC_14(VAR_13, &VAR_22, VAR_23);
 }

 if (VAR_27 & VAR_8) {
  for (VAR_24 = 0; VAR_24 < VAR_17; VAR_24++) {
   int VAR_33 = VAR_24 * VAR_21->size;
   int VAR_34 = VAR_24 * (VAR_21->bytes + 4);
   u8 *VAR_35 = VAR_14 + VAR_33;
   u8 *VAR_36 = VAR_13->oob_poi + VAR_34;

   if (!(VAR_27 & FUNC_0(VAR_24)))
    continue;






   if (VAR_18)
    FUNC_3(VAR_13, VAR_33,
          VAR_35, VAR_21->size,
          0);


   FUNC_3(VAR_13,
         VAR_20->writesize + VAR_34,
         VAR_36, VAR_21->bytes + 4, 0);

   VAR_23 = FUNC_4(VAR_35, VAR_21->size,
         VAR_36, VAR_21->bytes + 4,
         ((void*)0), 0,
         VAR_21->strength);
   if (VAR_23 >= 0)
    VAR_25 = 1;

   FUNC_14(VAR_13, &VAR_22, VAR_23);
  }
 }

 if (VAR_15)
  FUNC_13(VAR_13, VAR_13->oob_poi,
      ((void*)0), !VAR_25,
      VAR_16);

 return VAR_22;
}
