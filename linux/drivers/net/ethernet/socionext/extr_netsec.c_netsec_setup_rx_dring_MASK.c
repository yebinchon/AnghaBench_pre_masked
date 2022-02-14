
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct page_pool_params {int pool_size; int dma_dir; int dev; int nid; int flags; scalar_t__ order; int member_0; } ;
struct netsec_priv {int ndev; int dev; int xdp_prog; struct netsec_desc_ring* desc_ring; } ;
struct netsec_desc_ring {struct netsec_desc* desc; int * page_pool; int xdp_rxq; } ;
struct netsec_desc {int len; void* addr; int dma_addr; } ;
struct bpf_prog {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 struct bpf_prog* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (struct netsec_priv*,int *,int *) ;
 int FUNC_5 (struct netsec_priv*,int ,int) ;
 int FUNC_6 (struct netsec_priv*,size_t) ;
 int * FUNC_7 (struct page_pool_params*) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_10(struct netsec_priv *VAR_7)
{
 struct netsec_desc_ring *VAR_8 = &VAR_7->desc_ring[VAR_5];
 struct bpf_prog *VAR_9 = FUNC_2(VAR_7->xdp_prog);
 struct page_pool_params VAR_10 = { 0 };
 int VAR_11, VAR_12;

 VAR_10.order = 0;

 VAR_10.flags = VAR_6;
 VAR_10.pool_size = VAR_0;
 VAR_10.nid = FUNC_3(0);
 VAR_10.dev = VAR_7->dev;
 VAR_10.dma_dir = VAR_9 ? VAR_1 : VAR_2;

 VAR_8->page_pool = FUNC_7(&VAR_10);
 if (FUNC_0(VAR_8->page_pool)) {
  VAR_12 = FUNC_1(VAR_8->page_pool);
  VAR_8->page_pool = ((void*)0);
  goto err_out;
 }

 VAR_12 = FUNC_8(&VAR_8->xdp_rxq, VAR_7->ndev, 0);
 if (VAR_12)
  goto err_out;

 VAR_12 = FUNC_9(&VAR_8->xdp_rxq, VAR_4,
      VAR_8->page_pool);
 if (VAR_12)
  goto err_out;

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  struct netsec_desc *VAR_13 = &VAR_8->desc[VAR_11];
  dma_addr_t VAR_14;
  void *VAR_15;
  u16 VAR_16;

  VAR_15 = FUNC_4(VAR_7, &VAR_14, &VAR_16);

  if (!VAR_15) {
   VAR_12 = -VAR_3;
   goto err_out;
  }
  VAR_13->dma_addr = VAR_14;
  VAR_13->addr = VAR_15;
  VAR_13->len = VAR_16;
 }

 FUNC_5(VAR_7, 0, VAR_0);

 return 0;

err_out:
 FUNC_6(VAR_7, VAR_5);
 return VAR_12;
}
