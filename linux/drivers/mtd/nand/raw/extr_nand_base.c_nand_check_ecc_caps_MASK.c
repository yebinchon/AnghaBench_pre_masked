
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
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int
FUNC_4(struct nand_chip *VAR_2,
      const struct nand_ecc_caps *VAR_3, int VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_1(VAR_2);
 const struct nand_ecc_step_info *VAR_6;
 int VAR_7 = VAR_2->ecc.size;
 int VAR_8 = VAR_2->ecc.strength;
 int VAR_9, VAR_10 = VAR_5->writesize / VAR_7;
 int VAR_11, VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_3->nstepinfos; VAR_11++) {
  VAR_6 = &VAR_3->stepinfos[VAR_11];

  if (VAR_6->stepsize != VAR_7)
   continue;

  for (VAR_12 = 0; VAR_12 < VAR_6->nstrengths; VAR_12++) {
   if (VAR_6->strengths[VAR_12] != VAR_8)
    continue;

   VAR_9 = VAR_3->calc_ecc_bytes(VAR_7,
        VAR_8);
   if (FUNC_0(VAR_9 < 0))
    return VAR_9;

   if (VAR_9 * VAR_10 > VAR_4) {
    FUNC_2("ECC (step, strength) = (%d, %d) does not fit in OOB",
           VAR_7, VAR_8);
    return -VAR_0;
   }

   VAR_2->ecc.bytes = VAR_9;

   return 0;
  }
 }

 FUNC_2("ECC (step, strength) = (%d, %d) not supported on this controller",
        VAR_7, VAR_8);

 return -VAR_1;
}
