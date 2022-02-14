
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct nand_chip {int const* oob_poi; } ;
struct mtd_info {int oobsize; int writesize; } ;


 int FUNC_0 (struct nand_chip*,int const*,int ) ;
 int FUNC_1 (struct nand_chip*,int,int ,int *,int ) ;
 int FUNC_2 (struct nand_chip*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_0, uint32_t VAR_1,
      uint32_t VAR_2, const uint8_t *VAR_3,
      int VAR_4, int VAR_5)
{
 struct mtd_info *VAR_6 = FUNC_3(VAR_0);

 FUNC_1(VAR_0, VAR_5, 0, ((void*)0), 0);
 FUNC_0(VAR_0, VAR_3, VAR_6->writesize);
 FUNC_0(VAR_0, VAR_0->oob_poi, VAR_6->oobsize);
 return FUNC_2(VAR_0);
}
