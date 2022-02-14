
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wl1271_rx_descriptor {scalar_t__ packet_class; int status; int hlid; scalar_t__ pad_len; } ;
struct wl1271 {int netstack_work; int freezable_wq; int deferred_rx_queue; int plt; } ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct ieee80211_hdr {int seq_ctrl; int frame_control; } ;
typedef enum wl_rx_buf_align { ____Placeholder_wl_rx_buf_align } wl_rx_buf_align ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct sk_buff* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int*,int) ;
 int FUNC_11 (int *,struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,int) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int,char*,struct sk_buff*,scalar_t__,char*,int,int) ;
 int FUNC_15 (int,char*,int*,int ) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (struct wl1271*,struct wl1271_rx_descriptor*,int ,int,int ) ;
 int FUNC_18 (char*,int,int) ;
 int FUNC_19 (struct wl1271*,int*,size_t) ;
 int FUNC_20 (struct wl1271*,int*,int) ;
 int FUNC_21 (struct wl1271*,struct wl1271_rx_descriptor*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_22(struct wl1271 *VAR_12, u8 *VAR_13, u32 VAR_14,
     enum wl_rx_buf_align VAR_15, u8 *VAR_16)
{
 struct wl1271_rx_descriptor *VAR_17;
 struct sk_buff *VAR_18;
 struct ieee80211_hdr *VAR_19;
 u8 VAR_20 = 0;
 u8 VAR_21 = 0;
 u8 VAR_22 = 0, VAR_23 = 0;
 u16 VAR_24;
 u32 VAR_25;





 if (FUNC_13(VAR_12->plt))
  return -VAR_2;

 VAR_25 = FUNC_20(VAR_12, VAR_13, VAR_14);
 if (!VAR_25) {
  FUNC_16("Invalid packet arrived from HW. length %d",
        VAR_14);
  return -VAR_2;
 }

 if (VAR_15 == VAR_11)
  VAR_22 = VAR_6;
 else if (VAR_15 == VAR_10)
  VAR_23 = VAR_6;


 VAR_17 = (struct wl1271_rx_descriptor *) VAR_13;

 if (VAR_17->packet_class == VAR_9) {
  size_t VAR_26 = VAR_14 - sizeof(*VAR_17);
  FUNC_19(VAR_12, VAR_13 + sizeof(*VAR_17), VAR_26);
  return 0;
 }


 if (VAR_17->status & VAR_7) {
  VAR_19 = (void *)(VAR_13 + sizeof(*VAR_17) + VAR_23);
  FUNC_18("corrupted packet in RX: status: 0x%x len: %d",
          VAR_17->status & VAR_8,
          VAR_25);
  FUNC_15((VAR_1|VAR_0), "PKT: ", VAR_13 + sizeof(*VAR_17),
       FUNC_7(VAR_25,
    FUNC_2(VAR_19->frame_control)));
  return -VAR_2;
 }


 VAR_18 = FUNC_1(VAR_25 + VAR_22, VAR_4);
 if (!VAR_18) {
  FUNC_16("Couldn't allocate RX frame");
  return -VAR_3;
 }


 FUNC_12(VAR_18, VAR_22);







 FUNC_10(VAR_18, VAR_13 + sizeof(*VAR_17), VAR_25);
 if (VAR_15 == VAR_10)
  FUNC_9(VAR_18, VAR_6);

 *VAR_16 = VAR_17->hlid;

 VAR_19 = (struct ieee80211_hdr *)VAR_18->data;
 if (FUNC_3(VAR_19->frame_control))
  VAR_20 = 1;
 if (FUNC_4(VAR_19->frame_control))
  VAR_21 = 1;

 FUNC_17(VAR_12, VAR_17, FUNC_0(VAR_18), VAR_20,
    FUNC_5(VAR_19->frame_control));
 FUNC_21(VAR_12, VAR_17, VAR_18);

 VAR_24 = (FUNC_6(VAR_19->seq_ctrl) & VAR_5) >> 4;
 FUNC_14(VAR_1, "rx skb 0x%p: %d B %s seq %d hlid %d", VAR_18,
       VAR_18->len - VAR_17->pad_len,
       VAR_20 ? "beacon" : "",
       VAR_24, *VAR_16);

 FUNC_11(&VAR_12->deferred_rx_queue, VAR_18);
 FUNC_8(VAR_12->freezable_wq, &VAR_12->netstack_work);

 return VAR_21;
}
