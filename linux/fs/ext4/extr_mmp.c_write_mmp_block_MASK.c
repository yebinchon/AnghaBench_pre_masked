
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct mmp_struct {int dummy; } ;
struct buffer_head {int b_end_io; scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct buffer_head*) ;
 int VAR_4 ;
 int FUNC_1 (struct super_block*,struct mmp_struct*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (int ,int,struct buffer_head*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_9(struct super_block *VAR_5, struct buffer_head *VAR_6)
{
 struct mmp_struct *VAR_7 = (struct mmp_struct *)(VAR_6->b_data);





 FUNC_5(VAR_5);
 FUNC_1(VAR_5, VAR_7);
 FUNC_3(VAR_6);
 VAR_6->b_end_io = VAR_4;
 FUNC_2(VAR_6);
 FUNC_6(VAR_1, VAR_3 | VAR_0 | VAR_2, VAR_6);
 FUNC_8(VAR_6);
 FUNC_4(VAR_5);
 if (FUNC_7(!FUNC_0(VAR_6)))
  return 1;

 return 0;
}
