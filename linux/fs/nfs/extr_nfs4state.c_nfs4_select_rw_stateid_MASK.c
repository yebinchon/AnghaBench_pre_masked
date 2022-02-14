
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct nfs_lock_context {int dummy; } ;
struct nfs4_state {int inode; } ;
struct cred {int dummy; } ;
struct TYPE_6__ {scalar_t__ seqid; } ;
typedef TYPE_1__ nfs4_stateid ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_1__*,struct cred const**) ;
 int FUNC_1 (TYPE_1__*,struct nfs4_state*,struct nfs_lock_context const*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,struct nfs4_state*) ;
 int FUNC_3 (struct nfs4_state*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

int FUNC_5(struct nfs4_state *VAR_4,
  fmode_t VAR_5, const struct nfs_lock_context *VAR_6,
  nfs4_stateid *VAR_7, const struct cred **VAR_8)
{
 int VAR_9;

 if (!FUNC_3(VAR_4))
  return -VAR_1;
 if (VAR_8 != ((void*)0))
  *VAR_8 = ((void*)0);
 VAR_9 = FUNC_1(VAR_7, VAR_4, VAR_6);
 if (VAR_9 == -VAR_1)

  goto out;

 if (FUNC_0(VAR_4->inode, VAR_5, VAR_7, VAR_8)) {
  VAR_9 = 0;
  goto out;
 }
 if (VAR_9 != -VAR_2)




  goto out;
 VAR_9 = FUNC_2(VAR_7, VAR_4) ? 0 : -VAR_0;
out:
 if (FUNC_4(VAR_4->inode, VAR_3))
  VAR_7->seqid = 0;
 return VAR_9;
}
