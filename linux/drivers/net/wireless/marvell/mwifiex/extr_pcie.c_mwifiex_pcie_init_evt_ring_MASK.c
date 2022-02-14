
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; int data; } ;
struct pcie_service_card {struct mwifiex_evt_buf_desc** evtbd_ring; scalar_t__ evtbd_ring_vbase; struct sk_buff** evt_buf_list; } ;
struct mwifiex_evt_buf_desc {scalar_t__ flags; scalar_t__ len; scalar_t__ paddr; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_5 ;
 struct sk_buff* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct mwifiex_adapter*,int ,char*,...) ;
 scalar_t__ FUNC_4 (struct mwifiex_adapter*,struct sk_buff*,int ,int ) ;
 int FUNC_5 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_6(struct mwifiex_adapter *VAR_6)
{
 struct pcie_service_card *VAR_7 = VAR_6->card;
 struct mwifiex_evt_buf_desc *VAR_8;
 struct sk_buff *VAR_9;
 dma_addr_t VAR_10;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {

  VAR_9 = FUNC_1(VAR_3);
  if (!VAR_9) {
   FUNC_3(VAR_6, VAR_1,
        "Unable to allocate skb for EVENT buf.\n");
   FUNC_2(VAR_7->evtbd_ring_vbase);
   return -VAR_0;
  }
  FUNC_5(VAR_9, VAR_3);

  if (FUNC_4(VAR_6, VAR_9, VAR_3,
        VAR_5))
   return -1;

  VAR_10 = FUNC_0(VAR_9);

  FUNC_3(VAR_6, VAR_2,
       "info: EVT ring: skb=%p len=%d data=%p buf_pa=%#x:%x\n",
       VAR_9, VAR_9->len, VAR_9->data, (u32)VAR_10,
       (u32)((u64)VAR_10 >> 32));

  VAR_7->evt_buf_list[VAR_11] = VAR_9;
  VAR_7->evtbd_ring[VAR_11] = (void *)(VAR_7->evtbd_ring_vbase +
          (sizeof(*VAR_8) * VAR_11));
  VAR_8 = VAR_7->evtbd_ring[VAR_11];
  VAR_8->paddr = VAR_10;
  VAR_8->len = (u16)VAR_9->len;
  VAR_8->flags = 0;
 }

 return 0;
}
