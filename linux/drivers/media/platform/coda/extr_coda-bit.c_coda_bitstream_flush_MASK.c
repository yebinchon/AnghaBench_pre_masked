
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int vaddr; } ;
struct coda_ctx {scalar_t__ inst_type; TYPE_1__ bitstream; int bitstream_fifo; TYPE_2__* dev; int use_bit; } ;
struct TYPE_4__ {int v4l2_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct coda_ctx*,int ) ;
 int FUNC_1 (struct coda_ctx*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,char*) ;

int FUNC_4(struct coda_ctx *VAR_2)
{
 int VAR_3;

 if (VAR_2->inst_type != VAR_1 || !VAR_2->use_bit)
  return 0;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (VAR_3 < 0) {
  FUNC_3(&VAR_2->dev->v4l2_dev, "failed to flush bitstream\n");
  return VAR_3;
 }

 FUNC_2(&VAR_2->bitstream_fifo, VAR_2->bitstream.vaddr,
     VAR_2->bitstream.size);
 FUNC_1(VAR_2);

 return 0;
}
