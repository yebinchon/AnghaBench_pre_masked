
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct cred const* rpc_cred; struct nfs_client* rpc_argp; int * rpc_proc; } ;
struct nfs_client {int cl_rpcclient; } ;
struct cred {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfs_client*,unsigned long) ;
 unsigned long VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int FUNC_2(struct nfs_client *VAR_4, const struct cred *VAR_5)
{
 struct rpc_message VAR_6 = {
  .rpc_proc = &VAR_3[VAR_0],
  .rpc_argp = VAR_4,
  .rpc_cred = VAR_5,
 };
 unsigned long VAR_7 = VAR_2;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4->cl_rpcclient, &VAR_6, VAR_1);
 if (VAR_8 < 0)
  return VAR_8;
 FUNC_0(VAR_4, VAR_7);
 return 0;
}
