
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int nrequests; int delegation; } ;
struct nfs_delegation {int type; scalar_t__ pagemod_limit; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct nfs_inode* FUNC_0 (struct inode const*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct nfs_delegation* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

bool FUNC_5(const struct inode *VAR_1)
{
 struct nfs_inode *VAR_2 = FUNC_0(VAR_1);
 struct nfs_delegation *VAR_3;
 bool VAR_4 = 1;

 FUNC_3();
 VAR_3 = FUNC_2(VAR_2->delegation);
 if (VAR_3 == ((void*)0) || !(VAR_3->type & VAR_0))
  goto out;
 if (FUNC_1(&VAR_2->nrequests) < VAR_3->pagemod_limit)
  VAR_4 = 0;
out:
 FUNC_4();
 return VAR_4;
}
