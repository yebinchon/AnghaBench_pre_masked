
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_openres {int rflags; } ;
struct nfs4_opendata {int f_attr; int rpc_done; struct nfs_openres o_res; int dir; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct nfs4_opendata*) ;
 struct inode* FUNC_2 (int ) ;
 int FUNC_3 (struct nfs4_opendata*,int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct nfs4_opendata *VAR_1)
{
 struct inode *VAR_2 = FUNC_2(VAR_1->dir);
 struct nfs_openres *VAR_3 = &VAR_1->o_res;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_1, ((void*)0));
 if (VAR_4 != 0 || !VAR_1->rpc_done)
  return VAR_4;

 FUNC_4(FUNC_0(VAR_2), &VAR_1->f_attr);

 if (VAR_3->rflags & VAR_0)
  VAR_4 = FUNC_1(VAR_1);

 return VAR_4;
}
