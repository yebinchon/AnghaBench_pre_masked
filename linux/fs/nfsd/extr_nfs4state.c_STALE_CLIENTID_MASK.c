
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nfsd_net {scalar_t__ boot_time; } ;
struct TYPE_3__ {scalar_t__ cl_boot; int cl_id; } ;
typedef TYPE_1__ clientid_t ;


 int FUNC_0 (char*,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(clientid_t *VAR_0, struct nfsd_net *VAR_1)
{





 if (VAR_0->cl_boot == (u32)VAR_1->boot_time)
  return 0;
 FUNC_0("NFSD stale clientid (%08x/%08x) boot_time %08lx\n",
  VAR_0->cl_boot, VAR_0->cl_id, VAR_1->boot_time);
 return 1;
}
