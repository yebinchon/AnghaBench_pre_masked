
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ocfs2_group_desc {int bg_check; } ;
struct ocfs2_dinode {int dummy; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ,char*,unsigned long long) ;
 int FUNC_3 (struct super_block*,struct ocfs2_dinode*,struct buffer_head*,int) ;
 int FUNC_4 (struct super_block*,struct buffer_head*,int) ;
 int FUNC_5 (struct super_block*,scalar_t__,int *) ;

int FUNC_6(struct super_block *VAR_1,
     struct ocfs2_dinode *VAR_2,
     struct buffer_head *VAR_3)
{
 int VAR_4;
 struct ocfs2_group_desc *VAR_5 = (struct ocfs2_group_desc *)VAR_3->b_data;

 FUNC_0(!FUNC_1(VAR_3));






 VAR_4 = FUNC_5(VAR_1, VAR_3->b_data, &VAR_5->bg_check);
 if (VAR_4) {
  FUNC_2(VAR_0,
       "Checksum failed for group descriptor %llu\n",
       (unsigned long long)VAR_3->b_blocknr);
 } else
  VAR_4 = FUNC_4(VAR_1, VAR_3, 1);
 if (!VAR_4)
  VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3, 1);

 return VAR_4;
}
