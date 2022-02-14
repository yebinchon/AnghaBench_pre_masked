
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tifm_sd {size_t sg_pos; size_t sg_len; unsigned int block_pos; int cmd_flags; TYPE_3__* dev; int * bounce_buf_data; TYPE_2__* req; } ;
struct scatterlist {unsigned int length; unsigned int offset; } ;
struct page {int dummy; } ;
struct mmc_data {int flags; struct scatterlist* sg; } ;
struct TYPE_6__ {scalar_t__ addr; } ;
struct TYPE_5__ {TYPE_1__* cmd; } ;
struct TYPE_4__ {struct mmc_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 struct page* FUNC_1 (int ,unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct scatterlist*) ;
 int FUNC_4 (struct tifm_sd*,struct page*,unsigned int,unsigned int) ;
 int FUNC_5 (struct tifm_sd*,struct page*,unsigned int,unsigned int) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct tifm_sd *VAR_7)
{
 struct mmc_data *VAR_8 = VAR_7->req->cmd->data;
 struct scatterlist *VAR_9 = VAR_8->sg;
 unsigned int VAR_10, VAR_11, VAR_12 = VAR_6 * 2;
 unsigned int VAR_13, VAR_14;
 struct page *VAR_15;

 if (VAR_7->sg_pos == VAR_7->sg_len)
  return;
 while (VAR_12) {
  VAR_11 = VAR_9[VAR_7->sg_pos].length - VAR_7->block_pos;
  if (!VAR_11) {
   VAR_7->block_pos = 0;
   VAR_7->sg_pos++;
   if (VAR_7->sg_pos == VAR_7->sg_len) {
    if ((VAR_8->flags & VAR_2)
        && (VAR_7->cmd_flags & VAR_0))
     FUNC_6(VAR_7->bounce_buf_data[0],
            VAR_7->dev->addr
            + VAR_5);

    return;
   }
   VAR_11 = VAR_9[VAR_7->sg_pos].length;
  }
  VAR_10 = VAR_9[VAR_7->sg_pos].offset + VAR_7->block_pos;

  VAR_15 = FUNC_1(FUNC_3(&VAR_9[VAR_7->sg_pos]), VAR_10 >> VAR_3);
  VAR_13 = FUNC_2(VAR_10);
  VAR_14 = VAR_4 - VAR_13;
  VAR_14 = FUNC_0(VAR_14, VAR_11);
  VAR_14 = FUNC_0(VAR_14, VAR_12);

  if (VAR_8->flags & VAR_1)
   FUNC_4(VAR_7, VAR_15, VAR_13, VAR_14);
  else if (VAR_8->flags & VAR_2)
   FUNC_5(VAR_7, VAR_15, VAR_13, VAR_14);

  VAR_12 -= VAR_14;
  VAR_7->block_pos += VAR_14;
 }
}
