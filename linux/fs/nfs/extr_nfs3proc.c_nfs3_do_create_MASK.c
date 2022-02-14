
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fattr; int fh; int dir_attr; } ;
struct nfs3_createdata {TYPE_1__ res; int msg; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 struct dentry* FUNC_2 (struct dentry*,int ,int ,int *) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (int ,int *,int ) ;

__attribute__((used)) static struct dentry *
FUNC_5(struct inode *VAR_0, struct dentry *VAR_1, struct nfs3_createdata *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_4(FUNC_1(VAR_0), &VAR_2->msg, 0);
 FUNC_3(VAR_0, VAR_2->res.dir_attr);
 if (VAR_3 != 0)
  return FUNC_0(VAR_3);

 return FUNC_2(VAR_1, VAR_2->res.fh, VAR_2->res.fattr, ((void*)0));
}
