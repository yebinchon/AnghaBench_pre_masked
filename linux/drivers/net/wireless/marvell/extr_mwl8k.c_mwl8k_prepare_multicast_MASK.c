
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct netdev_hw_addr_list {int dummy; } ;
struct mwl8k_cmd_pkt {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 struct mwl8k_cmd_pkt* FUNC_0 (struct ieee80211_hw*,int ,struct netdev_hw_addr_list*) ;

__attribute__((used)) static u64 FUNC_1(struct ieee80211_hw *VAR_0,
       struct netdev_hw_addr_list *VAR_1)
{
 struct mwl8k_cmd_pkt *VAR_2;
 VAR_2 = FUNC_0(VAR_0, 0, VAR_1);

 return (unsigned long)VAR_2;
}
