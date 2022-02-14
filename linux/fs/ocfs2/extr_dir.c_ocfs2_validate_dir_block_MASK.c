
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ocfs2_dir_block_trailer {int db_check; } ;
struct buffer_head {scalar_t__ b_blocknr; int b_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ,char*,unsigned long long) ;
 struct ocfs2_dir_block_trailer* FUNC_3 (struct buffer_head*,struct super_block*) ;
 int FUNC_4 (struct super_block*,int ,int *) ;
 int FUNC_5 (unsigned long long) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_1,
        struct buffer_head *VAR_2)
{
 int VAR_3;
 struct ocfs2_dir_block_trailer *VAR_4 =
  FUNC_3(VAR_2, VAR_1);






 FUNC_5((unsigned long long)VAR_2->b_blocknr);

 FUNC_0(!FUNC_1(VAR_2));
 VAR_3 = FUNC_4(VAR_1, VAR_2->b_data, &VAR_4->db_check);
 if (VAR_3)
  FUNC_2(VAR_0, "Checksum failed for dinode %llu\n",
       (unsigned long long)VAR_2->b_blocknr);

 return VAR_3;
}
