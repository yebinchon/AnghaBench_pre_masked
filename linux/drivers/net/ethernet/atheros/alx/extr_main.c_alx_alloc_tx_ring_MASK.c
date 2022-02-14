
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct alx_txd {int dummy; } ;
struct alx_tx_queue {int count; scalar_t__ tpd_dma; scalar_t__ tpd; int bufs; } ;
struct TYPE_2__ {scalar_t__ dma; scalar_t__ virt; } ;
struct alx_priv {TYPE_1__ descmem; } ;
struct alx_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct alx_priv *VAR_2, struct alx_tx_queue *VAR_3,
        int VAR_4)
{
 VAR_3->bufs = FUNC_0(VAR_3->count, sizeof(struct alx_buffer), VAR_1);
 if (!VAR_3->bufs)
  return -VAR_0;

 VAR_3->tpd = VAR_2->descmem.virt + VAR_4;
 VAR_3->tpd_dma = VAR_2->descmem.dma + VAR_4;
 VAR_4 += sizeof(struct alx_txd) * VAR_3->count;

 return VAR_4;
}
