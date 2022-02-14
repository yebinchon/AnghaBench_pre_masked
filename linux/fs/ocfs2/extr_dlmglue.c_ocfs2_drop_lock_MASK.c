
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_super {int cconn; } ;
struct ocfs2_lock_res {int l_flags; int l_name; scalar_t__ l_action; scalar_t__ l_level; int l_lksb; int l_lock; int l_unlock_action; TYPE_1__* l_ops; } ;
struct TYPE_2__ {int flags; int (* set_lvb ) (struct ocfs2_lock_res*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct ocfs2_lock_res*,int) ;
 int FUNC_3 (struct ocfs2_lock_res*,int) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (int,char*,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (char*,int,struct ocfs2_lock_res*) ;
 int FUNC_9 (struct ocfs2_lock_res*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (struct ocfs2_lock_res*) ;

__attribute__((used)) static int FUNC_13(struct ocfs2_super *VAR_12,
      struct ocfs2_lock_res *VAR_13)
{
 int VAR_14;
 unsigned long VAR_15;
 u32 VAR_16 = 0;


 if (!(VAR_13->l_flags & VAR_9))
  goto out;

 if (VAR_13->l_ops->flags & VAR_2)
  VAR_16 |= VAR_0;

 FUNC_10(&VAR_13->l_lock, VAR_15);

 FUNC_5(!(VAR_13->l_flags & VAR_8),
   "lockres %s, flags 0x%lx\n",
   VAR_13->l_name, VAR_13->l_flags);

 while (VAR_13->l_flags & VAR_7) {
  FUNC_4(0, "waiting on busy lock \"%s\": flags = %lx, action = "
       "%u, unlock_action = %u\n",
       VAR_13->l_name, VAR_13->l_flags, VAR_13->l_action,
       VAR_13->l_unlock_action);

  FUNC_11(&VAR_13->l_lock, VAR_15);




  FUNC_9(VAR_13);

  FUNC_10(&VAR_13->l_lock, VAR_15);
 }

 if (VAR_13->l_ops->flags & VAR_2) {
  if (VAR_13->l_flags & VAR_5 &&
      VAR_13->l_level == VAR_1 &&
      !(VAR_13->l_flags & VAR_10))
   VAR_13->l_ops->set_lvb(VAR_13);
 }

 if (VAR_13->l_flags & VAR_7)
  FUNC_4(VAR_3, "destroying busy lock: \"%s\"\n",
       VAR_13->l_name);
 if (VAR_13->l_flags & VAR_6)
  FUNC_4(0, "destroying blocked lock: \"%s\"\n", VAR_13->l_name);

 if (!(VAR_13->l_flags & VAR_5)) {
  FUNC_11(&VAR_13->l_lock, VAR_15);
  goto out;
 }

 FUNC_2(VAR_13, VAR_5);



 FUNC_1(VAR_13->l_action != VAR_4);


 FUNC_3(VAR_13, VAR_7);
 VAR_13->l_unlock_action = VAR_11;
 FUNC_11(&VAR_13->l_lock, VAR_15);

 FUNC_4(0, "lock %s\n", VAR_13->l_name);

 VAR_14 = FUNC_7(VAR_12->cconn, &VAR_13->l_lksb, VAR_16);
 if (VAR_14) {
  FUNC_8("ocfs2_dlm_unlock", VAR_14, VAR_13);
  FUNC_4(VAR_3, "lockres flags: %lu\n", VAR_13->l_flags);
  FUNC_6(&VAR_13->l_lksb);
  FUNC_0();
 }
 FUNC_4(0, "lock %s, successful return from ocfs2_dlm_unlock\n",
      VAR_13->l_name);

 FUNC_9(VAR_13);
out:
 return 0;
}
