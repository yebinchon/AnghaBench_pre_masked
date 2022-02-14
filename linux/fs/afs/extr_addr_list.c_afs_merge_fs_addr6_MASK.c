
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sockaddr_in6 {int sin6_addr; int sin6_port; int sin6_family; } ;
struct TYPE_2__ {struct sockaddr_in6 sin6; } ;
struct sockaddr_rxrpc {int transport_len; TYPE_1__ transport; int transport_type; int srx_family; } ;
struct afs_addr_list {int nr_addrs; int max_addrs; int nr_ipv4; struct sockaddr_rxrpc* addrs; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct sockaddr_rxrpc*,struct sockaddr_rxrpc*,int) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(struct afs_addr_list *VAR_3, __be32 *VAR_4, u16 VAR_5)
{
 struct sockaddr_rxrpc *VAR_6;
 int VAR_7, VAR_8;

 if (VAR_3->nr_addrs >= VAR_3->max_addrs)
  return;

 for (VAR_7 = VAR_3->nr_ipv4; VAR_7 < VAR_3->nr_addrs; VAR_7++) {
  struct sockaddr_in6 *VAR_9 = &VAR_3->addrs[VAR_7].transport.sin6;
  u16 VAR_10 = FUNC_4(VAR_9->sin6_port);

  VAR_8 = FUNC_1(VAR_4, &VAR_9->sin6_addr, 16);
  if (VAR_8 == 0 && VAR_5 == VAR_10)
   return;
  if (VAR_8 == 0 && VAR_5 < VAR_10)
   break;
  if (VAR_8 < 0)
   break;
 }

 if (VAR_7 < VAR_3->nr_addrs)
  FUNC_3(VAR_3->addrs + VAR_7 + 1,
   VAR_3->addrs + VAR_7,
   sizeof(VAR_3->addrs[0]) * (VAR_3->nr_addrs - VAR_7));

 VAR_6 = &VAR_3->addrs[VAR_7];
 VAR_6->srx_family = VAR_1;
 VAR_6->transport_type = VAR_2;
 VAR_6->transport_len = sizeof(VAR_6->transport.sin6);
 VAR_6->transport.sin6.sin6_family = VAR_0;
 VAR_6->transport.sin6.sin6_port = FUNC_0(VAR_5);
 FUNC_2(&VAR_6->transport.sin6.sin6_addr, VAR_4, 16);
 VAR_3->nr_addrs++;
}
