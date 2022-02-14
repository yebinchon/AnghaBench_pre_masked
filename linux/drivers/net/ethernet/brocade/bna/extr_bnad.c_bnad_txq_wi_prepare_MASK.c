
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct udphdr {int dummy; } ;
struct sk_buff {scalar_t__ len; scalar_t__ ip_summed; } ;
struct bnad {TYPE_1__* netdev; int run_flags; } ;
struct TYPE_8__ {int frame_length; void* flags; void* l4_hdr_size_n_offset; void* lso_mss; void* opcode; void* vlan_tag; } ;
struct TYPE_9__ {TYPE_2__ wi; } ;
struct bna_txq_entry {TYPE_3__ hdr; } ;
struct bna_tcb {int priority; } ;
typedef void* __be16 ;
struct TYPE_12__ {scalar_t__ protocol; } ;
struct TYPE_11__ {scalar_t__ nexthdr; } ;
struct TYPE_10__ {int gso_size; } ;
struct TYPE_7__ {int mtu; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnad*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_2 (struct bnad*,struct sk_buff*) ;
 int FUNC_3 (scalar_t__) ;
 void* FUNC_4 (int) ;
 TYPE_6__* FUNC_5 (struct sk_buff*) ;
 TYPE_5__* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 TYPE_4__* FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 int VAR_16 ;
 scalar_t__ FUNC_14 (int ,int *) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_15 (int) ;
 void* FUNC_16 (struct sk_buff*) ;

__attribute__((used)) static int
FUNC_17(struct bnad *VAR_25, struct bna_tcb *VAR_26,
      struct sk_buff *VAR_27, struct bna_txq_entry *VAR_28)
{
 u16 VAR_29 = 0;
 u32 VAR_30;
 u16 VAR_31 = 0;

 if (FUNC_12(VAR_27)) {
  VAR_31 = (u16)FUNC_11(VAR_27);
  VAR_29 |= (VAR_1 | VAR_2);
 }
 if (FUNC_14(VAR_0, &VAR_25->run_flags)) {
  VAR_31 = ((VAR_26->priority & 0x7) << VAR_15)
    | (VAR_31 & 0x1fff);
  VAR_29 |= (VAR_1 | VAR_2);
 }
 VAR_28->hdr.wi.vlan_tag = FUNC_4(VAR_31);

 if (FUNC_8(VAR_27)) {
  VAR_30 = FUNC_9(VAR_27)->gso_size;
  if (FUNC_15(VAR_30 > VAR_25->netdev->mtu)) {
   FUNC_0(VAR_25, VAR_18);
   return -VAR_9;
  }
  if (FUNC_15((VAR_30 + FUNC_10(VAR_27) +
         FUNC_13(VAR_27)) >= VAR_27->len)) {
   VAR_28->hdr.wi.opcode = FUNC_4(VAR_6);
   VAR_28->hdr.wi.lso_mss = 0;
   FUNC_0(VAR_25, VAR_22);
  } else {
   VAR_28->hdr.wi.opcode = FUNC_4(VAR_7);
   VAR_28->hdr.wi.lso_mss = FUNC_4(VAR_30);
  }

  if (FUNC_2(VAR_25, VAR_27)) {
   FUNC_0(VAR_25, VAR_21);
   return -VAR_9;
  }

  VAR_29 |= (VAR_3 | VAR_4);
  VAR_28->hdr.wi.l4_hdr_size_n_offset =
   FUNC_4(FUNC_1(
   FUNC_13(VAR_27) >> 2, FUNC_10(VAR_27)));
 } else {
  VAR_28->hdr.wi.opcode = FUNC_4(VAR_6);
  VAR_28->hdr.wi.lso_mss = 0;

  if (FUNC_15(VAR_27->len > (VAR_25->netdev->mtu + VAR_14))) {
   FUNC_0(VAR_25, VAR_19);
   return -VAR_9;
  }

  if (VAR_27->ip_summed == VAR_8) {
   __be16 VAR_32 = FUNC_16(VAR_27);
   u8 VAR_33 = 0;

   if (VAR_32 == FUNC_4(VAR_10))
    VAR_33 = FUNC_5(VAR_27)->protocol;






   if (VAR_33 == VAR_12) {
    VAR_29 |= VAR_4;
    VAR_28->hdr.wi.l4_hdr_size_n_offset =
     FUNC_4(FUNC_1
           (0, FUNC_10(VAR_27)));

    FUNC_0(VAR_25, VAR_16);

    if (FUNC_15(FUNC_7(VAR_27) <
         FUNC_10(VAR_27) +
        FUNC_13(VAR_27))) {
     FUNC_0(VAR_25, VAR_20);
     return -VAR_9;
    }
   } else if (VAR_33 == VAR_13) {
    VAR_29 |= VAR_5;
    VAR_28->hdr.wi.l4_hdr_size_n_offset =
     FUNC_4(FUNC_1
           (0, FUNC_10(VAR_27)));

    FUNC_0(VAR_25, VAR_24);
    if (FUNC_15(FUNC_7(VAR_27) <
         FUNC_10(VAR_27) +
        sizeof(struct udphdr))) {
     FUNC_0(VAR_25, VAR_23);
     return -VAR_9;
    }
   } else {

    FUNC_0(VAR_25, VAR_17);
    return -VAR_9;
   }
  } else
   VAR_28->hdr.wi.l4_hdr_size_n_offset = 0;
 }

 VAR_28->hdr.wi.flags = FUNC_4(VAR_29);
 VAR_28->hdr.wi.frame_length = FUNC_3(VAR_27->len);

 return 0;
}
