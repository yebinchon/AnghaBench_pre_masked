
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ss_family; } ;
struct iscsi_np {TYPE_1__ np_sockaddr; } ;
struct iscsi_conn {int local_sockaddr; int login_sockaddr; int login_family; } ;
struct TYPE_4__ {int local_addr; int remote_addr; } ;
struct cxgbit_sock {TYPE_2__ com; } ;



__attribute__((used)) static void
FUNC_0(struct iscsi_np *VAR_0, struct iscsi_conn *VAR_1,
       struct cxgbit_sock *VAR_2)
{
 VAR_1->login_family = VAR_0->np_sockaddr.ss_family;
 VAR_1->login_sockaddr = VAR_2->com.remote_addr;
 VAR_1->local_sockaddr = VAR_2->com.local_addr;
}
