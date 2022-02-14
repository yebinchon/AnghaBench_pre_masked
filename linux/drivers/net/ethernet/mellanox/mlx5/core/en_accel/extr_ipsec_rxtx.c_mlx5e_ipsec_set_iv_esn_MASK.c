
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct xfrm_state {struct xfrm_replay_state_esn* replay_esn; } ;
struct xfrm_replay_state_esn {scalar_t__ oseq; } ;
struct TYPE_3__ {scalar_t__ low; scalar_t__ hi; } ;
struct xfrm_offload {TYPE_1__ seq; } ;
struct sk_buff {int dummy; } ;
struct ip_esp_hdr {int dummy; } ;
typedef scalar_t__ __u32 ;
typedef int __be64 ;
struct TYPE_4__ {scalar_t__ gso_segs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int,int *,int) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(struct sk_buff *VAR_1, struct xfrm_state *VAR_2,
       struct xfrm_offload *VAR_3)
{
 struct xfrm_replay_state_esn *VAR_4 = VAR_2->replay_esn;
 __u32 VAR_5 = VAR_4->oseq;
 int VAR_6;
 __be64 VAR_7;
 u32 VAR_8;

 if (FUNC_5(FUNC_1(VAR_1) && VAR_5 < VAR_0 &&
       VAR_0 < (VAR_5 - FUNC_2(VAR_1)->gso_segs))) {
  VAR_8 = VAR_3->seq.hi - 1;
 } else {
  VAR_8 = VAR_3->seq.hi;
 }


 VAR_7 = FUNC_0(VAR_3->seq.low + ((u64)VAR_8 << 32));
 VAR_6 = FUNC_4(VAR_1) + sizeof(struct ip_esp_hdr);
 FUNC_3(VAR_1, VAR_6, &VAR_7, 8);
}
