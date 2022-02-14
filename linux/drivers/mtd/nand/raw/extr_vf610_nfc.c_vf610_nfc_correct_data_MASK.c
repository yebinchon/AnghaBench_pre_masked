
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {int strength; int size; } ;
struct TYPE_4__ {TYPE_1__ ecc; } ;
struct vf610_nfc {int data_access; TYPE_2__ chip; } ;
struct nand_chip {int dummy; } ;
struct mtd_info {int oobsize; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 struct vf610_nfc* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (int *,int ,int *,int ,int *,int ,int) ;
 int FUNC_3 (TYPE_2__*,int,int ,int *,int ) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct vf610_nfc*,scalar_t__) ;

__attribute__((used)) static inline int FUNC_6(struct nand_chip *VAR_4, uint8_t *VAR_5,
      uint8_t *VAR_6, int VAR_7)
{
 struct vf610_nfc *VAR_8 = FUNC_1(VAR_4);
 struct mtd_info *VAR_9 = FUNC_4(VAR_4);
 u32 VAR_10 = FUNC_0(0) + VAR_0 + VAR_1;
 u8 VAR_11;
 u8 VAR_12;
 int VAR_13 = VAR_8->chip.ecc.strength / 2;

 VAR_11 = FUNC_5(VAR_8, VAR_10) & 0xff;
 VAR_12 = VAR_11 & VAR_2;

 if (!(VAR_11 & VAR_3))
  return VAR_12;

 VAR_8->data_access = 1;
 FUNC_3(&VAR_8->chip, VAR_7, 0, VAR_6, VAR_9->oobsize);
 VAR_8->data_access = 0;





 return FUNC_2(VAR_5, VAR_8->chip.ecc.size, VAR_6,
        VAR_9->oobsize, ((void*)0), 0,
        VAR_13);
}
