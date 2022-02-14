
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int steps; int (* read_page_raw ) (struct nand_chip*,void*,int,int) ;int size; int strength; } ;
struct nand_chip {int page_shift; TYPE_1__ ecc; void* oob_poi; } ;
struct mtd_info {int oobsize; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (void*,int,void*,int,int *,int ,int ) ;
 void* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*,void*,int,int) ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_0,
    struct nand_chip *VAR_1, void *VAR_2, u64 VAR_3)
{
 int VAR_4, VAR_5;
 void *VAR_6 = VAR_1->oob_poi;
 int VAR_7 = 0;
 int VAR_8 = VAR_3 >> VAR_1->page_shift;
 int VAR_9;
 void *VAR_10;

 if (!VAR_2)
  VAR_2 = FUNC_2(VAR_1);

 VAR_5 = VAR_0->oobsize / VAR_1->ecc.steps;


 VAR_9 = VAR_1->ecc.read_page_raw(VAR_1, VAR_2, 1, VAR_8);
 if (VAR_9)
  return VAR_9;

 for (VAR_4 = 0; VAR_4 < VAR_1->ecc.steps; VAR_4++, VAR_6 += VAR_5) {
  VAR_10 = VAR_2 + VAR_1->ecc.size * VAR_4;
  VAR_9 = FUNC_1(VAR_10,
        VAR_1->ecc.size,
        VAR_6, VAR_5, ((void*)0), 0,
        VAR_1->ecc.strength);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_7 = FUNC_0(VAR_7, VAR_9);
 }

 return VAR_7;
}
