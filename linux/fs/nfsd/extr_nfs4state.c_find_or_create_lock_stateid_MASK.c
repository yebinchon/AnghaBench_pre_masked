
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs4_stid {int dummy; } ;
struct TYPE_2__ {struct nfs4_client* so_client; } ;
struct nfs4_openowner {TYPE_1__ oo_owner; } ;
struct nfs4_ol_stateid {struct nfs4_stid st_stid; int st_stateowner; } ;
struct nfs4_lockowner {int dummy; } ;
struct nfs4_file {int dummy; } ;
struct nfs4_client {int cl_lock; } ;
struct inode {int dummy; } ;


 struct nfs4_ol_stateid* FUNC_0 (struct nfs4_lockowner*,struct nfs4_file*) ;
 struct nfs4_ol_stateid* FUNC_1 (struct nfs4_ol_stateid*,struct nfs4_lockowner*,struct nfs4_file*,struct inode*,struct nfs4_ol_stateid*) ;
 struct nfs4_stid* FUNC_2 (struct nfs4_client*,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct nfs4_stid*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (struct nfs4_ol_stateid*) ;
 struct nfs4_ol_stateid* FUNC_5 (struct nfs4_stid*) ;
 struct nfs4_openowner* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;

__attribute__((used)) static struct nfs4_ol_stateid *
FUNC_9(struct nfs4_lockowner *VAR_3, struct nfs4_file *VAR_4,
       struct inode *VAR_5, struct nfs4_ol_stateid *VAR_6,
       bool *VAR_7)
{
 struct nfs4_stid *VAR_8 = ((void*)0);
 struct nfs4_ol_stateid *VAR_9;
 struct nfs4_openowner *VAR_10 = FUNC_6(VAR_6->st_stateowner);
 struct nfs4_client *VAR_11 = VAR_10->oo_owner.so_client;

 *VAR_7 = 0;
 FUNC_7(&VAR_11->cl_lock);
 VAR_9 = FUNC_0(VAR_3, VAR_4);
 FUNC_8(&VAR_11->cl_lock);
 if (VAR_9 != ((void*)0)) {
  if (FUNC_4(VAR_9) == VAR_1)
   goto out;
  FUNC_3(&VAR_9->st_stid);
 }
 VAR_8 = FUNC_2(VAR_11, VAR_2, VAR_0);
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 VAR_9 = FUNC_1(FUNC_5(VAR_8), VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_9 == FUNC_5(VAR_8))
  *VAR_7 = 1;
 else
  FUNC_3(VAR_8);
out:
 return VAR_9;
}
