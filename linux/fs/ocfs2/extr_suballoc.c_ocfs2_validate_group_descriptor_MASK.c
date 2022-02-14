
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ocfs2_group_desc {int bg_check; } ;
struct buffer_head {scalar_t__ b_data; scalar_t__ b_blocknr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct super_block*,struct buffer_head*,int ) ;
 int FUNC_3 (struct super_block*,scalar_t__,int *) ;
 int FUNC_4 (unsigned long long) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_0,
        struct buffer_head *VAR_1)
{
 int VAR_2;
 struct ocfs2_group_desc *VAR_3 = (struct ocfs2_group_desc *)VAR_1->b_data;

 FUNC_4(
     (unsigned long long)VAR_1->b_blocknr);

 FUNC_0(!FUNC_1(VAR_1));






 VAR_2 = FUNC_3(VAR_0, VAR_1->b_data, &VAR_3->bg_check);
 if (VAR_2)
  return VAR_2;





 return FUNC_2(VAR_0, VAR_1, 0);
}
