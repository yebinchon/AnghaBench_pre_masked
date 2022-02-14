
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sdio_func {int num; unsigned int cur_blksize; TYPE_3__* card; } ;
struct TYPE_4__ {scalar_t__ multi_block; } ;
struct TYPE_6__ {TYPE_2__* host; TYPE_1__ cccr; } ;
struct TYPE_5__ {unsigned int max_blk_count; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (TYPE_3__*,int,int,unsigned int,int,int *,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (struct sdio_func*) ;

__attribute__((used)) static int FUNC_3(struct sdio_func *VAR_1, int VAR_2,
 unsigned VAR_3, int VAR_4, u8 *VAR_5, unsigned VAR_6)
{
 unsigned VAR_7 = VAR_6;
 unsigned VAR_8;
 int VAR_9;

 if (!VAR_1 || (VAR_1->num > 7))
  return -VAR_0;


 if (VAR_1->card->cccr.multi_block && (VAR_6 > FUNC_2(VAR_1))) {


  VAR_8 = FUNC_0(VAR_1->card->host->max_blk_count, 511u);

  while (VAR_7 >= VAR_1->cur_blksize) {
   unsigned VAR_10;

   VAR_10 = VAR_7 / VAR_1->cur_blksize;
   if (VAR_10 > VAR_8)
    VAR_10 = VAR_8;
   VAR_6 = VAR_10 * VAR_1->cur_blksize;

   VAR_9 = FUNC_1(VAR_1->card, VAR_2,
    VAR_1->num, VAR_3, VAR_4, VAR_5,
    VAR_10, VAR_1->cur_blksize);
   if (VAR_9)
    return VAR_9;

   VAR_7 -= VAR_6;
   VAR_5 += VAR_6;
   if (VAR_4)
    VAR_3 += VAR_6;
  }
 }


 while (VAR_7 > 0) {
  VAR_6 = FUNC_0(VAR_7, FUNC_2(VAR_1));


  VAR_9 = FUNC_1(VAR_1->card, VAR_2, VAR_1->num, VAR_3,
    VAR_4, VAR_5, 0, VAR_6);
  if (VAR_9)
   return VAR_9;

  VAR_7 -= VAR_6;
  VAR_5 += VAR_6;
  if (VAR_4)
   VAR_3 += VAR_6;
 }
 return 0;
}
