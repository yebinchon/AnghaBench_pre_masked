
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sin6_port; int sin6_family; } ;
struct TYPE_4__ {TYPE_1__ sin6; } ;
struct sockaddr_rxrpc {unsigned short srx_service; int transport_len; TYPE_2__ transport; int transport_type; int srx_family; } ;
struct afs_addr_list {unsigned int max_addrs; struct sockaddr_rxrpc* addrs; int usage; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,unsigned int,unsigned short,unsigned short) ;
 int VAR_5 ;
 int FUNC_1 (unsigned short) ;
 struct afs_addr_list* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct afs_addr_list*,int ,unsigned int) ;

struct afs_addr_list *FUNC_5(unsigned int VAR_6,
      unsigned short VAR_7,
      unsigned short VAR_8)
{
 struct afs_addr_list *VAR_9;
 unsigned int VAR_10;

 FUNC_0("%u,%u,%u", VAR_6, VAR_7, VAR_8);

 if (VAR_6 > VAR_0)
  VAR_6 = VAR_0;

 VAR_9 = FUNC_2(FUNC_4(VAR_9, VAR_5, VAR_6), VAR_3);
 if (!VAR_9)
  return ((void*)0);

 FUNC_3(&VAR_9->usage, 1);
 VAR_9->max_addrs = VAR_6;

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  struct sockaddr_rxrpc *VAR_11 = &VAR_9->addrs[VAR_10];
  VAR_11->srx_family = VAR_2;
  VAR_11->srx_service = VAR_7;
  VAR_11->transport_type = VAR_4;
  VAR_11->transport_len = sizeof(VAR_11->transport.sin6);
  VAR_11->transport.sin6.sin6_family = VAR_1;
  VAR_11->transport.sin6.sin6_port = FUNC_1(VAR_8);
 }

 return VAR_9;
}
