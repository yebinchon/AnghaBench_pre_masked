
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int i_ino; } ;
struct f2fs_io_info {int io_type; int need_lock; int * encrypted_page; struct page* page; int old_blkaddr; int op_flags; int op; int temp; int type; int ino; TYPE_1__* sbi; } ;
typedef int block_t ;
struct TYPE_5__ {int * i_gc_failures; } ;
struct TYPE_4__ {int * skipped_atomic_files; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (TYPE_1__*,unsigned int,int) ;
 int FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (struct page*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (struct f2fs_io_info*) ;
 struct page* FUNC_11 (struct inode*,int ,int) ;
 scalar_t__ FUNC_12 (struct inode*) ;
 scalar_t__ FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*,int) ;
 int FUNC_15 (struct page*,int) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (struct page*,int ,int,int) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (struct page*) ;
 int FUNC_20 (struct page*) ;

__attribute__((used)) static int FUNC_21(struct inode *VAR_15, block_t VAR_16, int VAR_17,
       unsigned int VAR_18, int VAR_19)
{
 struct page *VAR_20;
 int VAR_21 = 0;

 VAR_20 = FUNC_11(VAR_15, VAR_16, 1);
 if (FUNC_2(VAR_20))
  return FUNC_3(VAR_20);

 if (!FUNC_6(FUNC_1(VAR_15), VAR_18, VAR_19)) {
  VAR_21 = -VAR_5;
  goto out;
 }

 if (FUNC_12(VAR_15)) {
  FUNC_0(VAR_15)->i_gc_failures[VAR_9]++;
  FUNC_1(VAR_15)->skipped_atomic_files[VAR_17]++;
  VAR_21 = -VAR_4;
  goto out;
 }
 if (FUNC_13(VAR_15)) {
  if (VAR_17 == VAR_7)
   FUNC_14(VAR_15, 1);
  VAR_21 = -VAR_4;
  goto out;
 }

 if (VAR_17 == VAR_0) {
  if (FUNC_5(VAR_20)) {
   VAR_21 = -VAR_4;
   goto out;
  }
  FUNC_20(VAR_20);
  FUNC_19(VAR_20);
 } else {
  struct f2fs_io_info VAR_22 = {
   .sbi = FUNC_1(VAR_15),
   .ino = VAR_15->i_ino,
   .type = VAR_3,
   .temp = VAR_2,
   .op = VAR_13,
   .op_flags = VAR_14,
   .old_blkaddr = VAR_12,
   .page = VAR_20,
   .encrypted_page = ((void*)0),
   .need_lock = VAR_11,
   .io_type = VAR_8,
  };
  bool VAR_23 = FUNC_4(VAR_20);

retry:
  FUNC_17(VAR_20, VAR_3, 1, 1);

  FUNC_20(VAR_20);
  if (FUNC_8(VAR_20)) {
   FUNC_18(VAR_15);
   FUNC_16(VAR_15);
  }

  FUNC_19(VAR_20);

  VAR_21 = FUNC_10(&VAR_22);
  if (VAR_21) {
   FUNC_7(VAR_20);
   if (VAR_21 == -VAR_6) {
    FUNC_9(VAR_1, VAR_10/50);
    goto retry;
   }
   if (VAR_23)
    FUNC_20(VAR_20);
  }
 }
out:
 FUNC_15(VAR_20, 1);
 return VAR_21;
}
