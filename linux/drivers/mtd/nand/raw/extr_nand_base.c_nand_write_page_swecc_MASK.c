
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int size; int bytes; int steps; int (* write_page_raw ) (struct nand_chip*,int const*,int,int) ;int total; int (* calculate ) (struct nand_chip*,int const*,int *) ;int * calc_buf; } ;
struct nand_chip {TYPE_1__ ecc; int oob_poi; } ;
struct mtd_info {int dummy; } ;


 int FUNC_0 (struct mtd_info*,int *,int ,int ,int ) ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct nand_chip*,int const*,int *) ;
 int FUNC_3 (struct nand_chip*,int const*,int,int) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_0, const uint8_t *VAR_1,
     int VAR_2, int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_1(VAR_0);
 int VAR_5, VAR_6 = VAR_0->ecc.size, VAR_7;
 int VAR_8 = VAR_0->ecc.bytes;
 int VAR_9 = VAR_0->ecc.steps;
 uint8_t *VAR_10 = VAR_0->ecc.calc_buf;
 const uint8_t *VAR_11 = VAR_1;


 for (VAR_5 = 0; VAR_9; VAR_9--, VAR_5 += VAR_8, VAR_11 += VAR_6)
  VAR_0->ecc.calculate(VAR_0, VAR_11, &VAR_10[VAR_5]);

 VAR_7 = FUNC_0(VAR_4, VAR_10, VAR_0->oob_poi, 0,
      VAR_0->ecc.total);
 if (VAR_7)
  return VAR_7;

 return VAR_0->ecc.write_page_raw(VAR_0, VAR_1, 1, VAR_3);
}
