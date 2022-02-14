
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int index; } ;
struct node_info {scalar_t__ blk_addr; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_io_info {int op_flags; scalar_t__ new_blkaddr; scalar_t__ old_blkaddr; int * encrypted_page; struct page* page; int op; int type; struct f2fs_sb_info* sbi; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct f2fs_sb_info* FUNC_1 (struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct f2fs_sb_info*,int ,struct node_info*) ;
 int FUNC_4 (struct f2fs_sb_info*,struct page*) ;
 int FUNC_5 (struct f2fs_io_info*) ;
 scalar_t__ FUNC_6 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct page *VAR_7, int VAR_8)
{
 struct f2fs_sb_info *VAR_9 = FUNC_1(VAR_7);
 struct node_info VAR_10;
 struct f2fs_io_info VAR_11 = {
  .sbi = VAR_9,
  .type = VAR_3,
  .op = VAR_5,
  .op_flags = VAR_8,
  .page = VAR_7,
  .encrypted_page = ((void*)0),
 };
 int VAR_12;

 if (FUNC_2(VAR_7)) {
  if (!FUNC_4(VAR_9, VAR_7)) {
   FUNC_0(VAR_7);
   return -VAR_0;
  }
  return VAR_2;
 }

 VAR_12 = FUNC_3(VAR_9, VAR_7->index, &VAR_10);
 if (VAR_12)
  return VAR_12;

 if (FUNC_7(VAR_10.blk_addr == VAR_4) ||
   FUNC_6(VAR_9, VAR_6)) {
  FUNC_0(VAR_7);
  return -VAR_1;
 }

 VAR_11.new_blkaddr = VAR_11.old_blkaddr = VAR_10.blk_addr;
 return FUNC_5(&VAR_11);
}
