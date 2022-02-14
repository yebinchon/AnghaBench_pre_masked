
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_client_initdata {int net; int nconnect; int proto; scalar_t__ hostname; int addrlen; int addr; TYPE_1__* nfs_mod; } ;
struct nfs_client {char* cl_principal; TYPE_1__* cl_nfs_mod; int cl_net; int cl_nconnect; int cl_proto; struct nfs_client* cl_rpcclient; int cl_superblocks; int cl_hostname; int cl_addrlen; int cl_addr; int cl_cons_state; int cl_count; int rpc_ops; } ;
struct TYPE_2__ {int rpc_ops; int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs_client* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nfs_client*) ;
 int FUNC_4 (scalar_t__,int ) ;
 struct nfs_client* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (struct nfs_client*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int ) ;

struct nfs_client *FUNC_11(const struct nfs_client_initdata *VAR_4)
{
 struct nfs_client *VAR_5;
 int VAR_6 = -VAR_1;

 if ((VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_2)) == ((void*)0))
  goto error_0;

 VAR_5->cl_nfs_mod = VAR_4->nfs_mod;
 if (!FUNC_10(VAR_5->cl_nfs_mod->owner))
  goto error_dealloc;

 VAR_5->rpc_ops = VAR_5->cl_nfs_mod->rpc_ops;

 FUNC_9(&VAR_5->cl_count, 1);
 VAR_5->cl_cons_state = VAR_3;

 FUNC_6(&VAR_5->cl_addr, VAR_4->addr, VAR_4->addrlen);
 VAR_5->cl_addrlen = VAR_4->addrlen;

 if (VAR_4->hostname) {
  VAR_6 = -VAR_1;
  VAR_5->cl_hostname = FUNC_4(VAR_4->hostname, VAR_2);
  if (!VAR_5->cl_hostname)
   goto error_cleanup;
 }

 FUNC_1(&VAR_5->cl_superblocks);
 VAR_5->cl_rpcclient = FUNC_0(-VAR_0);

 VAR_5->cl_proto = VAR_4->proto;
 VAR_5->cl_nconnect = VAR_4->nconnect;
 VAR_5->cl_net = FUNC_2(VAR_4->net);

 VAR_5->cl_principal = "*";
 FUNC_7(VAR_5);

 return VAR_5;

error_cleanup:
 FUNC_8(VAR_5->cl_nfs_mod);
error_dealloc:
 FUNC_3(VAR_5);
error_0:
 return FUNC_0(VAR_6);
}
