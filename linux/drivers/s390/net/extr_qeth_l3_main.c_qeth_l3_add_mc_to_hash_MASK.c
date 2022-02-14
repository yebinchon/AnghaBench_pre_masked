
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* addr; } ;
struct TYPE_4__ {TYPE_1__ a4; } ;
struct qeth_ipaddr {int is_multicast; int hnode; int disp_flag; TYPE_2__ u; int mac; } ;
struct qeth_card {int ip_mc_htable; } ;
struct ip_mc_list {int multiaddr; int next_rcu; } ;
struct in_device {int mc_list; } ;


 int FUNC_0 (struct qeth_card*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct qeth_ipaddr*) ;
 struct qeth_ipaddr* FUNC_6 (struct qeth_card*,struct qeth_ipaddr*) ;
 struct qeth_ipaddr* FUNC_7 (int ) ;
 int FUNC_8 (struct qeth_ipaddr*) ;
 struct ip_mc_list* FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct qeth_card *VAR_3, struct in_device *VAR_4)
{
 struct ip_mc_list *VAR_5;
 struct qeth_ipaddr *VAR_6, *VAR_7;

 FUNC_0(VAR_3, 4, "addmc");

 VAR_6 = FUNC_7(VAR_2);
 if (!VAR_6)
  return;

 for (VAR_5 = FUNC_9(VAR_4->mc_list); VAR_5 != ((void*)0);
      VAR_5 = FUNC_9(VAR_5->next_rcu)) {
  FUNC_4(VAR_5->multiaddr, VAR_6->mac);
  VAR_6->u.a4.addr = FUNC_1(VAR_5->multiaddr);
  VAR_6->is_multicast = 1;

  VAR_7 = FUNC_6(VAR_3, VAR_6);
  if (VAR_7) {

   VAR_7->disp_flag = VAR_1;
  } else {
   VAR_7 = FUNC_7(VAR_2);
   if (!VAR_7)
    continue;
   FUNC_2(VAR_7->mac, VAR_6->mac);
   VAR_7->u.a4.addr = FUNC_1(VAR_5->multiaddr);
   VAR_7->is_multicast = 1;
   VAR_7->disp_flag = VAR_0;
   FUNC_3(VAR_3->ip_mc_htable,
     &VAR_7->hnode, FUNC_8(VAR_7));
  }
 }

 FUNC_5(VAR_6);
}
