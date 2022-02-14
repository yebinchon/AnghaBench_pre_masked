
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct coda_dev {int dummy; } ;
struct TYPE_3__ {int paddr; } ;
struct __kfifo {int out; int in; int mask; } ;
struct TYPE_4__ {struct __kfifo kfifo; } ;
struct coda_ctx {TYPE_1__ bitstream; int reg_idx; struct coda_dev* dev; TYPE_2__ bitstream_fifo; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct coda_dev*,int ) ;

__attribute__((used)) static void FUNC_2(struct coda_ctx *VAR_0)
{
 struct __kfifo *VAR_1 = &VAR_0->bitstream_fifo.kfifo;
 struct coda_dev *VAR_2 = VAR_0->dev;
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_2, FUNC_0(VAR_0->reg_idx));
 VAR_1->out = (VAR_1->in & ~VAR_1->mask) |
        (VAR_3 - VAR_0->bitstream.paddr);
 if (VAR_1->out > VAR_1->in)
  VAR_1->out -= VAR_1->mask + 1;
}
