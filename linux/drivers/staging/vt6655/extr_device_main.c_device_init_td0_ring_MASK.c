
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vnt_tx_desc {TYPE_2__* td_info; void* next_desc; struct vnt_tx_desc* next; } ;
struct TYPE_4__ {int* tx_descs; } ;
struct vnt_private {struct vnt_tx_desc* apTD0Rings; struct vnt_tx_desc** apCurrTD; struct vnt_tx_desc** apTailTD; scalar_t__ td0_pool_dma; TYPE_1__ opts; scalar_t__ tx_bufs_dma0; scalar_t__ tx0_bufs; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_5__ {scalar_t__ buf_dma; scalar_t__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct vnt_private *VAR_3)
{
 int VAR_4;
 dma_addr_t VAR_5;
 struct vnt_tx_desc *VAR_6;
 int VAR_7;

 VAR_5 = VAR_3->td0_pool_dma;
 for (VAR_4 = 0; VAR_4 < VAR_3->opts.tx_descs[0];
      VAR_4++, VAR_5 += sizeof(struct vnt_tx_desc)) {
  VAR_6 = &VAR_3->apTD0Rings[VAR_4];
  VAR_6->td_info = FUNC_2(sizeof(*VAR_6->td_info), VAR_1);
  if (!VAR_6->td_info) {
   VAR_7 = -VAR_0;
   goto err_free_desc;
  }

  VAR_6->td_info->buf = VAR_3->tx0_bufs + VAR_4 * VAR_2;
  VAR_6->td_info->buf_dma = VAR_3->tx_bufs_dma0 + VAR_4 * VAR_2;

  VAR_6->next = &(VAR_3->apTD0Rings[(VAR_4+1) % VAR_3->opts.tx_descs[0]]);
  VAR_6->next_desc = FUNC_0(VAR_5 + sizeof(struct vnt_tx_desc));
 }

 if (VAR_4 > 0)
  VAR_3->apTD0Rings[VAR_4-1].next_desc = FUNC_0(VAR_3->td0_pool_dma);
 VAR_3->apTailTD[0] = VAR_3->apCurrTD[0] = &VAR_3->apTD0Rings[0];

 return 0;

err_free_desc:
 while (--VAR_4) {
  VAR_6 = &VAR_3->apTD0Rings[VAR_4];
  FUNC_1(VAR_6->td_info);
 }

 return VAR_7;
}
