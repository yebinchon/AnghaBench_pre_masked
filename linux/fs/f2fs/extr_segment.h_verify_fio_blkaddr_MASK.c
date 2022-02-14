
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct f2fs_io_info {int new_blkaddr; int old_blkaddr; struct f2fs_sb_info* sbi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct f2fs_io_info*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct f2fs_sb_info*,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct f2fs_io_info *VAR_3)
{
 struct f2fs_sb_info *VAR_4 = VAR_3->sbi;

 if (FUNC_1(VAR_3->old_blkaddr))
  FUNC_2(VAR_4, VAR_3->old_blkaddr, FUNC_0(VAR_3) ?
     VAR_2 : VAR_0);
 FUNC_2(VAR_4, VAR_3->new_blkaddr, FUNC_0(VAR_3) ?
     VAR_2 : VAR_1);
}
