
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data; scalar_t__ protocol; int csum_offset; scalar_t__ ip_summed; int queue_mapping; int dev; } ;
struct ipv6hdr {scalar_t__ nexthdr; int daddr; int saddr; } ;
struct iphdr {scalar_t__ protocol; int daddr; int saddr; } ;
typedef int skb_frag_t ;
typedef scalar_t__ __wsum ;
typedef scalar_t__ __sum16 ;
struct TYPE_2__ {int nr_frags; int gso_type; int gso_size; int * frags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct sk_buff* FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int *,int *,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ) ;
 struct iphdr* FUNC_5 (struct sk_buff*) ;
 struct ipv6hdr* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int,int,int,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (struct sk_buff*,int) ;
 int FUNC_18 (struct sk_buff*,int) ;
 int FUNC_19 (struct sk_buff*,int) ;
 TYPE_1__* FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct sk_buff*) ;

__attribute__((used)) static inline struct sk_buff *FUNC_23(struct sk_buff *VAR_8, int VAR_9)
{
 struct sk_buff *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_12 = VAR_8->len;
 VAR_13 = 0;
 if (VAR_12 < VAR_4) {
  VAR_13 += VAR_4 - VAR_8->len;
  VAR_12 += VAR_13;
 }
 VAR_12 += VAR_7;
 VAR_13 += 8 - (VAR_12 & 7);


 VAR_14 = FUNC_20(VAR_8)->nr_frags >= VAR_9;
 for (VAR_11 = 0; VAR_11 < FUNC_20(VAR_8)->nr_frags; VAR_11++) {
  skb_frag_t *VAR_15 = &FUNC_20(VAR_8)->frags[VAR_11];

  VAR_14 |= FUNC_10(VAR_15) & 7;
 }
 if (((unsigned long)VAR_8->data & 7) != VAR_7 ||
     FUNC_21(VAR_8) < VAR_13 ||
     FUNC_11(VAR_8) < VAR_7 || VAR_14) {
  int VAR_16 = 0, VAR_17;
  __wsum VAR_18;

  VAR_12 = VAR_8->len > VAR_4 ? VAR_8->len : VAR_4;
  VAR_10 = FUNC_0(VAR_8->dev, VAR_12);
  if (!VAR_10) {
   FUNC_3(VAR_8);
   return ((void*)0);
  }
  FUNC_16(VAR_10, VAR_7);

  VAR_10->protocol = VAR_8->protocol;
  VAR_17 = FUNC_13(VAR_8) - VAR_8->data;
  FUNC_17(VAR_10, VAR_17);
  VAR_17 = FUNC_14(VAR_8) - VAR_8->data;
  FUNC_18(VAR_10, VAR_17);
  VAR_17 = FUNC_22(VAR_8) - VAR_8->data;
  FUNC_19(VAR_10, VAR_17);

  VAR_17 = 0;
  VAR_10->csum_offset = VAR_8->csum_offset;
  VAR_10->ip_summed = VAR_8->ip_summed;

  if (VAR_8->ip_summed == VAR_1)
   VAR_16 = FUNC_7(VAR_8);
  if (VAR_16) {
   int VAR_19 = VAR_16 + VAR_10->csum_offset;


   if (FUNC_9(VAR_8, 0, VAR_10->data, VAR_16)) {
    FUNC_3(VAR_10);
    FUNC_3(VAR_8);
    return ((void*)0);
   }


   *(__sum16 *)(VAR_8->data + VAR_19) = 0;
   VAR_18 = FUNC_8(VAR_8, VAR_16,
            VAR_10->data + VAR_16,
            VAR_8->len - VAR_16, 0);


   if (VAR_8->protocol == FUNC_4(VAR_2)) {
    struct iphdr *VAR_20 = FUNC_5(VAR_10);

    if (VAR_20->protocol == VAR_5 ||
        VAR_20->protocol == VAR_6) {
     VAR_18 = FUNC_2(VAR_20->saddr,
         VAR_20->daddr,
         VAR_8->len - VAR_16,
         VAR_20->protocol,
         VAR_18);
    }
   } else if (VAR_8->protocol == FUNC_4(VAR_3)) {
    struct ipv6hdr *VAR_21 = FUNC_6(VAR_10);

    if (VAR_21->nexthdr == VAR_5 ||
        VAR_21->nexthdr == VAR_6) {
     VAR_18 = FUNC_1(&VAR_21->saddr,
              &VAR_21->daddr,
              VAR_8->len - VAR_16,
              VAR_21->nexthdr,
              VAR_18);
    }
   }


   *(__sum16 *)(VAR_10->data + VAR_19) = VAR_18;

   VAR_10->ip_summed = VAR_0;
  } else if (FUNC_9(VAR_8, 0, VAR_10->data, VAR_8->len)) {
   FUNC_3(VAR_10);
   FUNC_3(VAR_8);
   return ((void*)0);
  }
  (void)FUNC_15(VAR_10, VAR_8->len);
  if (FUNC_12(VAR_8)) {
   FUNC_20(VAR_10)->gso_size = FUNC_20(VAR_8)->gso_size;
   FUNC_20(VAR_10)->gso_type = FUNC_20(VAR_8)->gso_type;
  }
  VAR_10->queue_mapping = VAR_8->queue_mapping;
  FUNC_3(VAR_8);
  VAR_8 = VAR_10;
 }
 return VAR_8;
}
