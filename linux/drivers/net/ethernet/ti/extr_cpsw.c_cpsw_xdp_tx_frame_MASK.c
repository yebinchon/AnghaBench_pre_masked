
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xdp_frame {int headroom; int len; int data; } ;
struct page {int dummy; } ;
struct cpsw_priv {int emac_port; TYPE_4__* ndev; struct cpsw_common* cpsw; } ;
struct cpsw_meta_xdp {scalar_t__ ch; TYPE_4__* ndev; } ;
struct TYPE_6__ {int dual_emac; } ;
struct cpsw_common {TYPE_2__ data; TYPE_1__* txv; } ;
struct cpdma_chan {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_7__ {int tx_dropped; } ;
struct TYPE_8__ {TYPE_3__ stats; } ;
struct TYPE_5__ {struct cpdma_chan* ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpdma_chan*,int ,int ,int ,int) ;
 int FUNC_1 (struct cpdma_chan*,int ,int ,int ,int) ;
 int FUNC_2 (struct xdp_frame*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct xdp_frame*) ;

__attribute__((used)) static int FUNC_5(struct cpsw_priv *VAR_2, struct xdp_frame *VAR_3,
        struct page *VAR_4)
{
 struct cpsw_common *VAR_5 = VAR_2->cpsw;
 struct cpsw_meta_xdp *VAR_6;
 struct cpdma_chan *VAR_7;
 dma_addr_t VAR_8;
 int VAR_9, VAR_10;

 VAR_6 = (void *)VAR_3 + VAR_0;
 VAR_6->ndev = VAR_2->ndev;
 VAR_6->ch = 0;
 VAR_7 = VAR_5->txv[0].ch;

 VAR_10 = VAR_2->emac_port + VAR_5->data.dual_emac;
 if (VAR_4) {
  VAR_8 = FUNC_3(VAR_4);
  VAR_8 += VAR_3->headroom + sizeof(struct xdp_frame);
  VAR_9 = FUNC_1(VAR_7, FUNC_2(VAR_3),
            VAR_8, VAR_3->len, VAR_10);
 } else {
  if (sizeof(*VAR_6) > VAR_3->headroom) {
   FUNC_4(VAR_3);
   return -VAR_1;
  }

  VAR_9 = FUNC_0(VAR_7, FUNC_2(VAR_3),
     VAR_3->data, VAR_3->len, VAR_10);
 }

 if (VAR_9) {
  VAR_2->ndev->stats.tx_dropped++;
  FUNC_4(VAR_3);
 }

 return VAR_9;
}
