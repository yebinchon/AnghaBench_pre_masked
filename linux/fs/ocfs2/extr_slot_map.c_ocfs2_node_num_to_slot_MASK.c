
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int osb_lock; struct ocfs2_slot_info* slot_info; } ;
struct ocfs2_slot_info {int dummy; } ;


 int FUNC_0 (struct ocfs2_slot_info*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ocfs2_super *VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 struct ocfs2_slot_info *VAR_3 = VAR_0->slot_info;

 FUNC_1(&VAR_0->osb_lock);
 VAR_2 = FUNC_0(VAR_3, VAR_1);
 FUNC_2(&VAR_0->osb_lock);

 return VAR_2;
}
