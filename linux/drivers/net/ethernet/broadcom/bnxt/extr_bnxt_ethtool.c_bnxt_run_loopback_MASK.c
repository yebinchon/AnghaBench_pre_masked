
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int data; } ;
struct bnxt_tx_ring_info {int tx_prod; int tx_db; } ;
struct bnxt_rx_ring_info {TYPE_1__* bnapi; } ;
struct bnxt_cp_ring_info {struct bnxt_cp_ring_info** cp_ring_arr; } ;
struct bnxt {int flags; TYPE_2__* pdev; TYPE_3__* dev; int rx_copy_thresh; struct bnxt_rx_ring_info* rx_ring; struct bnxt_tx_ring_info* tx_ring; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int dev_addr; scalar_t__ mtu; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {struct bnxt_cp_ring_info cp_ring; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bnxt*,int *,int ) ;
 int FUNC_1 (struct bnxt*,struct bnxt_cp_ring_info*,int) ;
 int FUNC_2 (struct bnxt*,struct bnxt_tx_ring_info*,int ,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,int ,int,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int,int ) ;
 int FUNC_7 (scalar_t__*) ;
 int FUNC_8 (scalar_t__*,int ) ;
 int FUNC_9 (scalar_t__,int ) ;
 struct sk_buff* FUNC_10 (TYPE_3__*,int) ;
 scalar_t__* FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(struct bnxt *VAR_7)
{
 struct bnxt_tx_ring_info *VAR_8 = &VAR_7->tx_ring[0];
 struct bnxt_rx_ring_info *VAR_9 = &VAR_7->rx_ring[0];
 struct bnxt_cp_ring_info *VAR_10;
 int VAR_11, VAR_12 = 0;
 struct sk_buff *VAR_13;
 dma_addr_t VAR_14;
 u8 *VAR_15;
 int VAR_16;

 VAR_10 = &VAR_9->bnapi->cp_ring;
 if (VAR_7->flags & VAR_0)
  VAR_10 = VAR_10->cp_ring_arr[VAR_1];
 VAR_11 = FUNC_9(VAR_7->dev->mtu + VAR_5, VAR_7->rx_copy_thresh);
 VAR_13 = FUNC_10(VAR_7->dev, VAR_11);
 if (!VAR_13)
  return -VAR_3;
 VAR_15 = FUNC_11(VAR_13, VAR_11);
 FUNC_7(VAR_15);
 VAR_12 += VAR_4;
 FUNC_8(&VAR_15[VAR_12], VAR_7->dev->dev_addr);
 VAR_12 += VAR_4;
 for ( ; VAR_12 < VAR_11; VAR_12++)
  VAR_15[VAR_12] = (u8)(VAR_12 & 0xff);

 VAR_14 = FUNC_4(&VAR_7->pdev->dev, VAR_13->data, VAR_11,
        VAR_6);
 if (FUNC_5(&VAR_7->pdev->dev, VAR_14)) {
  FUNC_3(VAR_13);
  return -VAR_2;
 }
 FUNC_2(VAR_7, VAR_8, VAR_14, VAR_11);


 FUNC_12();

 FUNC_0(VAR_7, &VAR_8->tx_db, VAR_8->tx_prod);
 VAR_16 = FUNC_1(VAR_7, VAR_10, VAR_11);

 FUNC_6(&VAR_7->pdev->dev, VAR_14, VAR_11, VAR_6);
 FUNC_3(VAR_13);
 return VAR_16;
}
