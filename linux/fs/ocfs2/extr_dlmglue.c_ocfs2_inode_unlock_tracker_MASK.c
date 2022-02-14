
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_lock_res {int dummy; } ;
struct ocfs2_lock_holder {int oh_ex; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct ocfs2_lock_res ip_inode_lockres; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct ocfs2_lock_res*,struct ocfs2_lock_holder*) ;

void FUNC_3(struct inode *VAR_0,
    int VAR_1,
    struct ocfs2_lock_holder *VAR_2,
    int VAR_3)
{
 struct ocfs2_lock_res *VAR_4;

 VAR_4 = &FUNC_0(VAR_0)->ip_inode_lockres;





 if (!VAR_3) {
  FUNC_1(VAR_0, VAR_2->oh_ex);
  FUNC_2(VAR_4, VAR_2);
 }
}
