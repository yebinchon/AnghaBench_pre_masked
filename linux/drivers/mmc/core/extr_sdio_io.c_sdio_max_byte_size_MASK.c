
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sdio_func {unsigned int cur_blksize; unsigned int max_blksize; TYPE_2__* card; } ;
struct TYPE_5__ {TYPE_1__* host; } ;
struct TYPE_4__ {unsigned int max_blk_size; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static inline unsigned int FUNC_3(struct sdio_func *VAR_0)
{
 unsigned VAR_1 = VAR_0->card->host->max_blk_size;

 if (FUNC_1(VAR_0->card))
  VAR_1 = FUNC_0(VAR_1, VAR_0->cur_blksize);
 else
  VAR_1 = FUNC_0(VAR_1, VAR_0->max_blksize);

 if (FUNC_2(VAR_0->card))
  return FUNC_0(VAR_1, 511u);

 return FUNC_0(VAR_1, 512u);
}
