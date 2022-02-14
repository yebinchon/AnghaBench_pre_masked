
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct wl12xx_vif {int dummy; } ;
struct wl1271_tx_hw_descr {int id; } ;
struct wl1271 {scalar_t__ aggr_buf_size; scalar_t__ tx_blocks_available; scalar_t__ tx_allocated_blocks; TYPE_1__* links; int links_map; int * tx_allocated_pkts; int flags; } ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {int allocated_pkts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 struct wl1271_tx_hw_descr* FUNC_1 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (size_t,int ) ;
 int FUNC_4 (struct wl1271*,struct sk_buff*) ;
 int FUNC_5 (int ,char*,scalar_t__,scalar_t__,int) ;
 int FUNC_6 (struct wl1271*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct wl1271*) ;
 scalar_t__ FUNC_9 (struct wl1271*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (struct wl1271*,int) ;
 int FUNC_11 (struct wl1271*,struct wl1271_tx_hw_descr*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct wl1271 *VAR_4, struct wl12xx_vif *VAR_5,
         struct sk_buff *VAR_6, u32 VAR_7, u32 VAR_8,
         u8 VAR_9, bool VAR_10)
{
 struct wl1271_tx_hw_descr *VAR_11;
 u32 VAR_12 = VAR_6->len + sizeof(struct wl1271_tx_hw_descr) + VAR_7;
 u32 VAR_13;
 int VAR_14, VAR_15 = -VAR_2, VAR_16;
 u32 VAR_17;

 if (VAR_8 + VAR_12 > VAR_4->aggr_buf_size)
  return -VAR_1;

 VAR_17 = FUNC_10(VAR_4, VAR_10);


 VAR_14 = FUNC_4(VAR_4, VAR_6);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_13 = FUNC_9(VAR_4, VAR_12, VAR_17);

 if (VAR_13 <= VAR_4->tx_blocks_available) {
  VAR_11 = FUNC_1(VAR_6, VAR_12 - VAR_6->len);

  FUNC_11(VAR_4, VAR_11, VAR_13,
          VAR_17);

  VAR_11->id = VAR_14;

  VAR_4->tx_blocks_available -= VAR_13;
  VAR_4->tx_allocated_blocks += VAR_13;






  if (VAR_4->tx_allocated_blocks == VAR_13 ||
      FUNC_2(VAR_3, &VAR_4->flags))
   FUNC_8(VAR_4);

  VAR_16 = FUNC_7(FUNC_0(VAR_6));
  VAR_4->tx_allocated_pkts[VAR_16]++;

  if (FUNC_3(VAR_9, VAR_4->links_map))
   VAR_4->links[VAR_9].allocated_pkts++;

  VAR_15 = 0;

  FUNC_5(VAR_0,
        "tx_allocate: size: %d, blocks: %d, id: %d",
        VAR_12, VAR_13, VAR_14);
 } else {
  FUNC_6(VAR_4, VAR_14);
 }

 return VAR_15;
}
