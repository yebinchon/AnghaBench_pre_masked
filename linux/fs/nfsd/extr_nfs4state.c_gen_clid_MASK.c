
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd_net {int clientid_counter; int boot_time; } ;
struct TYPE_2__ {scalar_t__ cl_id; int cl_boot; } ;
struct nfs4_client {TYPE_1__ cl_clientid; } ;


 int FUNC_0 (struct nfs4_client*,struct nfsd_net*) ;

__attribute__((used)) static void FUNC_1(struct nfs4_client *VAR_0, struct nfsd_net *VAR_1)
{
 VAR_0->cl_clientid.cl_boot = VAR_1->boot_time;
 VAR_0->cl_clientid.cl_id = VAR_1->clientid_counter++;
 FUNC_0(VAR_0, VAR_1);
}
