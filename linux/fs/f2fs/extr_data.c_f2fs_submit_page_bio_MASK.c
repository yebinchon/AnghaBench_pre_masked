
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct f2fs_io_info {int type; int sbi; struct page* page; int op; int op_flags; scalar_t__ io_wbc; scalar_t__ is_por; int new_blkaddr; struct page* encrypted_page; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct page*) ;
 struct bio* FUNC_1 (struct f2fs_io_info*,int) ;
 scalar_t__ FUNC_2 (struct f2fs_io_info*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int ,struct bio*,int ) ;
 scalar_t__ FUNC_5 (struct bio*,struct page*,scalar_t__,int ) ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (struct bio*,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct f2fs_io_info*,int ) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct page*,struct f2fs_io_info*) ;
 int FUNC_13 (scalar_t__,struct page*,scalar_t__) ;

int FUNC_14(struct f2fs_io_info *VAR_6)
{
 struct bio *VAR_7;
 struct page *VAR_8 = VAR_6->encrypted_page ?
   VAR_6->encrypted_page : VAR_6->page;

 if (!FUNC_8(VAR_6->sbi, VAR_6->new_blkaddr,
   VAR_6->is_por ? VAR_4 : (FUNC_2(VAR_6) ?
   VAR_3 : VAR_0)))
  return -VAR_2;

 FUNC_12(VAR_8, VAR_6);
 FUNC_9(VAR_6, 0);


 VAR_7 = FUNC_1(VAR_6, 1);

 if (FUNC_5(VAR_7, VAR_8, VAR_5, 0) < VAR_5) {
  FUNC_6(VAR_7);
  return -VAR_1;
 }

 if (VAR_6->io_wbc && !FUNC_11(VAR_6->op))
  FUNC_13(VAR_6->io_wbc, VAR_8, VAR_5);

 FUNC_7(VAR_7, VAR_6->op, VAR_6->op_flags);

 FUNC_10(VAR_6->sbi, FUNC_11(VAR_6->op) ?
   FUNC_3(VAR_8): FUNC_0(VAR_6->page));

 FUNC_4(VAR_6->sbi, VAR_7, VAR_6->type);
 return 0;
}
