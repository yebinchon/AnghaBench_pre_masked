
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct alx_txd {int dummy; } ;
struct alx_rrd {int dummy; } ;
struct alx_rfd {int dummy; } ;
struct TYPE_7__ {int size; int virt; int dma; } ;
struct TYPE_6__ {TYPE_1__* pdev; } ;
struct alx_priv {int tx_ringsz; int num_txq; int rx_ringsz; int dev; TYPE_4__** qnapi; TYPE_3__ descmem; TYPE_2__ hw; } ;
struct TYPE_8__ {int rxq; int txq; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct alx_priv*,int ,int) ;
 int FUNC_2 (struct alx_priv*,int ,int) ;
 int FUNC_3 (int *,int,int *,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct alx_priv *VAR_2)
{
 int VAR_3, VAR_4 = 0;







 VAR_2->descmem.size = sizeof(struct alx_txd) * VAR_2->tx_ringsz *
       VAR_2->num_txq +
       sizeof(struct alx_rrd) * VAR_2->rx_ringsz +
       sizeof(struct alx_rfd) * VAR_2->rx_ringsz;
 VAR_2->descmem.virt = FUNC_3(&VAR_2->hw.pdev->dev,
            VAR_2->descmem.size,
            &VAR_2->descmem.dma, VAR_1);
 if (!VAR_2->descmem.virt)
  return -VAR_0;


 FUNC_0(sizeof(struct alx_txd) % 8);
 FUNC_0(sizeof(struct alx_rrd) % 8);

 for (VAR_3 = 0; VAR_3 < VAR_2->num_txq; VAR_3++) {
  VAR_4 = FUNC_2(VAR_2, VAR_2->qnapi[VAR_3]->txq, VAR_4);
  if (VAR_4 < 0) {
   FUNC_4(VAR_2->dev, "Allocation of tx buffer failed!\n");
   return -VAR_0;
  }
 }

 VAR_4 = FUNC_1(VAR_2, VAR_2->qnapi[0]->rxq, VAR_4);
 if (VAR_4 < 0) {
  FUNC_4(VAR_2->dev, "Allocation of rx buffer failed!\n");
  return -VAR_0;
 }

 return 0;
}
