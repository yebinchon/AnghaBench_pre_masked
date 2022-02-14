
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct page {int dummy; } ;
struct nfs4_label {int dummy; } ;
struct TYPE_6__ {unsigned int len; struct page** pages; } ;
struct TYPE_7__ {TYPE_2__ symlink; } ;
struct TYPE_8__ {struct nfs4_label* label; TYPE_3__ u; } ;
struct TYPE_5__ {int * rpc_proc; } ;
struct nfs4_createdata {TYPE_4__ arg; TYPE_1__ msg; } ;
struct inode {int dummy; } ;
struct iattr {int dummy; } ;
struct dentry {int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 size_t VAR_4 ;
 struct nfs4_createdata* FUNC_0 (struct inode*,int *,struct iattr*,int ) ;
 int FUNC_1 (struct inode*,struct dentry*,struct nfs4_createdata*) ;
 int FUNC_2 (struct nfs4_createdata*) ;
 int * VAR_5 ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_6, struct dentry *VAR_7,
  struct page *VAR_8, unsigned int VAR_9, struct iattr *VAR_10,
  struct nfs4_label *VAR_11)
{
 struct nfs4_createdata *VAR_12;
 int VAR_13 = -VAR_0;

 if (VAR_9 > VAR_3)
  goto out;

 VAR_13 = -VAR_1;
 VAR_12 = FUNC_0(VAR_6, &VAR_7->d_name, VAR_10, VAR_2);
 if (VAR_12 == ((void*)0))
  goto out;

 VAR_12->msg.rpc_proc = &VAR_5[VAR_4];
 VAR_12->arg.u.symlink.pages = &VAR_8;
 VAR_12->arg.u.symlink.len = VAR_9;
 VAR_12->arg.label = VAR_11;

 VAR_13 = FUNC_1(VAR_6, VAR_7, VAR_12);

 FUNC_2(VAR_12);
out:
 return VAR_13;
}
