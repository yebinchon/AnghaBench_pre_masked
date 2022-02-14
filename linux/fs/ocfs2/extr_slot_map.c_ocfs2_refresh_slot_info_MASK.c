
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int osb_lock; struct ocfs2_slot_info* slot_info; } ;
struct ocfs2_slot_info {scalar_t__ si_blocks; int * si_bh; int si_inode; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,scalar_t__,int *,int ,int *) ;
 int FUNC_3 (struct ocfs2_slot_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;

int FUNC_7(struct ocfs2_super *VAR_1)
{
 int VAR_2;
 struct ocfs2_slot_info *VAR_3 = VAR_1->slot_info;

 if (VAR_3 == ((void*)0))
  return 0;

 FUNC_0(VAR_3->si_blocks == 0);
 FUNC_0(VAR_3->si_bh == ((void*)0));

 FUNC_6(VAR_3->si_blocks);






 VAR_2 = FUNC_2(FUNC_1(VAR_3->si_inode), -1, VAR_3->si_blocks,
    VAR_3->si_bh, VAR_0, ((void*)0));
 if (VAR_2 == 0) {
  FUNC_4(&VAR_1->osb_lock);
  FUNC_3(VAR_3);
  FUNC_5(&VAR_1->osb_lock);
 }

 return VAR_2;
}
