
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; } ;
struct ocfs2_disk_dqtrailer {int dq_check; } ;
struct buffer_head {int b_data; scalar_t__ b_blocknr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct buffer_head*) ;
 struct ocfs2_disk_dqtrailer* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct super_block*,int ,int *) ;
 int FUNC_4 (unsigned long long) ;

int FUNC_5(struct super_block *VAR_0, struct buffer_head *VAR_1)
{
 struct ocfs2_disk_dqtrailer *VAR_2 =
  FUNC_2(VAR_0->s_blocksize, VAR_1->b_data);

 FUNC_4((unsigned long long)VAR_1->b_blocknr);

 FUNC_0(!FUNC_1(VAR_1));






 return FUNC_3(VAR_0, VAR_1->b_data, &VAR_2->dq_check);
}
