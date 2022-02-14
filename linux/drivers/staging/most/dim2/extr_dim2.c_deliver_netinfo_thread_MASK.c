
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dim2_hdm {int mac_addrs; int link_state; int most_iface; int (* on_netinfo ) (int *,int ,int ) ;scalar_t__ deliver_netinfo; int netinfo_waitq; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_0)
{
 struct dim2_hdm *VAR_1 = VAR_0;

 while (!FUNC_0()) {
  FUNC_2(VAR_1->netinfo_waitq,
      VAR_1->deliver_netinfo ||
      FUNC_0());

  if (VAR_1->deliver_netinfo) {
   VAR_1->deliver_netinfo--;
   if (VAR_1->on_netinfo) {
    VAR_1->on_netinfo(&VAR_1->most_iface,
      VAR_1->link_state,
      VAR_1->mac_addrs);
   }
  }
 }

 return 0;
}
