
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ offload_handle; } ;
struct xfrm_state {TYPE_1__ xso; } ;
struct sk_buff {int dummy; } ;
struct sec_path {struct xfrm_state** xvec; scalar_t__ len; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;


 struct sec_path* FUNC_0 (struct sk_buff*) ;

bool FUNC_1(struct sk_buff *VAR_0, struct net_device *VAR_1,
          netdev_features_t VAR_2)
{
 struct sec_path *VAR_3 = FUNC_0(VAR_0);
 struct xfrm_state *VAR_4;

 if (VAR_3 && VAR_3->len) {
  VAR_4 = VAR_3->xvec[0];
  if (VAR_4 && VAR_4->xso.offload_handle)
   return 1;
 }
 return 0;
}
