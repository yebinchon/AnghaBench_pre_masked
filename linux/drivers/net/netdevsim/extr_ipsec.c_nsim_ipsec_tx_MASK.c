
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {size_t proto; } ;
struct TYPE_3__ {size_t offload_handle; } ;
struct xfrm_state {TYPE_2__ id; TYPE_1__ xso; } ;
struct sk_buff {int dummy; } ;
struct sec_path {size_t len; } ;
struct nsim_sa {int used; } ;
struct nsim_ipsec {int tx; struct nsim_sa* sa; } ;
struct netdevsim {int netdev; struct nsim_ipsec ipsec; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 struct sec_path* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;
 struct xfrm_state* FUNC_3 (struct sk_buff*) ;

bool FUNC_4(struct netdevsim *VAR_4, struct sk_buff *VAR_5)
{
 struct sec_path *VAR_6 = FUNC_1(VAR_5);
 struct nsim_ipsec *VAR_7 = &VAR_4->ipsec;
 struct xfrm_state *VAR_8;
 struct nsim_sa *VAR_9;
 u32 VAR_10;


 if (!VAR_6)
  return 1;

 if (FUNC_2(!VAR_6->len)) {
  FUNC_0(VAR_4->netdev, "no xfrm state len = %d\n",
      VAR_6->len);
  return 0;
 }

 VAR_8 = FUNC_3(VAR_5);
 if (FUNC_2(!VAR_8)) {
  FUNC_0(VAR_4->netdev, "no xfrm_input_state() xs = %p\n", VAR_8);
  return 0;
 }

 VAR_10 = VAR_8->xso.offload_handle & ~VAR_3;
 if (FUNC_2(VAR_10 >= VAR_2)) {
  FUNC_0(VAR_4->netdev, "bad sa_idx=%d max=%d\n",
      VAR_10, VAR_2);
  return 0;
 }

 VAR_9 = &VAR_7->sa[VAR_10];
 if (FUNC_2(!VAR_9->used)) {
  FUNC_0(VAR_4->netdev, "unused sa_idx=%d\n", VAR_10);
  return 0;
 }

 if (VAR_8->id.proto != VAR_1 && VAR_8->id.proto != VAR_0) {
  FUNC_0(VAR_4->netdev, "unexpected proto=%d\n", VAR_8->id.proto);
  return 0;
 }

 VAR_7->tx++;

 return 1;
}
