
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {TYPE_1__* super; } ;
struct nfs_fattr {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int s_root; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int ) ;
 struct nfs_fattr* FUNC_2 () ;
 int FUNC_3 (struct nfs_fattr*) ;
 int FUNC_4 (struct nfs_server*,int ,struct nfs_fattr*) ;

__attribute__((used)) static int FUNC_5(struct nfs_server *VAR_1)
{
 struct inode *VAR_2 = FUNC_1(VAR_1->super->s_root);
 struct nfs_fattr *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2();
 if (VAR_3 == ((void*)0))
  return -VAR_0;



 VAR_4 = FUNC_4(VAR_1, FUNC_0(VAR_2), VAR_3);

 FUNC_3(VAR_3);
 return VAR_4;
}
