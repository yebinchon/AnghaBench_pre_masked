
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_io_info {int op_flags; int in_list; int is_por; int new_blkaddr; struct page* page; int * encrypted_page; int op; int type; struct f2fs_sb_info* sbi; } ;
struct blk_plug {int dummy; } ;
typedef int block_t ;
struct TYPE_2__ {int max_nid; } ;


 int FUNC_0 () ;
 int VAR_0 ;

 int FUNC_1 (struct f2fs_sb_info*) ;




 int FUNC_2 (int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct blk_plug*) ;
 int FUNC_6 (struct blk_plug*) ;
 int FUNC_7 (struct f2fs_sb_info*,int) ;
 int FUNC_8 (struct f2fs_sb_info*,int) ;
 struct page* FUNC_9 (int ,int,int) ;
 int FUNC_10 (struct f2fs_sb_info*,int,int) ;
 int FUNC_11 (struct page*,int) ;
 int FUNC_12 (struct f2fs_io_info*) ;
 scalar_t__ FUNC_13 (int) ;

int FUNC_14(struct f2fs_sb_info *VAR_7, block_t VAR_8, int VAR_9,
       int VAR_10, bool VAR_11)
{
 struct page *VAR_12;
 block_t VAR_13 = VAR_8;
 struct f2fs_io_info VAR_14 = {
  .sbi = VAR_7,
  .type = VAR_0,
  .op = VAR_3,
  .op_flags = VAR_11 ? (VAR_2 | VAR_4) : VAR_5,
  .encrypted_page = ((void*)0),
  .in_list = 0,
  .is_por = (VAR_10 == 130),
 };
 struct blk_plug VAR_15;

 if (FUNC_13(VAR_10 == 130))
  VAR_14.op_flags &= ~VAR_2;

 FUNC_6(&VAR_15);
 for (; VAR_9-- > 0; VAR_13++) {

  if (!FUNC_10(VAR_7, VAR_13, VAR_10))
   goto out;

  switch (VAR_10) {
  case 131:
   if (FUNC_13(VAR_13 >=
     FUNC_2(FUNC_3(VAR_7)->max_nid)))
    VAR_13 = 0;

   VAR_14.new_blkaddr = FUNC_7(VAR_7,
     VAR_13 * VAR_1);
   break;
  case 129:

   VAR_14.new_blkaddr = FUNC_8(VAR_7,
     VAR_13 * VAR_6);
   break;
  case 128:
  case 132:
  case 130:
   VAR_14.new_blkaddr = VAR_13;
   break;
  default:
   FUNC_0();
  }

  VAR_12 = FUNC_9(FUNC_1(VAR_7),
      VAR_14.new_blkaddr, 0);
  if (!VAR_12)
   continue;
  if (FUNC_4(VAR_12)) {
   FUNC_11(VAR_12, 1);
   continue;
  }

  VAR_14.page = VAR_12;
  FUNC_12(&VAR_14);
  FUNC_11(VAR_12, 0);
 }
out:
 FUNC_5(&VAR_15);
 return VAR_13 - VAR_8;
}
