
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_lock_context {TYPE_1__* open_context; int lockowner; } ;
struct nfs4_state {int state_lock; int flags; } ;
struct nfs4_lock_state {int ls_stateid; int ls_flags; } ;
typedef int nfs4_stateid ;
typedef int fl_owner_t ;
struct TYPE_2__ {int flock_owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nfs4_lock_state* FUNC_0 (struct nfs4_state*,int ,int ) ;
 int FUNC_1 (struct nfs4_lock_state*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(nfs4_stateid *VAR_5,
  struct nfs4_state *VAR_6,
  const struct nfs_lock_context *VAR_7)
{
 struct nfs4_lock_state *VAR_8;
 fl_owner_t VAR_9, VAR_10;
 int VAR_11 = -VAR_1;

 if (VAR_7 == ((void*)0))
  goto out;

 if (FUNC_5(VAR_2, &VAR_6->flags) == 0)
  goto out;

 VAR_9 = VAR_7->lockowner;
 VAR_10 = VAR_7->open_context->flock_owner;

 FUNC_3(&VAR_6->state_lock);
 VAR_8 = FUNC_0(VAR_6, VAR_9, VAR_10);
 if (VAR_8 && FUNC_5(VAR_4, &VAR_8->ls_flags))
  VAR_11 = -VAR_0;
 else if (VAR_8 != ((void*)0) && FUNC_5(VAR_3, &VAR_8->ls_flags) != 0) {
  FUNC_2(VAR_5, &VAR_8->ls_stateid);
  VAR_11 = 0;
 }
 FUNC_4(&VAR_6->state_lock);
 FUNC_1(VAR_8);
out:
 return VAR_11;
}
