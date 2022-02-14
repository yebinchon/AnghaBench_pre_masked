
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {int * rpc_proc; struct mountres* rpc_resp; int rpc_argp; } ;
struct rpc_create_args {char* servername; scalar_t__ version; int flags; int cred; int authflavor; int * program; int addrsize; int address; int protocol; int net; } ;
struct rpc_clnt {int * cl_procinfo; } ;
struct nfs_mount_request {int* auth_flav_len; char* hostname; scalar_t__ version; int * auth_flavs; scalar_t__ noresvport; int dirpath; int salen; int sap; int protocol; int net; int fh; } ;
struct mountres {int* auth_count; int errno; int * auth_flavors; int fh; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rpc_clnt*) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct rpc_clnt*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 int VAR_10 ;
 int FUNC_4 (struct rpc_clnt*,struct rpc_message*,int) ;
 struct rpc_clnt* FUNC_5 (struct rpc_create_args*) ;
 int FUNC_6 (struct rpc_clnt*) ;
 scalar_t__ FUNC_7 (int ) ;

int FUNC_8(struct nfs_mount_request *VAR_11)
{
 struct mountres VAR_12 = {
  .fh = VAR_11->fh,
  .auth_count = VAR_11->auth_flav_len,
  .auth_flavors = VAR_11->auth_flavs,
 };
 struct rpc_message VAR_13 = {
  .rpc_argp = VAR_11->dirpath,
  .rpc_resp = &VAR_12,
 };
 struct rpc_create_args VAR_14 = {
  .net = VAR_11->net,
  .protocol = VAR_11->protocol,
  .address = VAR_11->sap,
  .addrsize = VAR_11->salen,
  .servername = VAR_11->hostname,
  .program = &VAR_10,
  .version = VAR_11->version,
  .authflavor = VAR_6,
  .cred = FUNC_2(),
 };
 struct rpc_clnt *VAR_15;
 int VAR_16;

 FUNC_3("NFS: sending MNT request for %s:%s\n",
  (VAR_11->hostname ? VAR_11->hostname : "server"),
   VAR_11->dirpath);

 if (FUNC_7(VAR_11->dirpath) > VAR_1)
  return -VAR_0;

 if (VAR_11->noresvport)
  VAR_14.flags |= VAR_7;

 VAR_15 = FUNC_5(&VAR_14);
 if (FUNC_0(VAR_15))
  goto out_clnt_err;

 if (VAR_11->version == VAR_4)
  VAR_13.rpc_proc = &VAR_15->cl_procinfo[VAR_2];
 else
  VAR_13.rpc_proc = &VAR_15->cl_procinfo[VAR_3];

 VAR_16 = FUNC_4(VAR_15, &VAR_13, VAR_8|VAR_9);
 FUNC_6(VAR_15);

 if (VAR_16 < 0)
  goto out_call_err;
 if (VAR_12.errno != 0)
  goto out_mnt_err;

 FUNC_3("NFS: MNT request succeeded\n");
 VAR_16 = 0;





 if (VAR_11->version != VAR_4 || *VAR_11->auth_flav_len == 0) {
  FUNC_3("NFS: Faking up auth_flavs list\n");
  VAR_11->auth_flavs[0] = VAR_5;
  *VAR_11->auth_flav_len = 1;
 }
out:
 return VAR_16;

out_clnt_err:
 VAR_16 = FUNC_1(VAR_15);
 FUNC_3("NFS: failed to create MNT RPC client, status=%d\n", VAR_16);
 goto out;

out_call_err:
 FUNC_3("NFS: MNT request failed, status=%d\n", VAR_16);
 goto out;

out_mnt_err:
 FUNC_3("NFS: MNT server returned result %d\n", VAR_12.errno);
 VAR_16 = VAR_12.errno;
 goto out;
}
