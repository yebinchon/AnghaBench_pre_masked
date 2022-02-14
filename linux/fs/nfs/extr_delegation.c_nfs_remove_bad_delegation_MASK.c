
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_delegation {int dummy; } ;
struct inode {int dummy; } ;
typedef int nfs4_stateid ;


 int FUNC_0 (struct nfs_delegation*) ;
 struct nfs_delegation* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int const*) ;

void FUNC_3(struct inode *VAR_0,
  const nfs4_stateid *VAR_1)
{
 struct nfs_delegation *VAR_2;

 if (!FUNC_2(VAR_0, VAR_1))
  return;
 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  FUNC_0(VAR_2);
}
