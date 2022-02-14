
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_delegation {int stateid; int cred; int flags; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int ,int *,int) ;
 int FUNC_1 (struct nfs_delegation*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct nfs_delegation *VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 if (!FUNC_2(VAR_0, &VAR_2->flags))
  VAR_4 = FUNC_0(VAR_1,
    VAR_2->cred,
    &VAR_2->stateid,
    VAR_3);
 FUNC_1(VAR_2);
 return VAR_4;
}
