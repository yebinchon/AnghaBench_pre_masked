
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_message {TYPE_1__* rpc_resp; int * rpc_argp; int * rpc_proc; } ;
struct TYPE_2__ {int fattr; int fh; } ;
struct nfs_createdata {TYPE_1__ res; int arg; } ;
struct inode {int dummy; } ;
struct iattr {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (char*,int) ;
 struct nfs_createdata* FUNC_2 (struct inode*,struct dentry*,struct iattr*) ;
 int FUNC_3 (struct nfs_createdata*) ;
 int FUNC_4 (struct dentry*,int ,int ,int *) ;
 int FUNC_5 (struct inode*) ;
 int * VAR_2 ;
 int FUNC_6 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int
FUNC_7(struct inode *VAR_3, struct dentry *VAR_4, struct iattr *VAR_5)
{
 struct nfs_createdata *VAR_6;
 struct rpc_message VAR_7 = {
  .rpc_proc = &VAR_2[VAR_1],
 };
 int VAR_8 = -VAR_0;

 FUNC_1("NFS call  mkdir %pd\n", VAR_4);
 VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (VAR_6 == ((void*)0))
  goto out;
 VAR_7.rpc_argp = &VAR_6->arg;
 VAR_7.rpc_resp = &VAR_6->res;

 VAR_8 = FUNC_6(FUNC_0(VAR_3), &VAR_7, 0);
 FUNC_5(VAR_3);
 if (VAR_8 == 0)
  VAR_8 = FUNC_4(VAR_4, VAR_6->res.fh, VAR_6->res.fattr, ((void*)0));
 FUNC_3(VAR_6);
out:
 FUNC_1("NFS reply mkdir: %d\n", VAR_8);
 return VAR_8;
}
