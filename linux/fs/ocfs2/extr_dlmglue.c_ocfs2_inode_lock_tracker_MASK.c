
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pid {int dummy; } ;
struct ocfs2_lock_res {int dummy; } ;
struct ocfs2_lock_holder {int oh_ex; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {struct ocfs2_lock_res ip_inode_lockres; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ocfs2_lock_res*,struct ocfs2_lock_holder*) ;
 int FUNC_5 (struct inode*,struct buffer_head**,int,int ) ;
 struct ocfs2_lock_holder* FUNC_6 (struct ocfs2_lock_res*,struct pid*) ;
 struct pid* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct inode *VAR_5,
        struct buffer_head **VAR_6,
        int VAR_7,
        struct ocfs2_lock_holder *VAR_8)
{
 int VAR_9 = 0;
 struct ocfs2_lock_res *VAR_10;
 struct ocfs2_lock_holder *VAR_11;
 struct pid *VAR_12 = FUNC_7(VAR_4);


 VAR_10 = &FUNC_0(VAR_5)->ip_inode_lockres;
 VAR_11 = FUNC_6(VAR_10, VAR_12);

 if (!VAR_11) {




  VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_7, 0);
  if (VAR_9 < 0) {
   if (VAR_9 != -VAR_1)
    FUNC_3(VAR_9);
   return VAR_9;
  }

  VAR_8->oh_ex = VAR_7;
  FUNC_4(VAR_10, VAR_8);
  return 0;
 }

 if (FUNC_8(VAR_7 && !VAR_11->oh_ex)) {



  FUNC_2(VAR_2, "Recursive locking is not permitted to "
       "upgrade to EX level from PR level.\n");
  FUNC_1();
  return -VAR_0;
 }





 if (VAR_6) {
  VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_7,
            VAR_3);
  if (VAR_9 < 0) {
   if (VAR_9 != -VAR_1)
    FUNC_3(VAR_9);
   return VAR_9;
  }
 }
 return VAR_11 ? 1 : 0;
}
