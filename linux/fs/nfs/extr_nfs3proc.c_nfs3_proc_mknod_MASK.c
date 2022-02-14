
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct posix_acl {int dummy; } ;
struct TYPE_7__ {int type; int rdev; struct iattr* sattr; int len; int name; int fh; } ;
struct TYPE_8__ {TYPE_3__ mknod; } ;
struct TYPE_5__ {int * rpc_proc; } ;
struct nfs3_createdata {TYPE_4__ arg; TYPE_1__ msg; } ;
struct inode {int dummy; } ;
struct iattr {int ia_mode; } ;
struct TYPE_6__ {int len; int name; } ;
struct dentry {TYPE_2__ d_name; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*) ;



 int VAR_7 ;

 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct dentry*) ;
 struct nfs3_createdata* FUNC_7 () ;
 struct dentry* FUNC_8 (struct inode*,struct dentry*,struct nfs3_createdata*) ;
 int FUNC_9 (struct nfs3_createdata*) ;
 int FUNC_10 (int ,struct posix_acl*,struct posix_acl*) ;
 int * VAR_8 ;
 int FUNC_11 (struct inode*,int*,struct posix_acl**,struct posix_acl**) ;
 int FUNC_12 (struct posix_acl*) ;

__attribute__((used)) static int
FUNC_13(struct inode *VAR_9, struct dentry *VAR_10, struct iattr *VAR_11,
  dev_t VAR_12)
{
 struct posix_acl *VAR_13, *VAR_14;
 struct nfs3_createdata *VAR_15;
 struct dentry *VAR_16;
 int VAR_17 = -VAR_1;

 FUNC_5("NFS call  mknod %pd %u:%u\n", VAR_10,
   FUNC_0(VAR_12), FUNC_1(VAR_12));

 VAR_15 = FUNC_7();
 if (VAR_15 == ((void*)0))
  goto out;

 VAR_17 = FUNC_11(VAR_9, &VAR_11->ia_mode, &VAR_13, &VAR_14);
 if (VAR_17)
  goto out;

 VAR_15->msg.rpc_proc = &VAR_8[VAR_6];
 VAR_15->arg.mknod.fh = FUNC_2(VAR_9);
 VAR_15->arg.mknod.name = VAR_10->d_name.name;
 VAR_15->arg.mknod.len = VAR_10->d_name.len;
 VAR_15->arg.mknod.sattr = VAR_11;
 VAR_15->arg.mknod.rdev = VAR_12;

 switch (VAR_11->ia_mode & VAR_7) {
 case 131:
  VAR_15->arg.mknod.type = VAR_2;
  break;
 case 130:
  VAR_15->arg.mknod.type = VAR_3;
  break;
 case 129:
  VAR_15->arg.mknod.type = VAR_4;
  break;
 case 128:
  VAR_15->arg.mknod.type = VAR_5;
  break;
 default:
  VAR_17 = -VAR_0;
  goto out;
 }

 VAR_16 = FUNC_8(VAR_9, VAR_10, VAR_15);
 VAR_17 = FUNC_3(VAR_16);
 if (VAR_17 != 0)
  goto out_release_acls;

 if (VAR_16)
  VAR_10 = VAR_16;

 VAR_17 = FUNC_10(FUNC_4(VAR_10), VAR_14, VAR_13);

 FUNC_6(VAR_16);
out_release_acls:
 FUNC_12(VAR_14);
 FUNC_12(VAR_13);
out:
 FUNC_9(VAR_15);
 FUNC_5("NFS reply mknod: %d\n", VAR_17);
 return VAR_17;
}
