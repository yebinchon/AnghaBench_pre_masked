
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct alx_rx_queue {int count; scalar_t__ rfd_dma; scalar_t__ rfd; scalar_t__ rrd_dma; scalar_t__ rrd; int bufs; } ;
struct alx_rrd {int dummy; } ;
struct alx_rfd {int dummy; } ;
struct TYPE_2__ {scalar_t__ dma; scalar_t__ virt; } ;
struct alx_priv {TYPE_1__ descmem; } ;
struct alx_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct alx_priv *VAR_2, struct alx_rx_queue *VAR_3,
        int VAR_4)
{
 VAR_3->bufs = FUNC_0(VAR_3->count, sizeof(struct alx_buffer), VAR_1);
 if (!VAR_3->bufs)
  return -VAR_0;

 VAR_3->rrd = VAR_2->descmem.virt + VAR_4;
 VAR_3->rrd_dma = VAR_2->descmem.dma + VAR_4;
 VAR_4 += sizeof(struct alx_rrd) * VAR_3->count;

 VAR_3->rfd = VAR_2->descmem.virt + VAR_4;
 VAR_3->rfd_dma = VAR_2->descmem.dma + VAR_4;
 VAR_4 += sizeof(struct alx_rfd) * VAR_3->count;

 return VAR_4;
}
