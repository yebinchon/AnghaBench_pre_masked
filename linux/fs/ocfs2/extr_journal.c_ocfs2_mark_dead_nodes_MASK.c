
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_super {int max_slots; int slot_num; int osb_lock; int * slot_recovery_generations; } ;
struct ocfs2_dinode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ocfs2_super*,unsigned int) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ocfs2_dinode*) ;
 int FUNC_4 (struct ocfs2_super*,int,struct buffer_head**,int *) ;
 int FUNC_5 (struct ocfs2_super*,unsigned int) ;
 int FUNC_6 (struct ocfs2_super*,int,unsigned int*) ;
 int FUNC_7 (struct ocfs2_super*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,int ) ;

int FUNC_11(struct ocfs2_super *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4, VAR_5;
 u32 VAR_6;
 struct buffer_head *VAR_7 = ((void*)0);
 struct ocfs2_dinode *VAR_8;




 for (VAR_5 = 0; VAR_5 < VAR_2->max_slots; VAR_5++) {

  VAR_4 = FUNC_4(VAR_2, VAR_5, &VAR_7, ((void*)0));
  if (VAR_4) {
   FUNC_2(VAR_4);
   goto bail;
  }
  VAR_8 = (struct ocfs2_dinode *)VAR_7->b_data;
  VAR_6 = FUNC_3(VAR_8);
  FUNC_1(VAR_7);
  VAR_7 = ((void*)0);

  FUNC_8(&VAR_2->osb_lock);
  VAR_2->slot_recovery_generations[VAR_5] = VAR_6;

  FUNC_10(VAR_5,
         VAR_2->slot_recovery_generations[VAR_5]);

  if (VAR_5 == VAR_2->slot_num) {
   FUNC_9(&VAR_2->osb_lock);
   continue;
  }

  VAR_4 = FUNC_6(VAR_2, VAR_5, &VAR_3);
  if (VAR_4 == -VAR_1) {
   FUNC_9(&VAR_2->osb_lock);
   continue;
  }

  if (FUNC_0(VAR_2, VAR_3)) {
   FUNC_9(&VAR_2->osb_lock);
   continue;
  }
  FUNC_9(&VAR_2->osb_lock);




  VAR_4 = FUNC_7(VAR_2, VAR_5);
  if (!VAR_4) {



   FUNC_5(VAR_2, VAR_3);
  } else if ((VAR_4 < 0) && (VAR_4 != -VAR_0)) {
   FUNC_2(VAR_4);
   goto bail;
  }
 }

 VAR_4 = 0;
bail:
 return VAR_4;
}
