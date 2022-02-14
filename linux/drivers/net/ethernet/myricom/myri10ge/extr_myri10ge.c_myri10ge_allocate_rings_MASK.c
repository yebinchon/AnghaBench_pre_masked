
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {int mask; struct mcp_kreq_ether_send* req_list; TYPE_2__* req_bytes; TYPE_2__* info; scalar_t__ queue_active; } ;
struct TYPE_7__ {int mask; int cnt; int fill_cnt; TYPE_2__* shadow; TYPE_2__* info; scalar_t__ watchdog_needed; void* page_offset; } ;
struct myri10ge_slice_state {TYPE_1__ tx; TYPE_3__ rx_small; TYPE_3__ rx_big; struct myri10ge_priv* mgp; } ;
struct myri10ge_priv {scalar_t__ small_bytes; scalar_t__ big_bytes; int pdev; struct myri10ge_slice_state* ss; struct net_device* dev; } ;
struct myri10ge_cmd {int data0; } ;
struct mcp_kreq_ether_send {int dummy; } ;
struct mcp_dma_addr {int dummy; } ;
struct TYPE_6__ {int page; } ;


 scalar_t__ FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (size_t,int ) ;
 int FUNC_3 (struct myri10ge_priv*,TYPE_3__*,scalar_t__,int ) ;
 int FUNC_4 (struct myri10ge_priv*,int ,struct myri10ge_cmd*,int ) ;
 int FUNC_5 (int ,TYPE_2__*,scalar_t__) ;
 int FUNC_6 (struct net_device*,char*,int,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct myri10ge_slice_state *VAR_7)
{
 struct myri10ge_priv *VAR_8 = VAR_7->mgp;
 struct myri10ge_cmd VAR_9;
 struct net_device *VAR_10 = VAR_8->dev;
 int VAR_11, VAR_12;
 int VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17;
 size_t VAR_18;


 VAR_16 = VAR_7 - VAR_8->ss;
 VAR_9.data0 = VAR_16;
 VAR_17 = FUNC_4(VAR_8, VAR_3, &VAR_9, 0);
 VAR_11 = VAR_9.data0;
 VAR_9.data0 = VAR_16;
 VAR_17 |= FUNC_4(VAR_8, VAR_2, &VAR_9, 0);
 if (VAR_17 != 0)
  return VAR_17;
 VAR_12 = VAR_9.data0;

 VAR_13 = VAR_11 / sizeof(struct mcp_kreq_ether_send);
 VAR_14 = VAR_12 / sizeof(struct mcp_dma_addr);
 VAR_7->tx.mask = VAR_13 - 1;
 VAR_7->rx_small.mask = VAR_7->rx_big.mask = VAR_14 - 1;

 VAR_17 = -VAR_0;



 VAR_18 = 8 + (VAR_6 + 4)
     * sizeof(*VAR_7->tx.req_list);
 VAR_7->tx.req_bytes = FUNC_2(VAR_18, VAR_1);
 if (VAR_7->tx.req_bytes == ((void*)0))
  goto abort_with_nothing;


 VAR_7->tx.req_list = (struct mcp_kreq_ether_send *)
     FUNC_0((unsigned long)VAR_7->tx.req_bytes, 8);
 VAR_7->tx.queue_active = 0;

 VAR_18 = VAR_14 * sizeof(*VAR_7->rx_small.shadow);
 VAR_7->rx_small.shadow = FUNC_2(VAR_18, VAR_1);
 if (VAR_7->rx_small.shadow == ((void*)0))
  goto abort_with_tx_req_bytes;

 VAR_18 = VAR_14 * sizeof(*VAR_7->rx_big.shadow);
 VAR_7->rx_big.shadow = FUNC_2(VAR_18, VAR_1);
 if (VAR_7->rx_big.shadow == ((void*)0))
  goto abort_with_rx_small_shadow;



 VAR_18 = VAR_13 * sizeof(*VAR_7->tx.info);
 VAR_7->tx.info = FUNC_2(VAR_18, VAR_1);
 if (VAR_7->tx.info == ((void*)0))
  goto abort_with_rx_big_shadow;

 VAR_18 = VAR_14 * sizeof(*VAR_7->rx_small.info);
 VAR_7->rx_small.info = FUNC_2(VAR_18, VAR_1);
 if (VAR_7->rx_small.info == ((void*)0))
  goto abort_with_tx_info;

 VAR_18 = VAR_14 * sizeof(*VAR_7->rx_big.info);
 VAR_7->rx_big.info = FUNC_2(VAR_18, VAR_1);
 if (VAR_7->rx_big.info == ((void*)0))
  goto abort_with_rx_small_info;


 VAR_7->rx_big.cnt = 0;
 VAR_7->rx_small.cnt = 0;
 VAR_7->rx_big.fill_cnt = 0;
 VAR_7->rx_small.fill_cnt = 0;
 VAR_7->rx_small.page_offset = VAR_5;
 VAR_7->rx_big.page_offset = VAR_5;
 VAR_7->rx_small.watchdog_needed = 0;
 VAR_7->rx_big.watchdog_needed = 0;
 if (VAR_8->small_bytes == 0) {
  VAR_7->rx_small.fill_cnt = VAR_7->rx_small.mask + 1;
 } else {
  FUNC_3(VAR_8, &VAR_7->rx_small,
     VAR_8->small_bytes + VAR_4, 0);
 }

 if (VAR_7->rx_small.fill_cnt < VAR_7->rx_small.mask + 1) {
  FUNC_6(VAR_10, "slice-%d: alloced only %d small bufs\n",
      VAR_16, VAR_7->rx_small.fill_cnt);
  goto abort_with_rx_small_ring;
 }

 FUNC_3(VAR_8, &VAR_7->rx_big, VAR_8->big_bytes, 0);
 if (VAR_7->rx_big.fill_cnt < VAR_7->rx_big.mask + 1) {
  FUNC_6(VAR_10, "slice-%d: alloced only %d big bufs\n",
      VAR_16, VAR_7->rx_big.fill_cnt);
  goto abort_with_rx_big_ring;
 }

 return 0;

abort_with_rx_big_ring:
 for (VAR_15 = VAR_7->rx_big.cnt; VAR_15 < VAR_7->rx_big.fill_cnt; VAR_15++) {
  int VAR_19 = VAR_15 & VAR_7->rx_big.mask;
  FUNC_5(VAR_8->pdev, &VAR_7->rx_big.info[VAR_19],
           VAR_8->big_bytes);
  FUNC_7(VAR_7->rx_big.info[VAR_19].page);
 }

abort_with_rx_small_ring:
 if (VAR_8->small_bytes == 0)
  VAR_7->rx_small.fill_cnt = VAR_7->rx_small.cnt;
 for (VAR_15 = VAR_7->rx_small.cnt; VAR_15 < VAR_7->rx_small.fill_cnt; VAR_15++) {
  int VAR_20 = VAR_15 & VAR_7->rx_small.mask;
  FUNC_5(VAR_8->pdev, &VAR_7->rx_small.info[VAR_20],
           VAR_8->small_bytes + VAR_4);
  FUNC_7(VAR_7->rx_small.info[VAR_20].page);
 }

 FUNC_1(VAR_7->rx_big.info);

abort_with_rx_small_info:
 FUNC_1(VAR_7->rx_small.info);

abort_with_tx_info:
 FUNC_1(VAR_7->tx.info);

abort_with_rx_big_shadow:
 FUNC_1(VAR_7->rx_big.shadow);

abort_with_rx_small_shadow:
 FUNC_1(VAR_7->rx_small.shadow);

abort_with_tx_req_bytes:
 FUNC_1(VAR_7->tx.req_bytes);
 VAR_7->tx.req_bytes = ((void*)0);
 VAR_7->tx.req_list = ((void*)0);

abort_with_nothing:
 return VAR_17;
}
