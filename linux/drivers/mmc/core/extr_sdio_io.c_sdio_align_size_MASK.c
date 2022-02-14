
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdio_func {unsigned int cur_blksize; TYPE_2__* card; } ;
struct TYPE_3__ {scalar_t__ multi_block; } ;
struct TYPE_4__ {TYPE_1__ cccr; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct sdio_func*) ;

unsigned int FUNC_2(struct sdio_func *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;
 unsigned int VAR_3, VAR_4;
 unsigned VAR_5;

 VAR_2 = VAR_1;






 VAR_1 = FUNC_0(VAR_1);





 if (VAR_1 <= FUNC_1(VAR_0))
  return VAR_1;

 if (VAR_0->card->cccr.multi_block) {



  if ((VAR_1 % VAR_0->cur_blksize) == 0)
   return VAR_1;





  VAR_3 = ((VAR_1 + VAR_0->cur_blksize - 1) /
   VAR_0->cur_blksize) * VAR_0->cur_blksize;
  VAR_3 = FUNC_0(VAR_3);





  if ((VAR_3 % VAR_0->cur_blksize) == 0)
   return VAR_3;





  VAR_4 = FUNC_0(VAR_1 % VAR_0->cur_blksize);
  if (VAR_4 <= FUNC_1(VAR_0)) {
   VAR_3 = VAR_1 / VAR_0->cur_blksize;
   return VAR_3 * VAR_0->cur_blksize + VAR_4;
  }
 } else {




  VAR_5 = FUNC_0(FUNC_1(VAR_0));
  if (VAR_5 == FUNC_1(VAR_0)) {



   VAR_4 = VAR_2 % VAR_5;
   if (VAR_4) {
    VAR_4 = FUNC_0(VAR_4);
   }

   return (VAR_2 / VAR_5) * VAR_5 + VAR_4;
  }
 }





 return VAR_2;
}
