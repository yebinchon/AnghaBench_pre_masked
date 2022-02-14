
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
typedef int u32 ;
struct vf610_nfc {int ecc_mode; scalar_t__ regs; } ;
struct nand_chip {int cur_cs; } ;
struct mtd_info {int writesize; int oobsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int ) ;
 struct vf610_nfc* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct nand_chip*,int*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct vf610_nfc*,int ) ;
 int FUNC_5 (struct nand_chip*,int,int*,int*) ;
 int FUNC_6 (struct vf610_nfc*,int ,int,int,int,int) ;
 int FUNC_7 (struct nand_chip*,int ) ;
 int FUNC_8 (scalar_t__,int const*,int,int) ;

__attribute__((used)) static int FUNC_9(struct nand_chip *VAR_14, const uint8_t *VAR_15,
    int VAR_16, int VAR_17)
{
 struct vf610_nfc *VAR_18 = FUNC_1(VAR_14);
 struct mtd_info *VAR_19 = FUNC_3(VAR_14);
 int VAR_20 = VAR_19->writesize + VAR_19->oobsize;
 u32 VAR_21 = 0, VAR_22 = 0, VAR_23 = 0, VAR_24 = 0;
 u8 VAR_25;
 int VAR_26;

 FUNC_7(VAR_14, VAR_14->cur_cs);

 VAR_23 |= VAR_12 << VAR_0;
 VAR_24 |= VAR_5 | VAR_3 | VAR_4;

 FUNC_5(VAR_14, VAR_17, &VAR_24, &VAR_21);

 VAR_22 |= VAR_11 << VAR_1;
 VAR_24 |= VAR_6 | VAR_8;





 FUNC_8(VAR_18->regs + FUNC_0(0), VAR_15,
        VAR_19->writesize, 0);

 VAR_24 |= VAR_7;
 VAR_23 |= VAR_24 << VAR_2;

 FUNC_4(VAR_18, VAR_18->ecc_mode);
 FUNC_6(VAR_18, 0, VAR_21, VAR_22, VAR_23, VAR_20);
 FUNC_4(VAR_18, VAR_9);

 VAR_26 = FUNC_2(VAR_14, &VAR_25);
 if (VAR_26)
  return VAR_26;

 if (VAR_25 & VAR_13)
  return -VAR_10;

 return 0;
}
