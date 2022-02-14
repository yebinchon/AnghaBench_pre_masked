
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct page {int i_mode; } ;
struct node_info {int ino; } ;
struct inode {int i_mode; } ;
struct gc_inode_list {int dummy; } ;
struct f2fs_summary {int ofs_in_node; int nid; } ;
struct f2fs_sb_info {int blocks_per_seg; int skipped_gc_rwsem; struct super_block* sb; } ;
struct f2fs_inode_info {int * i_gc_rwsem; } ;
typedef int nid_t ;
typedef scalar_t__ block_t ;


 int VAR_0 ;
 struct f2fs_inode_info* FUNC_0 (struct page*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct f2fs_sb_info*,unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;
 size_t VAR_5 ;
 int FUNC_5 (struct gc_inode_list*,struct page*) ;
 scalar_t__ FUNC_6 (struct f2fs_sb_info*,unsigned int,int) ;
 int FUNC_7 (int *) ;
 struct page* FUNC_8 (struct page*,scalar_t__,int ,int) ;
 struct page* FUNC_9 (struct super_block*,int ) ;
 scalar_t__ FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*,int ) ;
 int FUNC_12 (struct f2fs_sb_info*,int ,int,int ,int) ;
 int FUNC_13 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_14 (unsigned int,struct page*) ;
 struct page* FUNC_15 (struct gc_inode_list*,int ) ;
 scalar_t__ FUNC_16 (struct f2fs_sb_info*,int ,int ) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (struct page*) ;
 int FUNC_19 (struct f2fs_sb_info*,struct f2fs_summary*,struct node_info*,scalar_t__,unsigned int*) ;
 scalar_t__ FUNC_20 (struct page*) ;
 unsigned int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (struct page*,scalar_t__,int,unsigned int,int) ;
 int FUNC_24 (struct page*,scalar_t__,int,unsigned int,int) ;
 int FUNC_25 (struct page*,scalar_t__) ;
 int FUNC_26 (struct f2fs_sb_info*,int,int) ;
 int FUNC_27 (int *) ;

__attribute__((used)) static int FUNC_28(struct f2fs_sb_info *VAR_6, struct f2fs_summary *VAR_7,
  struct gc_inode_list *VAR_8, unsigned int VAR_9, int VAR_10)
{
 struct super_block *VAR_11 = VAR_6->sb;
 struct f2fs_summary *VAR_12;
 block_t VAR_13;
 int VAR_14;
 int VAR_15 = 0;
 int VAR_16 = 0;

 VAR_13 = FUNC_3(VAR_6, VAR_9);

next_step:
 VAR_12 = VAR_7;

 for (VAR_14 = 0; VAR_14 < VAR_6->blocks_per_seg; VAR_14++, VAR_12++) {
  struct page *VAR_17;
  struct inode *VAR_18;
  struct node_info VAR_19;
  unsigned int VAR_20, VAR_21;
  block_t VAR_22;
  nid_t VAR_23 = FUNC_22(VAR_12->nid);


  if (VAR_10 == VAR_0 && FUNC_16(VAR_6, 0, 0))
   return VAR_16;

  if (FUNC_6(VAR_6, VAR_9, VAR_14) == 0)
   continue;

  if (VAR_15 == 0) {
   FUNC_12(VAR_6, FUNC_2(VAR_23), 1,
       VAR_2, 1);
   continue;
  }

  if (VAR_15 == 1) {
   FUNC_13(VAR_6, VAR_23);
   continue;
  }


  if (!FUNC_19(VAR_6, VAR_12, &VAR_19, VAR_13 + VAR_14, &VAR_21))
   continue;

  if (VAR_15 == 2) {
   FUNC_13(VAR_6, VAR_19.ino);
   continue;
  }

  VAR_20 = FUNC_21(VAR_12->ofs_in_node);

  if (VAR_15 == 3) {
   VAR_18 = FUNC_9(VAR_11, VAR_19.ino);
   if (FUNC_1(VAR_18) || FUNC_20(VAR_18))
    continue;

   if (!FUNC_7(
    &FUNC_0(VAR_18)->i_gc_rwsem[VAR_5])) {
    FUNC_18(VAR_18);
    VAR_6->skipped_gc_rwsem++;
    continue;
   }

   VAR_22 = FUNC_14(VAR_21, VAR_18) +
        VAR_20;

   if (FUNC_10(VAR_18)) {
    int VAR_24 = FUNC_25(VAR_18, VAR_22);

    FUNC_27(&FUNC_0(VAR_18)->i_gc_rwsem[VAR_5]);
    if (VAR_24) {
     FUNC_18(VAR_18);
     continue;
    }
    FUNC_5(VAR_8, VAR_18);
    continue;
   }

   VAR_17 = FUNC_8(VAR_18,
      VAR_22, VAR_4, 1);
   FUNC_27(&FUNC_0(VAR_18)->i_gc_rwsem[VAR_5]);
   if (FUNC_1(VAR_17)) {
    FUNC_18(VAR_18);
    continue;
   }

   FUNC_11(VAR_17, 0);
   FUNC_5(VAR_8, VAR_18);
   continue;
  }


  VAR_18 = FUNC_15(VAR_8, VAR_19.ino);
  if (VAR_18) {
   struct f2fs_inode_info *VAR_25 = FUNC_0(VAR_18);
   bool VAR_26 = 0;
   int VAR_27;

   if (FUNC_4(VAR_18->i_mode)) {
    if (!FUNC_7(&VAR_25->i_gc_rwsem[VAR_3]))
     continue;
    if (!FUNC_7(
      &VAR_25->i_gc_rwsem[VAR_5])) {
     VAR_6->skipped_gc_rwsem++;
     FUNC_27(&VAR_25->i_gc_rwsem[VAR_3]);
     continue;
    }
    VAR_26 = 1;


    FUNC_17(VAR_18);
   }

   VAR_22 = FUNC_14(VAR_21, VAR_18)
        + VAR_20;
   if (FUNC_10(VAR_18))
    VAR_27 = FUNC_23(VAR_18, VAR_22,
       VAR_10, VAR_9, VAR_14);
   else
    VAR_27 = FUNC_24(VAR_18, VAR_22, VAR_10,
        VAR_9, VAR_14);

   if (!VAR_27 && (VAR_10 == VAR_1 ||
     FUNC_10(VAR_18)))
    VAR_16++;

   if (VAR_26) {
    FUNC_27(&VAR_25->i_gc_rwsem[VAR_5]);
    FUNC_27(&VAR_25->i_gc_rwsem[VAR_3]);
   }

   FUNC_26(VAR_6, 1, VAR_10);
  }
 }

 if (++VAR_15 < 5)
  goto next_step;

 return VAR_16;
}
