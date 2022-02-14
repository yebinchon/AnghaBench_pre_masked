
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int delegation; } ;
struct nfs_delegation {int cred; int stateid; } ;
struct inode {int dummy; } ;
struct cred {int dummy; } ;
typedef int nfs4_stateid ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs_inode* FUNC_0 (struct inode*) ;
 struct cred* FUNC_1 (int ) ;
 int FUNC_2 (struct nfs_delegation*,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct nfs_delegation*) ;
 struct nfs_delegation* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

bool FUNC_8(struct inode *VAR_2, fmode_t VAR_3,
  nfs4_stateid *VAR_4, const struct cred **VAR_5)
{
 struct nfs_inode *VAR_6 = FUNC_0(VAR_2);
 struct nfs_delegation *VAR_7;
 bool VAR_8;

 VAR_3 &= VAR_0|VAR_1;
 FUNC_6();
 VAR_7 = FUNC_5(VAR_6->delegation);
 VAR_8 = FUNC_2(VAR_7, VAR_3);
 if (VAR_8) {
  FUNC_3(VAR_4, &VAR_7->stateid);
  FUNC_4(VAR_7);
  if (VAR_5)
   *VAR_5 = FUNC_1(VAR_7->cred);
 }
 FUNC_7();
 return VAR_8;
}
