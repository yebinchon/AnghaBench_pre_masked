
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {scalar_t__ oob_poi; } ;
struct mtd_oob_ops {int mode; scalar_t__ ooboffs; } ;
struct mtd_info {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;



 int FUNC_2 (int *,scalar_t__,size_t) ;
 int FUNC_3 (struct mtd_info*,int *,scalar_t__,scalar_t__,size_t) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;

__attribute__((used)) static uint8_t *FUNC_5(struct nand_chip *VAR_0, uint8_t *VAR_1,
      struct mtd_oob_ops *VAR_2, size_t VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_4(VAR_0);
 int VAR_5;

 switch (VAR_2->mode) {

 case 129:
 case 128:
  FUNC_2(VAR_1, VAR_0->oob_poi + VAR_2->ooboffs, VAR_3);
  return VAR_1 + VAR_3;

 case 130:
  VAR_5 = FUNC_3(VAR_4, VAR_1, VAR_0->oob_poi,
        VAR_2->ooboffs, VAR_3);
  FUNC_1(VAR_5);
  return VAR_1 + VAR_3;

 default:
  FUNC_0();
 }
 return ((void*)0);
}
