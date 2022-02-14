
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; int protocol; int dev; } ;
struct net_device {int dummy; } ;
struct napi_struct {int dummy; } ;
struct TYPE_4__ {int bytes; int packets; int errors; } ;
struct TYPE_5__ {TYPE_1__ rx; } ;
struct aq_ring_s {size_t sw_head; size_t hw_head; TYPE_2__ stats; int idx; int aq_nic; struct aq_ring_buff_s* buff_ring; } ;
struct TYPE_6__ {scalar_t__ pg_off; int page; int daddr; } ;
struct aq_ring_buff_s {int is_cleaned; unsigned int next; int is_error; scalar_t__ len; scalar_t__ is_hash_l4; int rss_hash; int vlan_rx_tag; scalar_t__ is_vlan; int is_cso_err; int is_tcp_cso; int is_udp_cso; int is_ip_cso; TYPE_3__ rxdata; scalar_t__ is_eop; } ;


 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 struct net_device* FUNC_5 (int ) ;
 int FUNC_6 (size_t,unsigned int,size_t) ;
 size_t FUNC_7 (struct aq_ring_s*,size_t) ;
 int FUNC_8 (struct aq_ring_s*,struct aq_ring_buff_s*,struct sk_buff*) ;
 struct sk_buff* FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_11 (int ,int ,scalar_t__) ;
 int FUNC_12 (struct sk_buff*,struct net_device*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,int ) ;
 struct sk_buff* FUNC_15 (struct napi_struct*,scalar_t__) ;
 int FUNC_16 (struct napi_struct*,struct sk_buff*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct sk_buff*,int ,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_19 (struct sk_buff*,scalar_t__) ;
 int FUNC_20 (struct sk_buff*,int ) ;
 int FUNC_21 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_22 (int) ;

int FUNC_23(struct aq_ring_s *VAR_8,
       struct napi_struct *VAR_9,
       int *VAR_10,
       int VAR_11)
{
 struct net_device *VAR_12 = FUNC_5(VAR_8->aq_nic);
 bool VAR_13 = 1;
 int VAR_14 = 0;

 for (; (VAR_8->sw_head != VAR_8->hw_head) && VAR_11;
  VAR_8->sw_head = FUNC_7(VAR_8, VAR_8->sw_head),
  --VAR_11, ++(*VAR_10)) {
  struct aq_ring_buff_s *VAR_15 = &VAR_8->buff_ring[VAR_8->sw_head];
  struct aq_ring_buff_s *VAR_16 = ((void*)0);
  struct sk_buff *VAR_17 = ((void*)0);
  unsigned int VAR_18 = 0U;
  unsigned int VAR_19 = 0U;
  u16 VAR_20;

  if (VAR_15->is_cleaned)
   continue;

  if (!VAR_15->is_eop) {
   VAR_16 = VAR_15;
   do {
    VAR_18 = VAR_16->next,
    VAR_16 = &VAR_8->buff_ring[VAR_18];
    VAR_13 =
     FUNC_6(VAR_8->sw_head,
           VAR_18,
           VAR_8->hw_head);

    if (FUNC_22(!VAR_13))
     break;

    VAR_15->is_error |= VAR_16->is_error;
    VAR_15->is_cso_err |= VAR_16->is_cso_err;

   } while (!VAR_16->is_eop);

   if (!VAR_13) {
    VAR_14 = 0;
    goto err_exit;
   }
   if (VAR_15->is_error || VAR_15->is_cso_err) {
    VAR_16 = VAR_15;
    do {
     VAR_18 = VAR_16->next,
     VAR_16 = &VAR_8->buff_ring[VAR_18];

     VAR_16->is_cleaned = 1;
    } while (!VAR_16->is_eop);

    ++VAR_8->stats.rx.errors;
    continue;
   }
  }

  if (VAR_15->is_error) {
   ++VAR_8->stats.rx.errors;
   continue;
  }

  FUNC_10(FUNC_4(VAR_8->aq_nic),
           VAR_15->rxdata.daddr,
           VAR_15->rxdata.pg_off,
           VAR_15->len, VAR_3);


  if (VAR_15->is_eop &&
      VAR_15->len <= VAR_0 - VAR_2) {
   VAR_17 = FUNC_9(FUNC_3(&VAR_15->rxdata),
     VAR_0);
   if (FUNC_22(!VAR_17)) {
    VAR_14 = -VAR_4;
    goto err_exit;
   }
   FUNC_19(VAR_17, VAR_15->len);
   FUNC_17(VAR_15->rxdata.page);
  } else {
   VAR_17 = FUNC_15(VAR_9, VAR_1);
   if (FUNC_22(!VAR_17)) {
    VAR_14 = -VAR_4;
    goto err_exit;
   }

   VAR_20 = VAR_15->len;
   if (VAR_20 > VAR_1)
    VAR_20 = FUNC_11(VAR_17->dev,
         FUNC_3(&VAR_15->rxdata),
         VAR_1);

   FUNC_14(FUNC_1(VAR_17, VAR_20), FUNC_3(&VAR_15->rxdata),
          FUNC_0(VAR_20, sizeof(long)));

   if (VAR_15->len - VAR_20 > 0) {
    FUNC_18(VAR_17, 0, VAR_15->rxdata.page,
      VAR_15->rxdata.pg_off + VAR_20,
      VAR_15->len - VAR_20,
      VAR_0);
    FUNC_17(VAR_15->rxdata.page);
   }

   if (!VAR_15->is_eop) {
    VAR_16 = VAR_15;
    VAR_19 = 1U;
    do {
     VAR_18 = VAR_16->next,
     VAR_16 = &VAR_8->buff_ring[VAR_18];

     FUNC_10(
       FUNC_4(VAR_8->aq_nic),
       VAR_16->rxdata.daddr,
       VAR_16->rxdata.pg_off,
       VAR_16->len,
       VAR_3);
     FUNC_18(VAR_17, VAR_19++,
       VAR_16->rxdata.page,
       VAR_16->rxdata.pg_off,
       VAR_16->len,
       VAR_0);
     FUNC_17(VAR_16->rxdata.page);
     VAR_16->is_cleaned = 1;

     VAR_15->is_ip_cso &= VAR_16->is_ip_cso;
     VAR_15->is_udp_cso &= VAR_16->is_udp_cso;
     VAR_15->is_tcp_cso &= VAR_16->is_tcp_cso;
     VAR_15->is_cso_err |= VAR_16->is_cso_err;

    } while (!VAR_16->is_eop);
   }
  }

  if (VAR_15->is_vlan)
   FUNC_2(VAR_17, FUNC_13(VAR_5),
            VAR_15->vlan_rx_tag);

  VAR_17->protocol = FUNC_12(VAR_17, VAR_12);

  FUNC_8(VAR_8, VAR_15, VAR_17);

  FUNC_21(VAR_17, VAR_15->rss_hash,
        VAR_15->is_hash_l4 ? VAR_6 :
        VAR_7);

  FUNC_20(VAR_17, VAR_8->idx);

  ++VAR_8->stats.rx.packets;
  VAR_8->stats.rx.bytes += VAR_17->len;

  FUNC_16(VAR_9, VAR_17);
 }

err_exit:
 return VAR_14;
}
