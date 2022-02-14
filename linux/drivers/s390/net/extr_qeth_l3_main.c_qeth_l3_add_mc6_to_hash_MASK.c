
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int addr; } ;
struct TYPE_5__ {TYPE_1__ a6; } ;
struct qeth_ipaddr {int is_multicast; int hnode; int disp_flag; TYPE_2__ u; int mac; } ;
struct qeth_card {int ip_mc_htable; } ;
struct inet6_dev {struct ifmcaddr6* mc_list; } ;
struct in6_addr {int dummy; } ;
struct TYPE_6__ {int s6_addr; } ;
struct ifmcaddr6 {TYPE_3__ mca_addr; struct ifmcaddr6* next; } ;


 int FUNC_0 (struct qeth_card*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (struct qeth_ipaddr*) ;
 int FUNC_5 (int *,int *,int) ;
 struct qeth_ipaddr* FUNC_6 (struct qeth_card*,struct qeth_ipaddr*) ;
 struct qeth_ipaddr* FUNC_7 (int ) ;
 int FUNC_8 (struct qeth_ipaddr*) ;

__attribute__((used)) static void FUNC_9(struct qeth_card *VAR_3,
        struct inet6_dev *VAR_4)
{
 struct qeth_ipaddr *VAR_5;
 struct ifmcaddr6 *VAR_6;
 struct qeth_ipaddr *VAR_7;

 FUNC_0(VAR_3, 4, "addmc6");

 VAR_7 = FUNC_7(VAR_2);
 if (!VAR_7)
  return;

 for (VAR_6 = VAR_4->mc_list; VAR_6 != ((void*)0); VAR_6 = VAR_6->next) {
  FUNC_3(&VAR_6->mca_addr, VAR_7->mac);
  FUNC_5(&VAR_7->u.a6.addr, &VAR_6->mca_addr.s6_addr,
         sizeof(struct in6_addr));
  VAR_7->is_multicast = 1;

  VAR_5 = FUNC_6(VAR_3, VAR_7);
  if (VAR_5) {

   VAR_5->disp_flag = VAR_1;
   continue;
  }

  VAR_5 = FUNC_7(VAR_2);
  if (!VAR_5)
   continue;

  FUNC_1(VAR_5->mac, VAR_7->mac);
  FUNC_5(&VAR_5->u.a6.addr, &VAR_6->mca_addr.s6_addr,
         sizeof(struct in6_addr));
  VAR_5->is_multicast = 1;
  VAR_5->disp_flag = VAR_0;
  FUNC_2(VAR_3->ip_mc_htable,
    &VAR_5->hnode, FUNC_8(VAR_5));

 }
 FUNC_4(VAR_7);
}
