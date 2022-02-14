
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cl_id; int cl_boot; } ;
struct nfs4_client {TYPE_1__ cl_clientid; } ;



__attribute__((used)) static void FUNC_0(struct nfs4_client *VAR_0, struct nfs4_client *VAR_1)
{
 VAR_0->cl_clientid.cl_boot = VAR_1->cl_clientid.cl_boot;
 VAR_0->cl_clientid.cl_id = VAR_1->cl_clientid.cl_id;
}
