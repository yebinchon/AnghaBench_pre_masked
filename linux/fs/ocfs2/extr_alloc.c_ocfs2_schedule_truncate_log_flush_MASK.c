
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int osb_truncate_log_wq; int ocfs2_wq; int osb_tl_disable; scalar_t__ osb_tl_inode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int ) ;

void FUNC_3(struct ocfs2_super *VAR_1,
           int VAR_2)
{
 if (VAR_1->osb_tl_inode &&
   FUNC_0(&VAR_1->osb_tl_disable) == 0) {


  if (VAR_2)
   FUNC_1(&VAR_1->osb_truncate_log_wq);

  FUNC_2(VAR_1->ocfs2_wq, &VAR_1->osb_truncate_log_wq,
       VAR_0);
 }
}
