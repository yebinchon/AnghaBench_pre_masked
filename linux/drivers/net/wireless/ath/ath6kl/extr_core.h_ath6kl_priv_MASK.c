
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ath6kl_vif {struct ath6kl* ar; } ;
struct ath6kl {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline struct ath6kl *FUNC_1(struct net_device *VAR_0)
{
 return ((struct ath6kl_vif *) FUNC_0(VAR_0))->ar;
}
