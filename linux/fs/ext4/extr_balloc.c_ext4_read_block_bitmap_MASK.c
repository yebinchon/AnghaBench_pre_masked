
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int ext4_group_t ;


 struct buffer_head* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 struct buffer_head* FUNC_2 (struct super_block*,int ) ;
 int FUNC_3 (struct super_block*,int ,struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;

struct buffer_head *
FUNC_5(struct super_block *VAR_0, ext4_group_t VAR_1)
{
 struct buffer_head *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (FUNC_1(VAR_2))
  return VAR_2;
 VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_4(VAR_2);
  return FUNC_0(VAR_3);
 }
 return VAR_2;
}
