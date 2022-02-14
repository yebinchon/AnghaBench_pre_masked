
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_oob_ops {scalar_t__ len; size_t ooblen; size_t ooboffs; int oobbuf; int datbuf; } ;
struct mtd_info {scalar_t__ size; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,struct mtd_info*) ;
 size_t FUNC_1 (struct mtd_info*,struct mtd_oob_ops*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_1, loff_t VAR_2,
        struct mtd_oob_ops *VAR_3)
{





 if (!VAR_3->datbuf)
  VAR_3->len = 0;

 if (!VAR_3->oobbuf)
  VAR_3->ooblen = 0;

 if (VAR_2 < 0 || VAR_2 + VAR_3->len > VAR_1->size)
  return -VAR_0;

 if (VAR_3->ooblen) {
  size_t VAR_4;

  if (VAR_3->ooboffs >= FUNC_1(VAR_1, VAR_3))
   return -VAR_0;

  VAR_4 = ((size_t)(FUNC_0(VAR_1->size, VAR_1) -
          FUNC_0(VAR_2, VAR_1)) *
        FUNC_1(VAR_1, VAR_3)) - VAR_3->ooboffs;
  if (VAR_3->ooblen > VAR_4)
   return -VAR_0;
 }

 return 0;
}
