
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_delegation {unsigned long pagemod_limit; int lock; int flags; struct cred* cred; int type; int stateid; int * inode; } ;
struct inode {int dummy; } ;
struct cred {int dummy; } ;
typedef int nfs4_stateid ;
typedef int fmode_t ;
struct TYPE_2__ {int delegation; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,int *) ;
 struct cred* FUNC_2 (struct cred const*) ;
 int FUNC_3 (int *,int const*) ;
 int FUNC_4 (struct inode*,struct cred const*,int ,int const*,unsigned long) ;
 int FUNC_5 (struct cred const*) ;
 struct nfs_delegation* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct inode*,int ) ;

void FUNC_12(struct inode *VAR_1, const struct cred *VAR_2,
      fmode_t VAR_3,
      const nfs4_stateid *VAR_4,
      unsigned long VAR_5)
{
 struct nfs_delegation *VAR_6;
 const struct cred *VAR_7 = ((void*)0);

 FUNC_7();
 VAR_6 = FUNC_6(FUNC_0(VAR_1)->delegation);
 if (VAR_6 != ((void*)0)) {
  FUNC_9(&VAR_6->lock);
  if (VAR_6->inode != ((void*)0)) {
   FUNC_3(&VAR_6->stateid, VAR_4);
   VAR_6->type = VAR_3;
   VAR_6->pagemod_limit = VAR_5;
   VAR_7 = VAR_6->cred;
   VAR_6->cred = FUNC_2(VAR_2);
   FUNC_1(VAR_0,
      &VAR_6->flags);
   FUNC_10(&VAR_6->lock);
   FUNC_8();
   FUNC_5(VAR_7);
   FUNC_11(VAR_1, VAR_3);
   return;
  }

  FUNC_10(&VAR_6->lock);
 }
 FUNC_8();
 FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
