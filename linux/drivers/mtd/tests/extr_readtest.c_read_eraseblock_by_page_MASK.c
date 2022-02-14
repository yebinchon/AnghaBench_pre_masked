
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mtd_oob_ops {scalar_t__ ooblen; scalar_t__ oobretlen; void* oobbuf; int * datbuf; scalar_t__ ooboffs; scalar_t__ retlen; scalar_t__ len; int mode; } ;
typedef int loff_t ;
struct TYPE_4__ {int erasesize; scalar_t__ oobsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (void*,int ,int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int,struct mtd_oob_ops*) ;
 int FUNC_3 (TYPE_1__*,int,int,void*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*,long long) ;

__attribute__((used)) static int FUNC_5(int VAR_7)
{
 int VAR_8, VAR_9, VAR_10 = 0;
 loff_t VAR_11 = (loff_t)VAR_7 * VAR_4->erasesize;
 void *VAR_12 = VAR_2;
 void *VAR_13 = VAR_3;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  FUNC_0(VAR_12, 0 , VAR_6);
  VAR_9 = FUNC_3(VAR_4, VAR_11, VAR_6, VAR_12);
  if (VAR_9) {
   if (!VAR_10)
    VAR_10 = VAR_9;
  }
  if (VAR_4->oobsize) {
   struct mtd_oob_ops VAR_14;

   VAR_14.mode = VAR_1;
   VAR_14.len = 0;
   VAR_14.retlen = 0;
   VAR_14.ooblen = VAR_4->oobsize;
   VAR_14.oobretlen = 0;
   VAR_14.ooboffs = 0;
   VAR_14.datbuf = ((void*)0);
   VAR_14.oobbuf = VAR_13;
   VAR_9 = FUNC_2(VAR_4, VAR_11, &VAR_14);
   if ((VAR_9 && !FUNC_1(VAR_9)) ||
     VAR_14.oobretlen != VAR_4->oobsize) {
    FUNC_4("error: read oob failed at "
        "%#llx\n", (long long)VAR_11);
    if (!VAR_10)
     VAR_10 = VAR_9;
    if (!VAR_10)
     VAR_10 = -VAR_0;
   }
   VAR_13 += VAR_4->oobsize;
  }
  VAR_11 += VAR_6;
  VAR_12 += VAR_6;
 }

 return VAR_10;
}
