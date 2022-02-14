
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int index; } ;
struct inode {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct bio {int dummy; } ;
typedef int block_t ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct bio*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct f2fs_sb_info*,struct bio*,int ) ;
 scalar_t__ FUNC_5 (struct bio*,struct page*,scalar_t__,int ) ;
 int FUNC_6 (struct bio*) ;
 struct bio* FUNC_7 (struct inode*,int ,int,int ,int ) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_4, struct page *VAR_5,
       block_t VAR_6)
{
 struct f2fs_sb_info *VAR_7 = FUNC_1(VAR_4);
 struct bio *VAR_8;

 VAR_8 = FUNC_7(VAR_4, VAR_6, 1, 0, VAR_5->index);
 if (FUNC_2(VAR_8))
  return FUNC_3(VAR_8);


 FUNC_8(VAR_4, VAR_6);

 if (FUNC_5(VAR_8, VAR_5, VAR_3, 0) < VAR_3) {
  FUNC_6(VAR_8);
  return -VAR_1;
 }
 FUNC_0(VAR_5);
 FUNC_9(VAR_7, VAR_2);
 FUNC_4(VAR_7, VAR_8, VAR_0);
 return 0;
}
