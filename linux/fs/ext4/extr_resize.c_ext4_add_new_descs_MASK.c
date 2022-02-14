
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct ext4_super_block {int s_reserved_gdt_blocks; } ;
struct ext4_sb_info {struct buffer_head** s_group_desc; struct ext4_super_block* s_es; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
typedef int ext4_group_t ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int FUNC_1 (struct super_block*) ;
 struct ext4_sb_info* FUNC_2 (struct super_block*) ;
 int FUNC_3 (int *,struct inode*,int) ;
 int FUNC_4 (struct super_block*,int *,int) ;
 scalar_t__ FUNC_5 (struct super_block*,int) ;
 scalar_t__ FUNC_6 (struct super_block*,int) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (int *,struct buffer_head*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,struct inode*,int) ;

__attribute__((used)) static int FUNC_11(handle_t *VAR_0, struct super_block *VAR_1,
         ext4_group_t VAR_2, struct inode *VAR_3,
         ext4_group_t VAR_4)
{
 struct ext4_sb_info *VAR_5 = FUNC_2(VAR_1);
 struct ext4_super_block *VAR_6 = VAR_5->s_es;
 struct buffer_head *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11 = 0;
 int VAR_12;

 VAR_12 = FUNC_7(VAR_1);
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++, VAR_2++) {
  int VAR_13 = FUNC_5(VAR_1, VAR_2) ?
   FUNC_9(VAR_6->s_reserved_gdt_blocks) : 0;

  VAR_9 = VAR_2 % FUNC_1(VAR_1);
  VAR_10 = VAR_2 / FUNC_1(VAR_1);







  if (VAR_9) {
   VAR_7 = VAR_5->s_group_desc[VAR_10];
   FUNC_0(VAR_7, "get_write_access");
   VAR_11 = FUNC_8(VAR_0, VAR_7);

   if (!VAR_11 && VAR_13 && FUNC_6(VAR_1, VAR_2))
    VAR_11 = FUNC_10(VAR_0, VAR_3, VAR_2);
  } else if (VAR_12 != 0) {
   VAR_11 = FUNC_4(VAR_1, VAR_0, VAR_2);
  } else {
   VAR_11 = FUNC_3(VAR_0, VAR_3, VAR_2);
  }
  if (VAR_11)
   break;
 }
 return VAR_11;
}
