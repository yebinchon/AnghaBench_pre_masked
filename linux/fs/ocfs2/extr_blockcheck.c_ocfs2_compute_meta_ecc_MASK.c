
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; } ;
struct ocfs2_block_check {int dummy; } ;


 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (void*,int ,struct ocfs2_block_check*) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct super_block *VAR_0, void *VAR_1,
       struct ocfs2_block_check *VAR_2)
{
 if (FUNC_2(FUNC_0(VAR_0)))
  FUNC_1(VAR_1, VAR_0->s_blocksize, VAR_2);
}
