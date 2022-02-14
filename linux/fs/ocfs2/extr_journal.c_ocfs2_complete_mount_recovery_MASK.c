
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int * local_alloc_copy; int slot_num; struct ocfs2_journal* journal; } ;
struct ocfs2_journal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ocfs2_super*) ;
 scalar_t__ FUNC_1 (struct ocfs2_super*) ;
 int FUNC_2 (struct ocfs2_journal*,int ,int *,int *,int *,int ) ;
 int FUNC_3 (struct ocfs2_super*,int ) ;
 int FUNC_4 (struct ocfs2_super*,int ) ;
 int FUNC_5 (struct ocfs2_super*,int ) ;

void FUNC_6(struct ocfs2_super *VAR_2)
{
 struct ocfs2_journal *VAR_3 = VAR_2->journal;

 if (FUNC_1(VAR_2))
  return;



 FUNC_2(VAR_3, VAR_2->slot_num,
     VAR_2->local_alloc_copy, ((void*)0), ((void*)0),
     VAR_0);
 FUNC_5(VAR_2, 0);

 VAR_2->local_alloc_copy = ((void*)0);


 FUNC_4(VAR_2, VAR_1);
 FUNC_3(VAR_2, VAR_0);
 FUNC_0(VAR_2);
}
