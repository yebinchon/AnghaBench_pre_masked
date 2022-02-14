
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xdp_frame {int len; int data; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct bpf_prog {int dummy; } ;
struct bnxt_tx_ring_info {int tx_prod; int tx_db; } ;
struct bnxt {int tx_nr_rings_xdp; TYPE_1__** bnapi; struct bnxt_tx_ring_info* tx_ring; int state; struct pci_dev* pdev; int xdp_prog; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bpf_prog* FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct bnxt*,struct bnxt_tx_ring_info*,int ,int ,struct xdp_frame*) ;
 int FUNC_2 (struct bnxt*,int *,int ) ;
 int FUNC_3 (struct bnxt*,struct bnxt_tx_ring_info*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 struct bnxt* FUNC_6 (struct net_device*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (struct xdp_frame*) ;

int FUNC_11(struct net_device *VAR_5, int VAR_6,
    struct xdp_frame **VAR_7, u32 VAR_8)
{
 struct bnxt *VAR_9 = FUNC_6(VAR_5);
 struct bpf_prog *VAR_10 = FUNC_0(VAR_9->xdp_prog);
 struct pci_dev *VAR_11 = VAR_9->pdev;
 struct bnxt_tx_ring_info *VAR_12;
 dma_addr_t VAR_13;
 int VAR_14 = 0;
 int VAR_15;
 int VAR_16;

 if (!FUNC_8(VAR_1, &VAR_9->state) ||
     !VAR_9->tx_nr_rings_xdp ||
     !VAR_10)
  return -VAR_3;

 VAR_15 = FUNC_7() % VAR_9->tx_nr_rings_xdp;
 VAR_12 = &VAR_9->tx_ring[VAR_15];

 for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
  struct xdp_frame *VAR_17 = VAR_7[VAR_16];

  if (!VAR_12 || !FUNC_3(VAR_9, VAR_12) ||
      !(VAR_9->bnapi[VAR_15]->flags & VAR_0)) {
   FUNC_10(VAR_17);
   VAR_14++;
   continue;
  }

  VAR_13 = FUNC_4(&VAR_11->dev, VAR_17->data, VAR_17->len,
      VAR_2);

  if (FUNC_5(&VAR_11->dev, VAR_13)) {
   FUNC_10(VAR_17);
   VAR_14++;
   continue;
  }
  FUNC_1(VAR_9, VAR_12, VAR_13, VAR_17->len, VAR_17);
 }

 if (VAR_8 & VAR_4) {

  FUNC_9();
  FUNC_2(VAR_9, &VAR_12->tx_db, VAR_12->tx_prod);
 }

 return VAR_6 - VAR_14;
}
