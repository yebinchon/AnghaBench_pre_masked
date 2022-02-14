
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nand_ecc_step_info {int stepsize; int nstrengths; int* strengths; } ;
struct nand_ecc_caps {int nstepinfos; int (* calc_ecc_bytes ) (int,int) ;struct nand_ecc_step_info* stepinfos; } ;
struct TYPE_6__ {int size; int strength; int bytes; } ;
struct TYPE_4__ {int step_size; int strength; } ;
struct TYPE_5__ {TYPE_1__ eccreq; } ;
struct nand_chip {TYPE_3__ ecc; TYPE_2__ base; } ;
struct mtd_info {int writesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(struct nand_chip *VAR_2,
     const struct nand_ecc_caps *VAR_3, int VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_1(VAR_2);
 const struct nand_ecc_step_info *VAR_6;
 int VAR_7 = VAR_2->base.eccreq.step_size;
 int VAR_8 = VAR_2->base.eccreq.strength;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17;
 int VAR_18 = VAR_1;
 int VAR_19, VAR_20;


 if (!VAR_7 || !VAR_8)
  return -VAR_0;


 VAR_9 = VAR_5->writesize / VAR_7 * VAR_8;

 for (VAR_19 = 0; VAR_19 < VAR_3->nstepinfos; VAR_19++) {
  VAR_6 = &VAR_3->stepinfos[VAR_19];
  VAR_10 = VAR_6->stepsize;

  for (VAR_20 = 0; VAR_20 < VAR_6->nstrengths; VAR_20++) {
   VAR_11 = VAR_6->strengths[VAR_20];






   if (VAR_10 < VAR_7 && VAR_11 < VAR_8)
    continue;

   if (VAR_5->writesize % VAR_10)
    continue;

   VAR_12 = VAR_5->writesize / VAR_10;

   VAR_13 = VAR_3->calc_ecc_bytes(VAR_10, VAR_11);
   if (FUNC_0(VAR_13 < 0))
    continue;
   VAR_14 = VAR_13 * VAR_12;

   if (VAR_14 > VAR_4 ||
       VAR_11 * VAR_12 < VAR_9)
    continue;





   if (VAR_14 < VAR_18) {
    VAR_18 = VAR_14;
    VAR_15 = VAR_10;
    VAR_16 = VAR_11;
    VAR_17 = VAR_13;
   }
  }
 }

 if (VAR_18 == VAR_1)
  return -VAR_0;

 VAR_2->ecc.size = VAR_15;
 VAR_2->ecc.strength = VAR_16;
 VAR_2->ecc.bytes = VAR_17;

 return 0;
}
