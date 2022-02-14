
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mtd_oob_ops {size_t ooblen; size_t oobretlen; scalar_t__ oobbuf; int * datbuf; scalar_t__ ooboffs; scalar_t__ retlen; int len; int mode; } ;
typedef int loff_t ;
struct TYPE_3__ {int erasesize; int oobavail; int writesize; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int,scalar_t__,scalar_t__,size_t) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int,struct mtd_oob_ops*) ;
 int VAR_4 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,scalar_t__,size_t) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_6(int VAR_8)
{
 struct mtd_oob_ops VAR_9;
 int VAR_10 = 0;
 loff_t VAR_11 = (loff_t)VAR_8 * VAR_3->erasesize;
 size_t VAR_12 = VAR_3->oobavail * VAR_4;
 size_t VAR_13 = VAR_3->oobavail;
 size_t VAR_14;
 int VAR_15;

 FUNC_5(&VAR_6, VAR_7, VAR_12);
 VAR_9.mode = VAR_0;
 VAR_9.len = 0;
 VAR_9.retlen = 0;
 VAR_9.ooblen = VAR_12;
 VAR_9.oobretlen = 0;
 VAR_9.ooboffs = 0;
 VAR_9.datbuf = ((void*)0);
 VAR_9.oobbuf = VAR_5;


 VAR_10 = FUNC_2(VAR_3, VAR_11, &VAR_9);
 if (FUNC_1(VAR_10))
  VAR_10 = 0;

 if (VAR_10 || VAR_9.oobretlen != VAR_12) {
  FUNC_3("error: readoob failed at %#llx\n",
         (long long)VAR_11);
  VAR_2 += 1;
  return VAR_10 ? VAR_10 : -1;
 }


 for (VAR_15 = 0; VAR_15 < VAR_4; ++VAR_15, VAR_11 += VAR_3->writesize) {
  VAR_14 = FUNC_0(VAR_11, VAR_5 + (VAR_15 * VAR_13),
          VAR_7 + (VAR_15 * VAR_13), VAR_13);
  if (VAR_14 > VAR_1) {
   FUNC_3("error: verify failed at %#llx\n",
          (long long)VAR_11);
   VAR_2 += 1;
   if (VAR_2 > 1000) {
    FUNC_3("error: too many errors\n");
    return -1;
   }
  } else if (VAR_14) {
   FUNC_4("ignoring error as within bitflip_limit\n");
  }
 }

 return VAR_10;
}
