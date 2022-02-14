
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int s6_addr; } ;
struct sockaddr_in6 {int * sin6_scope_id; TYPE_2__ sin6_addr; } ;
struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct seq_file {int dummy; } ;
struct TYPE_6__ {int ss_family; } ;
struct TCP_Server_Info {scalar_t__ rdma; TYPE_3__ dstaddr; } ;




 int FUNC_0 (struct seq_file*,char*,int *) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static void
FUNC_2(struct seq_file *VAR_0, struct TCP_Server_Info *VAR_1)
{
 struct sockaddr_in *VAR_2 = (struct sockaddr_in *) &VAR_1->dstaddr;
 struct sockaddr_in6 *VAR_3 = (struct sockaddr_in6 *) &VAR_1->dstaddr;

 FUNC_1(VAR_0, ",addr=");

 switch (VAR_1->dstaddr.ss_family) {
 case 129:
  FUNC_0(VAR_0, "%pI4", &VAR_2->sin_addr.s_addr);
  break;
 case 128:
  FUNC_0(VAR_0, "%pI6", &VAR_3->sin6_addr.s6_addr);
  if (VAR_3->sin6_scope_id)
   FUNC_0(VAR_0, "%%%u", VAR_3->sin6_scope_id);
  break;
 default:
  FUNC_1(VAR_0, "(unknown)");
 }
 if (VAR_1->rdma)
  FUNC_1(VAR_0, ",rdma");
}
