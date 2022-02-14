
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct posix_acl {int dummy; } ;
struct TYPE_11__ {int fattr; int dir_attr; } ;
struct TYPE_9__ {int createmode; void** verifier; struct iattr* sattr; int len; int name; int fh; } ;
struct TYPE_10__ {TYPE_3__ create; } ;
struct TYPE_7__ {int * rpc_proc; } ;
struct nfs3_createdata {TYPE_5__ res; TYPE_4__ arg; TYPE_1__ msg; } ;
struct inode {int dummy; } ;
struct iattr {int ia_valid; int ia_mode; } ;
struct TYPE_8__ {int len; int name; } ;
struct dentry {TYPE_2__ d_name; } ;
struct TYPE_12__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;



 int FUNC_0 (struct inode*) ;
 int VAR_7 ;
 int FUNC_1 (struct dentry*) ;
 void* FUNC_2 (int ) ;
 TYPE_6__* VAR_8 ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct dentry*) ;
 int VAR_9 ;
 struct nfs3_createdata* FUNC_6 () ;
 struct dentry* FUNC_7 (struct inode*,struct dentry*,struct nfs3_createdata*) ;
 int FUNC_8 (struct nfs3_createdata*) ;
 int FUNC_9 (int ,struct posix_acl*,struct posix_acl*) ;
 int FUNC_10 (struct dentry*,int ,struct iattr*) ;
 int * VAR_10 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct inode*,int *,struct posix_acl**,struct posix_acl**) ;
 int FUNC_14 (struct posix_acl*) ;

__attribute__((used)) static int
FUNC_15(struct inode *VAR_11, struct dentry *VAR_12, struct iattr *VAR_13,
   int VAR_14)
{
 struct posix_acl *VAR_15, *VAR_16;
 struct nfs3_createdata *VAR_17;
 struct dentry *VAR_18;
 int VAR_19 = -VAR_4;

 FUNC_4("NFS call  create %pd\n", VAR_12);

 VAR_17 = FUNC_6();
 if (VAR_17 == ((void*)0))
  goto out;

 VAR_17->msg.rpc_proc = &VAR_10[VAR_6];
 VAR_17->arg.create.fh = FUNC_0(VAR_11);
 VAR_17->arg.create.name = VAR_12->d_name.name;
 VAR_17->arg.create.len = VAR_12->d_name.len;
 VAR_17->arg.create.sattr = VAR_13;

 VAR_17->arg.create.createmode = 128;
 if (VAR_14 & VAR_7) {
  VAR_17->arg.create.createmode = 130;
  VAR_17->arg.create.verifier[0] = FUNC_2(VAR_9);
  VAR_17->arg.create.verifier[1] = FUNC_2(VAR_8->pid);
 }

 VAR_19 = FUNC_13(VAR_11, &VAR_13->ia_mode, &VAR_15, &VAR_16);
 if (VAR_19)
  goto out;

 for (;;) {
  VAR_18 = FUNC_7(VAR_11, VAR_12, VAR_17);
  VAR_19 = FUNC_1(VAR_18);

  if (VAR_19 != -VAR_5)
   break;


  switch (VAR_17->arg.create.createmode) {
   case 130:
    VAR_17->arg.create.createmode = 129;
    break;

   case 129:
    VAR_17->arg.create.createmode = 128;
    break;

   case 128:
    goto out;
  }
  FUNC_11(VAR_17->res.dir_attr);
  FUNC_11(VAR_17->res.fattr);
 }

 if (VAR_19 != 0)
  goto out_release_acls;

 if (VAR_18)
  VAR_12 = VAR_18;



 if (VAR_17->arg.create.createmode == 130) {
  FUNC_4("NFS call  setattr (post-create)\n");

  if (!(VAR_13->ia_valid & VAR_1))
   VAR_13->ia_valid |= VAR_0;
  if (!(VAR_13->ia_valid & VAR_3))
   VAR_13->ia_valid |= VAR_2;




  VAR_19 = FUNC_10(VAR_12, VAR_17->res.fattr, VAR_13);
  FUNC_12(FUNC_3(VAR_12), VAR_17->res.fattr);
  FUNC_4("NFS reply setattr (post-create): %d\n", VAR_19);
  if (VAR_19 != 0)
   goto out_dput;
 }

 VAR_19 = FUNC_9(FUNC_3(VAR_12), VAR_16, VAR_15);

out_dput:
 FUNC_5(VAR_18);
out_release_acls:
 FUNC_14(VAR_16);
 FUNC_14(VAR_15);
out:
 FUNC_8(VAR_17);
 FUNC_4("NFS reply create: %d\n", VAR_19);
 return VAR_19;
}
