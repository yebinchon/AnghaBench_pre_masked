
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct f2fs_io_info {struct bio** bio; int new_blkaddr; int * last_block; int sbi; scalar_t__ io_wbc; int type; int op_flags; int op; struct page* page; struct page* encrypted_page; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct page*) ;
 struct bio* FUNC_1 (struct f2fs_io_info*,int ) ;
 scalar_t__ FUNC_2 (struct f2fs_io_info*) ;
 int FUNC_3 (int ,struct bio*,int ) ;
 scalar_t__ FUNC_4 (struct bio*,struct page*,scalar_t__,int ) ;
 int FUNC_5 (struct bio*,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct f2fs_io_info*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,struct bio*,int ,int ) ;
 int FUNC_10 (struct page*,struct f2fs_io_info*) ;
 int FUNC_11 (scalar_t__,struct page*,scalar_t__) ;

int FUNC_12(struct f2fs_io_info *VAR_5)
{
 struct bio *VAR_6 = *VAR_5->bio;
 struct page *VAR_7 = VAR_5->encrypted_page ?
   VAR_5->encrypted_page : VAR_5->page;

 if (!FUNC_6(VAR_5->sbi, VAR_5->new_blkaddr,
   FUNC_2(VAR_5) ? VAR_3 : VAR_1))
  return -VAR_2;

 FUNC_10(VAR_7, VAR_5);
 FUNC_7(VAR_5, 0);

 if (VAR_6 && !FUNC_9(VAR_5->sbi, VAR_6, *VAR_5->last_block,
      VAR_5->new_blkaddr)) {
  FUNC_3(VAR_5->sbi, VAR_6, VAR_5->type);
  VAR_6 = ((void*)0);
 }
alloc_new:
 if (!VAR_6) {
  VAR_6 = FUNC_1(VAR_5, VAR_0);
  FUNC_5(VAR_6, VAR_5->op, VAR_5->op_flags);
 }

 if (FUNC_4(VAR_6, VAR_7, VAR_4, 0) < VAR_4) {
  FUNC_3(VAR_5->sbi, VAR_6, VAR_5->type);
  VAR_6 = ((void*)0);
  goto alloc_new;
 }

 if (VAR_5->io_wbc)
  FUNC_11(VAR_5->io_wbc, VAR_7, VAR_4);

 FUNC_8(VAR_5->sbi, FUNC_0(VAR_7));

 *VAR_5->last_block = VAR_5->new_blkaddr;
 *VAR_5->bio = VAR_6;

 return 0;
}
