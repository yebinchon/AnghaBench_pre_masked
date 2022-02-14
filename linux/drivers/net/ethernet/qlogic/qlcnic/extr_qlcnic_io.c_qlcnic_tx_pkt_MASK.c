
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct vlan_ethhdr {void* h_vlan_TCI; void* h_vlan_proto; void* h_vlan_encapsulated_proto; } ;
struct sk_buff {int* data; scalar_t__ ip_summed; void* protocol; } ;
struct qlcnic_host_tx_ring {size_t producer; int num_desc; TYPE_1__* cmd_buf_arr; struct cmd_desc_type0* desc_head; } ;
struct TYPE_7__ {int lso_frames; } ;
struct qlcnic_adapter {scalar_t__ tx_pvid; int flags; TYPE_2__ stats; } ;
struct cmd_desc_type0 {int hdr_length; int tcp_hdr_offset; int ip_hdr_offset; int mss; int eth_addr; } ;
struct TYPE_10__ {int protocol; } ;
struct TYPE_9__ {int nexthdr; } ;
struct TYPE_8__ {int gso_size; } ;
struct TYPE_6__ {int * skb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (size_t,int ) ;
 void* FUNC_2 (scalar_t__) ;
 TYPE_5__* FUNC_3 (struct sk_buff*) ;
 TYPE_4__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,int*,int ) ;
 int FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (void*) ;
 int FUNC_8 (struct cmd_desc_type0*,scalar_t__,int) ;
 int FUNC_9 (struct cmd_desc_type0*,scalar_t__) ;
 int FUNC_10 (struct sk_buff*,struct vlan_ethhdr*,int) ;
 int FUNC_11 (struct sk_buff*,int,char*,int) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 TYPE_3__* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 scalar_t__ FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (struct sk_buff*) ;
 int FUNC_18 () ;
 int FUNC_19 (struct sk_buff*) ;
 scalar_t__ FUNC_20 (scalar_t__) ;

__attribute__((used)) static int FUNC_21(struct qlcnic_adapter *VAR_20,
    struct cmd_desc_type0 *VAR_21, struct sk_buff *VAR_22,
    struct qlcnic_host_tx_ring *VAR_23)
{
 u8 VAR_24, VAR_25 = 0, VAR_26 = 0, VAR_27 = 0;
 u16 VAR_28 = 0, VAR_29 = 0;
 int VAR_30, VAR_31, VAR_32, VAR_33;
 struct cmd_desc_type0 *VAR_34;
 struct vlan_ethhdr *VAR_35;
 u16 VAR_36 = FUNC_7(VAR_22->protocol);
 u32 VAR_37 = VAR_23->producer;

 if (VAR_36 == VAR_4) {
  VAR_35 = (struct vlan_ethhdr *)VAR_22->data;
  VAR_28 = VAR_10;
  VAR_29 = FUNC_7(VAR_35->h_vlan_TCI);
  VAR_36 = FUNC_7(VAR_35->h_vlan_encapsulated_proto);
  VAR_27 = 1;
 } else if (FUNC_17(VAR_22)) {
  VAR_28 = VAR_9;
  VAR_29 = FUNC_16(VAR_22);
  VAR_27 = 1;
 }
 if (FUNC_20(VAR_20->tx_pvid)) {
  if (VAR_27 && !(VAR_20->flags & VAR_11))
   return -VAR_2;
  if (VAR_27 && (VAR_20->flags & VAR_11))
   goto set_flags;

  VAR_28 = VAR_9;
  VAR_29 = VAR_20->tx_pvid;
 }
set_flags:
 FUNC_9(VAR_21, VAR_29);
 FUNC_8(VAR_21, VAR_28, VAR_25);

 if (*(VAR_22->data) & VAR_0) {
  VAR_28 |= VAR_0;
  FUNC_5(&VAR_21->eth_addr, VAR_22->data, VAR_3);
 }
 VAR_25 = VAR_12;
 if (FUNC_12(VAR_22)) {
  VAR_26 = FUNC_15(VAR_22) + FUNC_19(VAR_22);
  VAR_21->mss = FUNC_0(FUNC_14(VAR_22)->gso_size);
  VAR_21->hdr_length = VAR_26;
  VAR_25 = (VAR_36 == VAR_6) ? VAR_15 :
          VAR_14;



  VAR_30 = 0;
  VAR_31 = 2;

  if (VAR_28 & VAR_9) {
   VAR_21->hdr_length += VAR_19;
   VAR_21->tcp_hdr_offset = VAR_19;
   VAR_21->ip_hdr_offset = VAR_19;


   VAR_28 |= VAR_10;


   VAR_34 = &VAR_23->desc_head[VAR_37];
   VAR_23->cmd_buf_arr[VAR_37].skb = ((void*)0);

   VAR_32 = FUNC_6((int)sizeof(struct cmd_desc_type0) -
           VAR_31, VAR_26 + VAR_19);

   VAR_35 = (struct vlan_ethhdr *)((char *) VAR_34 + 2);
   FUNC_10(VAR_22, VAR_35, 12);
   VAR_35->h_vlan_proto = FUNC_2(VAR_4);
   VAR_35->h_vlan_TCI = FUNC_2(VAR_29);

   FUNC_11(VAR_22, 12,
        (char *)VAR_35 + 16,
        VAR_32 - 16);
   VAR_30 = VAR_32 - VAR_19;
   VAR_31 = 0;
   VAR_37 = FUNC_1(VAR_37, VAR_23->num_desc);
  }

  while (VAR_30 < VAR_26) {
   VAR_33 = (int)sizeof(struct cmd_desc_type0) - VAR_31;
   VAR_32 = FUNC_6(VAR_33, (VAR_26 - VAR_30));
   VAR_34 = &VAR_23->desc_head[VAR_37];
   VAR_23->cmd_buf_arr[VAR_37].skb = ((void*)0);
   FUNC_11(VAR_22, VAR_30,
        (char *)VAR_34 +
        VAR_31, VAR_32);
   VAR_30 += VAR_32;
   VAR_31 = 0;
   VAR_37 = FUNC_1(VAR_37, VAR_23->num_desc);
  }

  VAR_23->producer = VAR_37;
  FUNC_18();
  VAR_20->stats.lso_frames++;

 } else if (VAR_22->ip_summed == VAR_1) {
  if (VAR_36 == VAR_5) {
   VAR_24 = FUNC_3(VAR_22)->protocol;

   if (VAR_24 == VAR_7)
    VAR_25 = VAR_16;
   else if (VAR_24 == VAR_8)
    VAR_25 = VAR_18;
  } else if (VAR_36 == VAR_6) {
   VAR_24 = FUNC_4(VAR_22)->nexthdr;

   if (VAR_24 == VAR_7)
    VAR_25 = VAR_13;
   else if (VAR_24 == VAR_8)
    VAR_25 = VAR_17;
  }
 }
 VAR_21->tcp_hdr_offset += FUNC_15(VAR_22);
 VAR_21->ip_hdr_offset += FUNC_13(VAR_22);
 FUNC_8(VAR_21, VAR_28, VAR_25);

 return 0;
}
