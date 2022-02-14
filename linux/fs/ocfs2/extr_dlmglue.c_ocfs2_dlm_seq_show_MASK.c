
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct seq_file {scalar_t__ private; } ;
struct TYPE_4__ {scalar_t__ ls_last; } ;
struct TYPE_3__ {scalar_t__ ls_last; } ;
struct ocfs2_lock_res {scalar_t__ l_type; int l_lksb; int l_blocking; int l_requested; int l_ex_holders; int l_ro_holders; int l_unlock_action; int l_action; int l_flags; int l_level; int l_name; TYPE_2__ l_lock_exmode; TYPE_1__ l_lock_prmode; int l_lock_wait; } ;
struct ocfs2_dlm_seq_priv {struct ocfs2_dlm_debug* p_dlm_debug; } ;
struct ocfs2_dlm_debug {scalar_t__ d_filter_secs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ocfs2_lock_res*) ;
 int FUNC_4 (struct ocfs2_lock_res*) ;
 int FUNC_5 (struct ocfs2_lock_res*) ;
 int FUNC_6 (struct ocfs2_lock_res*) ;
 int FUNC_7 (struct ocfs2_lock_res*) ;
 int FUNC_8 (struct ocfs2_lock_res*) ;
 int FUNC_9 (struct ocfs2_lock_res*) ;
 int FUNC_10 (struct ocfs2_lock_res*) ;
 int FUNC_11 (struct ocfs2_lock_res*) ;
 int FUNC_12 (struct ocfs2_lock_res*) ;
 int FUNC_13 (struct ocfs2_lock_res*) ;
 int FUNC_14 (struct ocfs2_lock_res*) ;
 char* FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (struct ocfs2_lock_res*) ;
 int FUNC_17 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_18(struct seq_file *VAR_6, void *VAR_7)
{
 int VAR_8;
 char *VAR_9;
 struct ocfs2_lock_res *VAR_10 = VAR_7;






 if (!VAR_10)
  return -VAR_1;
 FUNC_17(VAR_6, "0x%x\t", VAR_3);

 if (VAR_10->l_type == VAR_5)
  FUNC_17(VAR_6, "%.*s%08x\t", VAR_2 - 1,
      VAR_10->l_name,
      (unsigned int)FUNC_16(VAR_10));
 else
  FUNC_17(VAR_6, "%.*s\t", VAR_4, VAR_10->l_name);

 FUNC_17(VAR_6, "%d\t"
     "0x%lx\t"
     "0x%x\t"
     "0x%x\t"
     "%u\t"
     "%u\t"
     "%d\t"
     "%d\t",
     VAR_10->l_level,
     VAR_10->l_flags,
     VAR_10->l_action,
     VAR_10->l_unlock_action,
     VAR_10->l_ro_holders,
     VAR_10->l_ex_holders,
     VAR_10->l_requested,
     VAR_10->l_blocking);


 VAR_9 = FUNC_15(&VAR_10->l_lksb);
 for(VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  FUNC_17(VAR_6, "0x%x\t", VAR_9[VAR_8]);
 FUNC_17(VAR_6, "%u\t"
     "%u\t"
     "%u\t"
     "%u\t"
     "%llu\t"
     "%llu\t"
     "%u\t"
     "%u\t"
     "%u\t"
     "%llu\t"
     "%llu\t"
     "%llu\t",
     (0),
     (0),
     (0),
     (0),
     (0ULL),
     (0ULL),
     (0),
     (0),
     (0),
     (0ULL),
     (0ULL),
     (0ULL));


 FUNC_17(VAR_6, "\n");
 return 0;
}
