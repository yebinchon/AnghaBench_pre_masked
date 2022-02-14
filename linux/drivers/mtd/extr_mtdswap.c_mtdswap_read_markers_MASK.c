
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct swap_eb {int flags; int erase_count; } ;
struct mtdswap_oobdata {int magic; int count; } ;
struct mtdswap_dev {TYPE_1__* mtd; scalar_t__ oob_buf; } ;
struct mtd_oob_ops {int ooblen; int mode; int * datbuf; scalar_t__ ooboffs; scalar_t__ oobbuf; } ;
typedef int loff_t ;
struct TYPE_3__ {int oobavail; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct mtdswap_dev*,struct swap_eb*) ;
 int FUNC_6 (struct mtdswap_dev*,int ,struct mtd_oob_ops*) ;

__attribute__((used)) static int FUNC_7(struct mtdswap_dev *VAR_8, struct swap_eb *VAR_9)
{
 struct mtdswap_oobdata *VAR_10, *VAR_11;
 int VAR_12;
 loff_t VAR_13;
 struct mtd_oob_ops VAR_14;

 VAR_13 = FUNC_5(VAR_8, VAR_9);


 if (FUNC_3(VAR_8->mtd) && FUNC_2(VAR_8->mtd, VAR_13))
  return VAR_3;

 VAR_14.ooblen = 2 * VAR_8->mtd->oobavail;
 VAR_14.oobbuf = VAR_8->oob_buf;
 VAR_14.ooboffs = 0;
 VAR_14.datbuf = ((void*)0);
 VAR_14.mode = VAR_7;

 VAR_12 = FUNC_6(VAR_8, VAR_13, &VAR_14);

 if (VAR_12 && !FUNC_4(VAR_12))
  return VAR_12;

 VAR_10 = (struct mtdswap_oobdata *)VAR_8->oob_buf;
 VAR_11 = (struct mtdswap_oobdata *)
  (VAR_8->oob_buf + VAR_8->mtd->oobavail);

 if (FUNC_0(VAR_10->magic) == VAR_1) {
  VAR_9->erase_count = FUNC_1(VAR_10->count);
  if (FUNC_4(VAR_12))
   VAR_12 = VAR_4;
  else {
   if (FUNC_0(VAR_11->magic) == VAR_2)
    VAR_12 = VAR_6;
   else
    VAR_12 = VAR_5;
  }
 } else {
  VAR_9->flags |= VAR_0;
  VAR_12 = VAR_6;
 }

 return VAR_12;
}
