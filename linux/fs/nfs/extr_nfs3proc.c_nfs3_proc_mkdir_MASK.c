
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct posix_acl {int dummy; } ;
struct TYPE_7__ {struct iattr* sattr; int len; int name; int fh; } ;
struct TYPE_8__ {TYPE_3__ mkdir; } ;
struct TYPE_5__ {int * rpc_proc; } ;
struct nfs3_createdata {TYPE_4__ arg; TYPE_1__ msg; } ;
struct inode {int dummy; } ;
struct iattr {int ia_mode; } ;
struct TYPE_6__ {int len; int name; } ;
struct dentry {TYPE_2__ d_name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct dentry*) ;
 struct nfs3_createdata* FUNC_5 () ;
 struct dentry* FUNC_6 (struct inode*,struct dentry*,struct nfs3_createdata*) ;
 int FUNC_7 (struct nfs3_createdata*) ;
 int FUNC_8 (int ,struct posix_acl*,struct posix_acl*) ;
 int * VAR_2 ;
 int FUNC_9 (struct inode*,int *,struct posix_acl**,struct posix_acl**) ;
 int FUNC_10 (struct posix_acl*) ;

__attribute__((used)) static int
FUNC_11(struct inode *VAR_3, struct dentry *VAR_4, struct iattr *VAR_5)
{
 struct posix_acl *VAR_6, *VAR_7;
 struct nfs3_createdata *VAR_8;
 struct dentry *VAR_9;
 int VAR_10 = -VAR_0;

 FUNC_3("NFS call  mkdir %pd\n", VAR_4);

 VAR_8 = FUNC_5();
 if (VAR_8 == ((void*)0))
  goto out;

 VAR_10 = FUNC_9(VAR_3, &VAR_5->ia_mode, &VAR_6, &VAR_7);
 if (VAR_10)
  goto out;

 VAR_8->msg.rpc_proc = &VAR_2[VAR_1];
 VAR_8->arg.mkdir.fh = FUNC_0(VAR_3);
 VAR_8->arg.mkdir.name = VAR_4->d_name.name;
 VAR_8->arg.mkdir.len = VAR_4->d_name.len;
 VAR_8->arg.mkdir.sattr = VAR_5;

 VAR_9 = FUNC_6(VAR_3, VAR_4, VAR_8);
 VAR_10 = FUNC_1(VAR_9);

 if (VAR_10 != 0)
  goto out_release_acls;

 if (VAR_9)
  VAR_4 = VAR_9;

 VAR_10 = FUNC_8(FUNC_2(VAR_4), VAR_7, VAR_6);

 FUNC_4(VAR_9);
out_release_acls:
 FUNC_10(VAR_7);
 FUNC_10(VAR_6);
out:
 FUNC_7(VAR_8);
 FUNC_3("NFS reply mkdir: %d\n", VAR_10);
 return VAR_10;
}
