
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct sk_buff {int * data; } ;
struct TYPE_2__ {struct mwifiex_pcie_card_reg* reg; } ;
struct pcie_service_card {size_t evtbd_rdptr; struct mwifiex_evt_buf_desc** evtbd_ring; struct sk_buff** evt_buf_list; TYPE_1__ pcie; } ;
struct mwifiex_pcie_card_reg {size_t evt_rollover_ind; int evt_wrptr; } ;
struct mwifiex_evt_buf_desc {int dummy; } ;
struct mwifiex_adapter {int event_received; size_t intf_hdr_len; size_t event_cause; struct sk_buff* event_skb; int * event_body; struct pcie_service_card* card; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct mwifiex_evt_buf_desc*,int ,int) ;
 int FUNC_4 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_5 (struct mwifiex_adapter*) ;
 int FUNC_6 (struct mwifiex_adapter*) ;
 scalar_t__ FUNC_7 (struct mwifiex_adapter*,int ,size_t*) ;
 int FUNC_8 (struct mwifiex_adapter*,struct sk_buff*,int ) ;
 scalar_t__ FUNC_9 (struct mwifiex_adapter*,int ,int ) ;
 int FUNC_10 (struct sk_buff*,size_t) ;
 int FUNC_11 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_12(struct mwifiex_adapter *VAR_10)
{
 struct pcie_service_card *VAR_11 = VAR_10->card;
 const struct mwifiex_pcie_card_reg *VAR_12 = VAR_11->pcie.reg;
 u32 VAR_13 = VAR_11->evtbd_rdptr & VAR_6;
 u32 VAR_14, VAR_15;
 struct mwifiex_evt_buf_desc *VAR_16;

 if (!FUNC_5(VAR_10))
  FUNC_6(VAR_10);

 if (VAR_10->event_received) {
  FUNC_4(VAR_10, VAR_2,
       "info: Event being processed,\t"
       "do not process this interrupt just yet\n");
  return 0;
 }

 if (VAR_13 >= VAR_7) {
  FUNC_4(VAR_10, VAR_1,
       "info: Invalid read pointer...\n");
  return -1;
 }


 if (FUNC_7(VAR_10, VAR_12->evt_wrptr, &VAR_14)) {
  FUNC_4(VAR_10, VAR_1,
       "EventReady: failed to read reg->evt_wrptr\n");
  return -1;
 }

 FUNC_4(VAR_10, VAR_2,
      "info: EventReady: Initial <Rd: 0x%x, Wr: 0x%x>",
      VAR_11->evtbd_rdptr, VAR_14);
 if (((VAR_14 & VAR_6) != (VAR_11->evtbd_rdptr
           & VAR_6)) ||
     ((VAR_14 & VAR_12->evt_rollover_ind) ==
      (VAR_11->evtbd_rdptr & VAR_12->evt_rollover_ind))) {
  struct sk_buff *VAR_17;
  __le16 VAR_18 = 0;
  u16 VAR_19;

  FUNC_4(VAR_10, VAR_3,
       "info: Read Index: %d\n", VAR_13);
  VAR_17 = VAR_11->evt_buf_list[VAR_13];
  FUNC_8(VAR_10, VAR_17, VAR_9);



  VAR_11->evt_buf_list[VAR_13] = ((void*)0);
  VAR_16 = VAR_11->evtbd_ring[VAR_13];
  FUNC_3(VAR_16, 0, sizeof(*VAR_16));

  VAR_15 = FUNC_0(
   &VAR_17->data[VAR_10->intf_hdr_len]);
  VAR_10->event_cause = VAR_15;


  FUNC_2(&VAR_18, VAR_17->data, sizeof(__le16));
  VAR_19 = FUNC_1(VAR_18);
  FUNC_11(VAR_17, VAR_19);
  FUNC_10(VAR_17, VAR_10->intf_hdr_len);
  FUNC_4(VAR_10, VAR_2,
       "info: Event length: %d\n", VAR_19);

  if (VAR_19 > VAR_5 &&
      VAR_19 < VAR_4)
   FUNC_2(VAR_10->event_body, VAR_17->data +
          VAR_5, VAR_19 -
          VAR_5);

  VAR_10->event_received = 1;
  VAR_10->event_skb = VAR_17;





 } else {
  if (FUNC_9(VAR_10, VAR_8,
          VAR_0)) {
   FUNC_4(VAR_10, VAR_1,
        "Write register failed\n");
   return -1;
  }
 }

 return 0;
}
