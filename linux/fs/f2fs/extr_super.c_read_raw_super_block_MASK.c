
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct f2fs_super_block {int dummy; } ;
struct f2fs_sb_info {struct super_block* sb; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct f2fs_sb_info*,char*,int) ;
 int FUNC_2 (struct f2fs_super_block*) ;
 struct f2fs_super_block* FUNC_3 (int,int ) ;
 int FUNC_4 (struct f2fs_super_block*,scalar_t__,int) ;
 int FUNC_5 (struct f2fs_sb_info*,struct buffer_head*) ;
 struct buffer_head* FUNC_6 (struct super_block*,int) ;

__attribute__((used)) static int FUNC_7(struct f2fs_sb_info *VAR_4,
   struct f2fs_super_block **VAR_5,
   int *VAR_6, int *VAR_7)
{
 struct super_block *VAR_8 = VAR_4->sb;
 int VAR_9;
 struct buffer_head *VAR_10;
 struct f2fs_super_block *VAR_11;
 int VAR_12 = 0;

 VAR_11 = FUNC_3(sizeof(struct f2fs_super_block), VAR_3);
 if (!VAR_11)
  return -VAR_1;

 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  VAR_10 = FUNC_6(VAR_8, VAR_9);
  if (!VAR_10) {
   FUNC_1(VAR_4, "Unable to read %dth superblock",
     VAR_9 + 1);
   VAR_12 = -VAR_0;
   continue;
  }


  VAR_12 = FUNC_5(VAR_4, VAR_10);
  if (VAR_12) {
   FUNC_1(VAR_4, "Can't find valid F2FS filesystem in %dth superblock",
     VAR_9 + 1);
   FUNC_0(VAR_10);
   continue;
  }

  if (!*VAR_5) {
   FUNC_4(VAR_11, VAR_10->b_data + VAR_2,
       sizeof(*VAR_11));
   *VAR_6 = VAR_9;
   *VAR_5 = VAR_11;
  }
  FUNC_0(VAR_10);
 }


 if (VAR_12 < 0)
  *VAR_7 = 1;


 if (!*VAR_5)
  FUNC_2(VAR_11);
 else
  VAR_12 = 0;

 return VAR_12;
}
