
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {TYPE_1__* journal; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {int j_checkpointed; } ;


 int FUNC_0 (struct inode*) ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct ocfs2_super*) ;
 int FUNC_4 (struct ocfs2_super*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static inline void FUNC_6(struct inode *VAR_0)
{
 struct ocfs2_super *VAR_1 = FUNC_1(VAR_0->i_sb);

 if (FUNC_3(VAR_1))
  return;

 if (!FUNC_2(FUNC_0(VAR_0))) {






  FUNC_4(VAR_1);

  FUNC_5(VAR_1->journal->j_checkpointed,
      FUNC_2(FUNC_0(VAR_0)));
 }
}
