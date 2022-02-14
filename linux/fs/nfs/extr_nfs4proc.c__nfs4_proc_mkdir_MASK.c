
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs4_label {int dummy; } ;
struct TYPE_2__ {struct nfs4_label* label; } ;
struct nfs4_createdata {TYPE_1__ arg; } ;
struct inode {int dummy; } ;
struct iattr {int dummy; } ;
struct dentry {int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs4_createdata* FUNC_0 (struct inode*,int *,struct iattr*,int ) ;
 int FUNC_1 (struct inode*,struct dentry*,struct nfs4_createdata*) ;
 int FUNC_2 (struct nfs4_createdata*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct dentry *VAR_3,
  struct iattr *VAR_4, struct nfs4_label *VAR_5)
{
 struct nfs4_createdata *VAR_6;
 int VAR_7 = -VAR_0;

 VAR_6 = FUNC_0(VAR_2, &VAR_3->d_name, VAR_4, VAR_1);
 if (VAR_6 == ((void*)0))
  goto out;

 VAR_6->arg.label = VAR_5;
 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_6);

 FUNC_2(VAR_6);
out:
 return VAR_7;
}
