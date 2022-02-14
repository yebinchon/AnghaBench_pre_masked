
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct f2fs_super_block {int log_blocks_per_seg; int cp_blkaddr; } ;
struct f2fs_sb_info {unsigned long blocksize; unsigned char* ckpt; int cur_cp_pack; struct f2fs_super_block* raw_super; } ;
typedef void f2fs_checkpoint ;
typedef int block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (unsigned long,unsigned int) ;
 struct page* FUNC_4 (struct f2fs_sb_info*,int) ;
 unsigned char* FUNC_5 (struct f2fs_sb_info*,int ,int ) ;
 int FUNC_6 (struct page*,int) ;
 scalar_t__ FUNC_7 (struct f2fs_sb_info*) ;
 int FUNC_8 (unsigned char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (unsigned char*,void*,unsigned long) ;
 void* FUNC_11 (struct page*) ;
 struct page* FUNC_12 (struct f2fs_sb_info*,unsigned long long,unsigned long long*) ;
 scalar_t__ FUNC_13 (unsigned long long,unsigned long long) ;

int FUNC_14(struct f2fs_sb_info *VAR_3)
{
 struct f2fs_checkpoint *VAR_4;
 struct f2fs_super_block *VAR_5 = VAR_3->raw_super;
 struct page *VAR_6, *VAR_7, *VAR_8;
 unsigned long VAR_9 = VAR_3->blocksize;
 unsigned long long VAR_10 = 0, VAR_11 = 0;
 unsigned long long VAR_12;
 unsigned int VAR_13 = 1 + FUNC_2(VAR_3);
 block_t VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_3->ckpt = FUNC_5(VAR_3, FUNC_3(VAR_9, VAR_13),
     VAR_2);
 if (!VAR_3->ckpt)
  return -VAR_1;




 VAR_12 = FUNC_9(VAR_5->cp_blkaddr);
 VAR_6 = FUNC_12(VAR_3, VAR_12, &VAR_10);


 VAR_12 += ((unsigned long long)1) <<
    FUNC_9(VAR_5->log_blocks_per_seg);
 VAR_7 = FUNC_12(VAR_3, VAR_12, &VAR_11);

 if (VAR_6 && VAR_7) {
  if (FUNC_13(VAR_11, VAR_10))
   VAR_8 = VAR_7;
  else
   VAR_8 = VAR_6;
 } else if (VAR_6) {
  VAR_8 = VAR_6;
 } else if (VAR_7) {
  VAR_8 = VAR_7;
 } else {
  VAR_16 = -VAR_0;
  goto fail_no_cp;
 }

 VAR_4 = (struct f2fs_checkpoint *)FUNC_11(VAR_8);
 FUNC_10(VAR_3->ckpt, VAR_4, VAR_9);

 if (VAR_8 == VAR_6)
  VAR_3->cur_cp_pack = 1;
 else
  VAR_3->cur_cp_pack = 2;


 if (FUNC_7(VAR_3)) {
  VAR_16 = -VAR_0;
  goto free_fail_no_cp;
 }

 if (VAR_13 <= 1)
  goto done;

 VAR_14 = FUNC_9(VAR_5->cp_blkaddr);
 if (VAR_8 == VAR_7)
  VAR_14 += 1 << FUNC_9(VAR_5->log_blocks_per_seg);

 for (VAR_15 = 1; VAR_15 < VAR_13; VAR_15++) {
  void *VAR_17;
  unsigned char *VAR_18 = (unsigned char *)VAR_3->ckpt;

  VAR_8 = FUNC_4(VAR_3, VAR_14 + VAR_15);
  if (FUNC_0(VAR_8)) {
   VAR_16 = FUNC_1(VAR_8);
   goto free_fail_no_cp;
  }
  VAR_17 = FUNC_11(VAR_8);
  FUNC_10(VAR_18 + VAR_15 * VAR_9, VAR_17, VAR_9);
  FUNC_6(VAR_8, 1);
 }
done:
 FUNC_6(VAR_6, 1);
 FUNC_6(VAR_7, 1);
 return 0;

free_fail_no_cp:
 FUNC_6(VAR_6, 1);
 FUNC_6(VAR_7, 1);
fail_no_cp:
 FUNC_8(VAR_3->ckpt);
 return VAR_16;
}
