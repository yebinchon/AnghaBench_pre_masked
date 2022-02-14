
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {struct inode* osb_tl_inode; int osb_tl_bh; int ocfs2_wq; int osb_truncate_log_wq; int osb_tl_disable; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ocfs2_super*) ;

void FUNC_7(struct ocfs2_super *VAR_0)
{
 int VAR_1;
 struct inode *VAR_2 = VAR_0->osb_tl_inode;

 FUNC_0(&VAR_0->osb_tl_disable, 1);

 if (VAR_2) {
  FUNC_2(&VAR_0->osb_truncate_log_wq);
  FUNC_3(VAR_0->ocfs2_wq);

  VAR_1 = FUNC_6(VAR_0);
  if (VAR_1 < 0)
   FUNC_5(VAR_1);

  FUNC_1(VAR_0->osb_tl_bh);
  FUNC_4(VAR_0->osb_tl_inode);
 }
}
