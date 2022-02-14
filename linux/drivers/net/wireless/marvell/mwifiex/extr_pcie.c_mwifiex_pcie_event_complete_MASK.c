
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {struct mwifiex_pcie_card_reg* reg; } ;
struct pcie_service_card {size_t evtbd_rdptr; struct sk_buff** evt_buf_list; struct mwifiex_evt_buf_desc** evtbd_ring; TYPE_1__ pcie; } ;
struct mwifiex_pcie_card_reg {int evt_rollover_ind; int evt_rdptr; int evt_wrptr; } ;
struct mwifiex_evt_buf_desc {scalar_t__ flags; scalar_t__ len; int paddr; } ;
struct mwifiex_adapter {int intf_hdr_len; struct pcie_service_card* card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_6 ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*,...) ;
 scalar_t__ FUNC_2 (struct mwifiex_adapter*,struct sk_buff*,scalar_t__,int ) ;
 int FUNC_3 (struct mwifiex_adapter*) ;
 scalar_t__ FUNC_4 (struct mwifiex_adapter*,int ,size_t*) ;
 scalar_t__ FUNC_5 (struct mwifiex_adapter*,int ,int) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct mwifiex_adapter *VAR_7,
           struct sk_buff *VAR_8)
{
 struct pcie_service_card *VAR_9 = VAR_7->card;
 const struct mwifiex_pcie_card_reg *VAR_10 = VAR_9->pcie.reg;
 int VAR_11 = 0;
 u32 VAR_12 = VAR_9->evtbd_rdptr & VAR_4;
 u32 VAR_13;
 struct mwifiex_evt_buf_desc *VAR_14;

 if (!VAR_8)
  return 0;

 if (VAR_12 >= VAR_5) {
  FUNC_1(VAR_7, VAR_1,
       "event_complete: Invalid rdptr 0x%x\n",
       VAR_12);
  return -VAR_0;
 }


 if (FUNC_4(VAR_7, VAR_10->evt_wrptr, &VAR_13)) {
  FUNC_1(VAR_7, VAR_1,
       "event_complete: failed to read reg->evt_wrptr\n");
  return -1;
 }

 if (!VAR_9->evt_buf_list[VAR_12]) {
  FUNC_6(VAR_8, VAR_7->intf_hdr_len);
  FUNC_7(VAR_8, VAR_3 - VAR_8->len);
  if (FUNC_2(VAR_7, VAR_8,
        VAR_3,
        VAR_6))
   return -1;
  VAR_9->evt_buf_list[VAR_12] = VAR_8;
  VAR_14 = VAR_9->evtbd_ring[VAR_12];
  VAR_14->paddr = FUNC_0(VAR_8);
  VAR_14->len = (u16)VAR_8->len;
  VAR_14->flags = 0;
  VAR_8 = ((void*)0);
 } else {
  FUNC_1(VAR_7, VAR_1,
       "info: ERROR: buf still valid at index %d, <%p, %p>\n",
       VAR_12, VAR_9->evt_buf_list[VAR_12], VAR_8);
 }

 if ((++VAR_9->evtbd_rdptr & VAR_4) == VAR_5) {
  VAR_9->evtbd_rdptr = ((VAR_9->evtbd_rdptr &
     VAR_10->evt_rollover_ind) ^
     VAR_10->evt_rollover_ind);
 }

 FUNC_1(VAR_7, VAR_2,
      "info: Updated <Rd: 0x%x, Wr: 0x%x>",
      VAR_9->evtbd_rdptr, VAR_13);


 if (FUNC_5(VAR_7, VAR_10->evt_rdptr,
         VAR_9->evtbd_rdptr)) {
  FUNC_1(VAR_7, VAR_1,
       "event_complete: failed to read reg->evt_rdptr\n");
  return -1;
 }

 FUNC_1(VAR_7, VAR_2,
      "info: Check Events Again\n");
 VAR_11 = FUNC_3(VAR_7);

 return VAR_11;
}
