
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct coda_q_data {int sizeimage; } ;
struct TYPE_4__ {int size; scalar_t__ vaddr; int paddr; } ;
struct coda_ctx {TYPE_2__ bitstream; int bitstream_fifo; TYPE_1__* dev; } ;
struct TYPE_3__ {int v4l2_dev; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(struct coda_ctx *VAR_2,
           struct coda_q_data *VAR_3)
{
 if (VAR_2->bitstream.vaddr)
  return 0;

 VAR_2->bitstream.size = FUNC_2(VAR_3->sizeimage * 2);
 VAR_2->bitstream.vaddr = FUNC_0(VAR_2->dev->dev, VAR_2->bitstream.size,
         &VAR_2->bitstream.paddr, VAR_1);
 if (!VAR_2->bitstream.vaddr) {
  FUNC_3(&VAR_2->dev->v4l2_dev,
    "failed to allocate bitstream ringbuffer");
  return -VAR_0;
 }
 FUNC_1(&VAR_2->bitstream_fifo,
     VAR_2->bitstream.vaddr, VAR_2->bitstream.size);

 return 0;
}
