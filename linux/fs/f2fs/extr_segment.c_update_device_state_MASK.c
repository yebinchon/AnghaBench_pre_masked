
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dev_lock; int dirty_device; } ;
struct f2fs_io_info {int ino; int new_blkaddr; struct f2fs_sb_info* sbi; } ;


 int VAR_0 ;
 int FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (unsigned int,char*) ;
 int FUNC_2 (struct f2fs_sb_info*,int ,unsigned int,int ) ;
 unsigned int FUNC_3 (struct f2fs_sb_info*,int ) ;
 int FUNC_4 (unsigned int,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct f2fs_io_info *VAR_1)
{
 struct f2fs_sb_info *VAR_2 = VAR_1->sbi;
 unsigned int VAR_3;

 if (!FUNC_0(VAR_2))
  return;

 VAR_3 = FUNC_3(VAR_2, VAR_1->new_blkaddr);


 FUNC_2(VAR_2, VAR_1->ino, VAR_3, VAR_0);


 if (!FUNC_4(VAR_3, (char *)&VAR_2->dirty_device)) {
  FUNC_5(&VAR_2->dev_lock);
  FUNC_1(VAR_3, (char *)&VAR_2->dirty_device);
  FUNC_6(&VAR_2->dev_lock);
 }
}
