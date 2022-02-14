
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct vlan_ethhdr {scalar_t__ h_vlan_encapsulated_proto; void* h_vlan_TCI; void* h_vlan_proto; } ;
struct sk_buff {scalar_t__ protocol; scalar_t__ ip_summed; scalar_t__ data; } ;
struct nx_host_tx_ring {size_t producer; int num_desc; TYPE_1__* cmd_buf_arr; struct cmd_desc_type0* desc_head; } ;
struct net_device {int features; } ;
struct cmd_desc_type0 {int total_hdr_length; int tcp_hdr_offset; int ip_hdr_offset; int mss; } ;
typedef scalar_t__ __be16 ;
struct TYPE_8__ {scalar_t__ protocol; } ;
struct TYPE_7__ {scalar_t__ nexthdr; } ;
struct TYPE_6__ {scalar_t__ gso_size; } ;
struct TYPE_5__ {int * skb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 size_t FUNC_3 (size_t,int ) ;
 void* FUNC_4 (int ) ;
 TYPE_4__* FUNC_5 (struct sk_buff*) ;
 TYPE_3__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (struct cmd_desc_type0*,int ,scalar_t__) ;
 int FUNC_9 (struct cmd_desc_type0*,int ) ;
 int FUNC_10 (struct sk_buff*,struct vlan_ethhdr*,int) ;
 int FUNC_11 (struct sk_buff*,int,char*,int) ;
 int FUNC_12 (struct sk_buff*) ;
 TYPE_2__* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 scalar_t__ FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_18(struct net_device *VAR_18,
  struct nx_host_tx_ring *VAR_19,
  struct cmd_desc_type0 *VAR_20,
  struct sk_buff *VAR_21)
{
 u8 VAR_22 = VAR_10;
 __be16 VAR_23 = VAR_21->protocol;
 u16 VAR_24 = 0, VAR_25 = 0;
 u32 VAR_26;
 int VAR_27, VAR_28, VAR_29, VAR_30 = 0, VAR_31 = 0, VAR_32 = 0;
 struct cmd_desc_type0 *VAR_33;
 struct vlan_ethhdr *VAR_34;

 if (VAR_23 == FUNC_1(VAR_1)) {

  VAR_34 = (struct vlan_ethhdr *)VAR_21->data;
  VAR_23 = VAR_34->h_vlan_encapsulated_proto;
  VAR_24 = VAR_5;

 } else if (FUNC_16(VAR_21)) {
  VAR_24 = VAR_4;
  VAR_25 = FUNC_15(VAR_21);
  FUNC_9(VAR_20, VAR_25);
  VAR_32 = 1;
 }

 if ((VAR_18->features & (VAR_8 | VAR_9)) &&
   FUNC_13(VAR_21)->gso_size > 0) {

  VAR_30 = FUNC_14(VAR_21) + FUNC_17(VAR_21);

  VAR_20->mss = FUNC_2(FUNC_13(VAR_21)->gso_size);
  VAR_20->total_hdr_length = VAR_30;
  if (VAR_32) {
   VAR_20->total_hdr_length += VAR_17;
   VAR_20->tcp_hdr_offset = VAR_17;
   VAR_20->ip_hdr_offset = VAR_17;

   VAR_24 |= VAR_5;
  }

  VAR_22 = (VAR_23 == FUNC_1(VAR_3)) ?
    VAR_13 : VAR_12;
  VAR_31 = 1;

 } else if (VAR_21->ip_summed == VAR_0) {
  u8 VAR_35;

  if (VAR_23 == FUNC_1(VAR_2)) {
   VAR_35 = FUNC_5(VAR_21)->protocol;

   if (VAR_35 == VAR_6)
    VAR_22 = VAR_14;
   else if(VAR_35 == VAR_7)
    VAR_22 = VAR_16;
  } else if (VAR_23 == FUNC_1(VAR_3)) {
   VAR_35 = FUNC_6(VAR_21)->nexthdr;

   if (VAR_35 == VAR_6)
    VAR_22 = VAR_11;
   else if(VAR_35 == VAR_7)
    VAR_22 = VAR_15;
  }
 }

 VAR_20->tcp_hdr_offset += FUNC_14(VAR_21);
 VAR_20->ip_hdr_offset += FUNC_12(VAR_21);
 FUNC_8(VAR_20, VAR_24, VAR_22);

 if (!VAR_31)
  return;




 VAR_26 = VAR_19->producer;
 VAR_27 = 0;
 VAR_28 = 2;

 if (VAR_32) {


  VAR_33 = &VAR_19->desc_head[VAR_26];
  VAR_19->cmd_buf_arr[VAR_26].skb = ((void*)0);

  VAR_29 = FUNC_7((int)sizeof(struct cmd_desc_type0) - VAR_28,
    VAR_30 + VAR_17);

  VAR_34 = (struct vlan_ethhdr *)((char *)VAR_33 + 2);
  FUNC_10(VAR_21, VAR_34, 12);
  VAR_34->h_vlan_proto = FUNC_4(VAR_1);
  VAR_34->h_vlan_TCI = FUNC_4(VAR_25);
  FUNC_11(VAR_21, 12,
    (char *)VAR_34 + 16, VAR_29 - 16);

  VAR_27 = VAR_29 - VAR_17;
  VAR_28 = 0;

  VAR_26 = FUNC_3(VAR_26, VAR_19->num_desc);
 }

 while (VAR_27 < VAR_30) {

  VAR_29 = FUNC_7((int)sizeof(struct cmd_desc_type0) - VAR_28,
    (VAR_30 - VAR_27));

  VAR_33 = &VAR_19->desc_head[VAR_26];
  VAR_19->cmd_buf_arr[VAR_26].skb = ((void*)0);

  FUNC_11(VAR_21, VAR_27,
     (char *)VAR_33 + VAR_28, VAR_29);

  VAR_27 += VAR_29;
  VAR_28 = 0;

  VAR_26 = FUNC_3(VAR_26, VAR_19->num_desc);
 }

 VAR_19->producer = VAR_26;
 FUNC_0();
}
