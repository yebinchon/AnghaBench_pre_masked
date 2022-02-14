
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdio_func {unsigned int max_blksize; unsigned int cur_blksize; int num; TYPE_2__* card; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {unsigned int max_blk_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (TYPE_2__*,int,int ,scalar_t__,unsigned int,int *) ;

int FUNC_3(struct sdio_func *VAR_2, unsigned VAR_3)
{
 int VAR_4;

 if (VAR_3 > VAR_2->card->host->max_blk_size)
  return -VAR_0;

 if (VAR_3 == 0) {
  VAR_3 = FUNC_1(VAR_2->max_blksize, VAR_2->card->host->max_blk_size);
  VAR_3 = FUNC_1(VAR_3, 512u);
 }

 VAR_4 = FUNC_2(VAR_2->card, 1, 0,
  FUNC_0(VAR_2->num) + VAR_1,
  VAR_3 & 0xff, ((void*)0));
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_2(VAR_2->card, 1, 0,
  FUNC_0(VAR_2->num) + VAR_1 + 1,
  (VAR_3 >> 8) & 0xff, ((void*)0));
 if (VAR_4)
  return VAR_4;
 VAR_2->cur_blksize = VAR_3;
 return 0;
}
