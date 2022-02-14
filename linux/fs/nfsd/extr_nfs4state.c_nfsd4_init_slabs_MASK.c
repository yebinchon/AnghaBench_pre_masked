
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_openowner {int dummy; } ;
struct nfs4_ol_stateid {int dummy; } ;
struct nfs4_lockowner {int dummy; } ;
struct nfs4_file {int dummy; } ;
struct nfs4_delegation {int dummy; } ;
struct nfs4_clnt_odstate {int dummy; } ;
struct nfs4_client {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (char*) ;
 int * VAR_3 ;
 void* FUNC_1 (char*,int,int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;

int
FUNC_3(void)
{
 VAR_1 = FUNC_1("nfsd4_clients",
   sizeof(struct nfs4_client), 0, 0, ((void*)0));
 if (VAR_1 == ((void*)0))
  goto out;
 VAR_6 = FUNC_1("nfsd4_openowners",
   sizeof(struct nfs4_openowner), 0, 0, ((void*)0));
 if (VAR_6 == ((void*)0))
  goto out_free_client_slab;
 VAR_4 = FUNC_1("nfsd4_lockowners",
   sizeof(struct nfs4_lockowner), 0, 0, ((void*)0));
 if (VAR_4 == ((void*)0))
  goto out_free_openowner_slab;
 VAR_3 = FUNC_1("nfsd4_files",
   sizeof(struct nfs4_file), 0, 0, ((void*)0));
 if (VAR_3 == ((void*)0))
  goto out_free_lockowner_slab;
 VAR_7 = FUNC_1("nfsd4_stateids",
   sizeof(struct nfs4_ol_stateid), 0, 0, ((void*)0));
 if (VAR_7 == ((void*)0))
  goto out_free_file_slab;
 VAR_2 = FUNC_1("nfsd4_delegations",
   sizeof(struct nfs4_delegation), 0, 0, ((void*)0));
 if (VAR_2 == ((void*)0))
  goto out_free_stateid_slab;
 VAR_5 = FUNC_1("nfsd4_odstate",
   sizeof(struct nfs4_clnt_odstate), 0, 0, ((void*)0));
 if (VAR_5 == ((void*)0))
  goto out_free_deleg_slab;
 return 0;

out_free_deleg_slab:
 FUNC_2(VAR_2);
out_free_stateid_slab:
 FUNC_2(VAR_7);
out_free_file_slab:
 FUNC_2(VAR_3);
out_free_lockowner_slab:
 FUNC_2(VAR_4);
out_free_openowner_slab:
 FUNC_2(VAR_6);
out_free_client_slab:
 FUNC_2(VAR_1);
out:
 FUNC_0("nfsd4: out of memory while initializing nfsv4\n");
 return -VAR_0;
}
