
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_ecc_step_info {int stepsize; int nstrengths; int* strengths; } ;
struct nand_ecc_caps {int nstepinfos; int (* calc_ecc_bytes ) (int,int) ;struct nand_ecc_step_info* stepinfos; } ;
struct TYPE_2__ {int size; int strength; int bytes; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_info {int writesize; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(struct nand_chip *VAR_1,
    const struct nand_ecc_caps *VAR_2, int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_1(VAR_1);
 const struct nand_ecc_step_info *VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13, VAR_14;
 int VAR_15, VAR_16;

 for (VAR_15 = 0; VAR_15 < VAR_2->nstepinfos; VAR_15++) {
  VAR_5 = &VAR_2->stepinfos[VAR_15];
  VAR_6 = VAR_5->stepsize;


  if (VAR_1->ecc.size && VAR_6 != VAR_1->ecc.size)
   continue;

  for (VAR_16 = 0; VAR_16 < VAR_5->nstrengths; VAR_16++) {
   VAR_7 = VAR_5->strengths[VAR_16];

   if (VAR_4->writesize % VAR_6)
    continue;

   VAR_8 = VAR_4->writesize / VAR_6;

   VAR_9 = VAR_2->calc_ecc_bytes(VAR_6, VAR_7);
   if (FUNC_0(VAR_9 < 0))
    continue;

   if (VAR_9 * VAR_8 > VAR_3)
    continue;

   VAR_10 = VAR_7 * VAR_8;





   if (VAR_10 > VAR_11 ||
       (VAR_10 == VAR_11 && VAR_6 > VAR_12)) {
    VAR_11 = VAR_10;
    VAR_12 = VAR_6;
    VAR_13 = VAR_7;
    VAR_14 = VAR_9;
   }
  }
 }

 if (!VAR_11)
  return -VAR_0;

 VAR_1->ecc.size = VAR_12;
 VAR_1->ecc.strength = VAR_13;
 VAR_1->ecc.bytes = VAR_14;

 return 0;
}
