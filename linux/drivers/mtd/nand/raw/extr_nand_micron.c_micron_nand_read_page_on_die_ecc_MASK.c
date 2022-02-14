
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u8 ;
struct TYPE_2__ {int strength; } ;
struct nand_chip {TYPE_1__ ecc; int * oob_poi; } ;
struct mtd_info {int oobsize; int writesize; } ;


 int FUNC_0 (struct nand_chip*,int) ;
 int FUNC_1 (struct nand_chip*,int ,int *,int,int) ;
 int FUNC_2 (struct nand_chip*,int ) ;
 int FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*,int *,int ,int) ;
 int FUNC_5 (struct nand_chip*,int,int ,int *,int ) ;
 int FUNC_6 (struct nand_chip*,int *) ;
 struct mtd_info* FUNC_7 (struct nand_chip*) ;

__attribute__((used)) static int
FUNC_8(struct nand_chip *VAR_0, uint8_t *VAR_1,
     int VAR_2, int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_7(VAR_0);
 u8 VAR_5;
 int VAR_6, VAR_7 = 0;

 VAR_6 = FUNC_0(VAR_0, 1);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_5(VAR_0, VAR_3, 0, ((void*)0), 0);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_6(VAR_0, &VAR_5);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_3(VAR_0);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_4(VAR_0, VAR_1, VAR_4->writesize, 0);
 if (!VAR_6 && VAR_2)
  VAR_6 = FUNC_4(VAR_0, VAR_0->oob_poi, VAR_4->oobsize,
     0);

 if (VAR_0->ecc.strength == 4)
  VAR_7 = FUNC_1(VAR_0, VAR_5,
              VAR_1, VAR_3,
              VAR_2);
 else
  VAR_7 = FUNC_2(VAR_0, VAR_5);

out:
 FUNC_0(VAR_0, 0);

 return VAR_6 ? VAR_6 : VAR_7;
}
