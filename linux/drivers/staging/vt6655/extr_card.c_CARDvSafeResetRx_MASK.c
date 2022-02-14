
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {void* req_count; } ;
struct TYPE_5__ {void* owner; void* res_count; } ;
struct vnt_rx_desc {TYPE_3__ rd1; TYPE_2__ rd0; } ;
struct TYPE_4__ {unsigned int rx_descs0; unsigned int rx_descs1; } ;
struct vnt_private {int rd1_pool_dma; int rd0_pool_dma; int PortOffset; int rx_buf_sz; struct vnt_rx_desc* aRD1Ring; TYPE_1__ opts; struct vnt_rx_desc* aRD0Ring; struct vnt_rx_desc** pCurrRD; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vnt_private*,int ) ;
 int FUNC_3 (struct vnt_private*,int ) ;
 void* VAR_0 ;
 void* FUNC_4 (int ) ;

void FUNC_5(struct vnt_private *VAR_1)
{
 unsigned int VAR_2;
 struct vnt_rx_desc *VAR_3;


 VAR_1->pCurrRD[0] = &VAR_1->aRD0Ring[0];
 VAR_1->pCurrRD[1] = &VAR_1->aRD1Ring[0];


 for (VAR_2 = 0; VAR_2 < VAR_1->opts.rx_descs0; VAR_2++) {
  VAR_3 = &VAR_1->aRD0Ring[VAR_2];
  VAR_3->rd0.res_count = FUNC_4(VAR_1->rx_buf_sz);
  VAR_3->rd0.owner = VAR_0;
  VAR_3->rd1.req_count = FUNC_4(VAR_1->rx_buf_sz);
 }


 for (VAR_2 = 0; VAR_2 < VAR_1->opts.rx_descs1; VAR_2++) {
  VAR_3 = &VAR_1->aRD1Ring[VAR_2];
  VAR_3->rd0.res_count = FUNC_4(VAR_1->rx_buf_sz);
  VAR_3->rd0.owner = VAR_0;
  VAR_3->rd1.req_count = FUNC_4(VAR_1->rx_buf_sz);
 }


 FUNC_0(VAR_1->PortOffset);
 FUNC_1(VAR_1->PortOffset);

 FUNC_2(VAR_1, VAR_1->rd0_pool_dma);

 FUNC_3(VAR_1, VAR_1->rd1_pool_dma);
}
