
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_oob_ops {scalar_t__ retlen; scalar_t__ oobretlen; scalar_t__ len; scalar_t__ datbuf; scalar_t__ oobbuf; scalar_t__ ooblen; } ;
struct TYPE_2__ {int corrected; int failed; } ;
struct mtd_info {scalar_t__ size; TYPE_1__ ecc_stats; } ;
struct mtd_concat {int num_subdev; struct mtd_info** subdev; } ;
typedef scalar_t__ loff_t ;


 struct mtd_concat* FUNC_0 (struct mtd_info*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct mtd_info*,scalar_t__,struct mtd_oob_ops*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct mtd_info *VAR_1, loff_t VAR_2, struct mtd_oob_ops *VAR_3)
{
 struct mtd_concat *VAR_4 = FUNC_0(VAR_1);
 struct mtd_oob_ops VAR_5 = *VAR_3;
 int VAR_6, VAR_7, VAR_8 = 0;

 VAR_3->retlen = VAR_3->oobretlen = 0;

 for (VAR_6 = 0; VAR_6 < VAR_4->num_subdev; VAR_6++) {
  struct mtd_info *VAR_9 = VAR_4->subdev[VAR_6];

  if (VAR_2 >= VAR_9->size) {
   VAR_2 -= VAR_9->size;
   continue;
  }


  if (VAR_2 + VAR_5.len > VAR_9->size)
   VAR_5.len = VAR_9->size - VAR_2;

  VAR_7 = FUNC_3(VAR_9, VAR_2, &VAR_5);
  VAR_3->retlen += VAR_5.retlen;
  VAR_3->oobretlen += VAR_5.oobretlen;


  if (FUNC_4(VAR_7)) {
   if (FUNC_2(VAR_7)) {
    VAR_1->ecc_stats.failed++;
    VAR_8 = VAR_7;
   } else if (FUNC_1(VAR_7)) {
    VAR_1->ecc_stats.corrected++;

    if (!VAR_8)
     VAR_8 = VAR_7;
   } else
    return VAR_7;
  }

  if (VAR_5.datbuf) {
   VAR_5.len = VAR_3->len - VAR_3->retlen;
   if (!VAR_5.len)
    return VAR_8;
   VAR_5.datbuf += VAR_5.retlen;
  }
  if (VAR_5.oobbuf) {
   VAR_5.ooblen = VAR_3->ooblen - VAR_3->oobretlen;
   if (!VAR_5.ooblen)
    return VAR_8;
   VAR_5.oobbuf += VAR_3->oobretlen;
  }

  VAR_2 = 0;
 }
 return -VAR_0;
}
