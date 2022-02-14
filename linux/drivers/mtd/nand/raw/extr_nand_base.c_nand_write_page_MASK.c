
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int (* write_subpage ) (struct nand_chip*,scalar_t__,int,int const*,int,int) ;int (* write_page_raw ) (struct nand_chip*,int const*,int,int) ;int (* write_page ) (struct nand_chip*,int const*,int,int) ;} ;
struct nand_chip {int options; TYPE_1__ ecc; } ;
struct mtd_info {int writesize; } ;


 int VAR_0 ;
 struct mtd_info* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct nand_chip*,int const*,int,int) ;
 int FUNC_2 (struct nand_chip*,scalar_t__,int,int const*,int,int) ;
 int FUNC_3 (struct nand_chip*,int const*,int,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_1, uint32_t VAR_2,
      int VAR_3, const uint8_t *VAR_4, int VAR_5,
      int VAR_6, int VAR_7)
{
 struct mtd_info *VAR_8 = FUNC_0(VAR_1);
 int VAR_9, VAR_10;

 if (!(VAR_1->options & VAR_0) &&
  VAR_1->ecc.write_subpage)
  VAR_10 = VAR_2 || (VAR_3 < VAR_8->writesize);
 else
  VAR_10 = 0;

 if (FUNC_4(VAR_7))
  VAR_9 = VAR_1->ecc.write_page_raw(VAR_1, VAR_4, VAR_5,
        VAR_6);
 else if (VAR_10)
  VAR_9 = VAR_1->ecc.write_subpage(VAR_1, VAR_2, VAR_3, VAR_4,
       VAR_5, VAR_6);
 else
  VAR_9 = VAR_1->ecc.write_page(VAR_1, VAR_4, VAR_5, VAR_6);

 if (VAR_9 < 0)
  return VAR_9;

 return 0;
}
