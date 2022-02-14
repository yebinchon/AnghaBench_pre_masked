
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct TYPE_4__ {struct sockaddr_in sin; } ;
struct sockaddr_rxrpc {int transport_len; TYPE_2__ transport; int transport_type; int srx_family; } ;
struct afs_addr_list {int nr_addrs; int max_addrs; int nr_ipv4; struct sockaddr_rxrpc* addrs; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sockaddr_rxrpc*,struct sockaddr_rxrpc*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(struct afs_addr_list *VAR_3, __be32 VAR_4, u16 VAR_5)
{
 struct sockaddr_rxrpc *VAR_6;
 u32 VAR_7 = FUNC_2(VAR_4);
 int VAR_8;

 if (VAR_3->nr_addrs >= VAR_3->max_addrs)
  return;

 for (VAR_8 = 0; VAR_8 < VAR_3->nr_ipv4; VAR_8++) {
  struct sockaddr_in *VAR_9 = &VAR_3->addrs[VAR_8].transport.sin;
  u32 VAR_10 = FUNC_2(VAR_9->sin_addr.s_addr);
  u16 VAR_11 = FUNC_3(VAR_9->sin_port);

  if (VAR_7 == VAR_10 && VAR_5 == VAR_11)
   return;
  if (VAR_7 == VAR_10 && VAR_5 < VAR_11)
   break;
  if (VAR_7 < VAR_10)
   break;
 }

 if (VAR_8 < VAR_3->nr_addrs)
  FUNC_1(VAR_3->addrs + VAR_8 + 1,
   VAR_3->addrs + VAR_8,
   sizeof(VAR_3->addrs[0]) * (VAR_3->nr_addrs - VAR_8));

 VAR_6 = &VAR_3->addrs[VAR_8];
 VAR_6->srx_family = VAR_1;
 VAR_6->transport_type = VAR_2;
 VAR_6->transport_len = sizeof(VAR_6->transport.sin);
 VAR_6->transport.sin.sin_family = VAR_0;
 VAR_6->transport.sin.sin_port = FUNC_0(VAR_5);
 VAR_6->transport.sin.sin_addr.s_addr = VAR_4;
 VAR_3->nr_ipv4++;
 VAR_3->nr_addrs++;
}
