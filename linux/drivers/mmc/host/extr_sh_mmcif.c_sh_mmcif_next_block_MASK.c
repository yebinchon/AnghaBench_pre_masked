
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sh_mmcif_host {scalar_t__ sg_blkidx; scalar_t__ blocksize; scalar_t__ sg_idx; int * pio_ptr; TYPE_1__* mrq; } ;
struct mmc_data {scalar_t__ sg_len; TYPE_2__* sg; } ;
struct TYPE_4__ {scalar_t__ length; } ;
struct TYPE_3__ {struct mmc_data* data; } ;


 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_2(struct sh_mmcif_host *VAR_0, u32 *VAR_1)
{
 struct mmc_data *VAR_2 = VAR_0->mrq->data;

 VAR_0->sg_blkidx += VAR_0->blocksize;


 FUNC_0(VAR_0->sg_blkidx > VAR_2->sg->length);

 if (VAR_0->sg_blkidx == VAR_2->sg->length) {
  VAR_0->sg_blkidx = 0;
  if (++VAR_0->sg_idx < VAR_2->sg_len)
   VAR_0->pio_ptr = FUNC_1(++VAR_2->sg);
 } else {
  VAR_0->pio_ptr = VAR_1;
 }

 return VAR_0->sg_idx != VAR_2->sg_len;
}
