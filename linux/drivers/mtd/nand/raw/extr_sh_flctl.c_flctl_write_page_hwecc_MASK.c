
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int (* write_buf ) (struct nand_chip*,int ,int ) ;} ;
struct nand_chip {int oob_poi; TYPE_1__ legacy; } ;
struct mtd_info {int oobsize; int writesize; } ;


 int FUNC_0 (struct nand_chip*,int,int ,int const*,int ) ;
 int FUNC_1 (struct nand_chip*) ;
 struct mtd_info* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_0, const uint8_t *VAR_1,
      int VAR_2, int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_2(VAR_0);

 FUNC_0(VAR_0, VAR_3, 0, VAR_1, VAR_4->writesize);
 VAR_0->legacy.write_buf(VAR_0, VAR_0->oob_poi, VAR_4->oobsize);
 return FUNC_1(VAR_0);
}
