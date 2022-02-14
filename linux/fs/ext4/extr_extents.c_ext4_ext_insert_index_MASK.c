
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ext4_extent_idx {int ei_block; } ;
struct ext4_ext_path {TYPE_1__* p_hdr; struct ext4_extent_idx* p_idx; } ;
typedef int handle_t ;
typedef int ext4_fsblk_t ;
struct TYPE_3__ {int eh_entries; int eh_max; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*,char*,...) ;
 struct ext4_extent_idx* FUNC_2 (TYPE_1__*) ;
 struct ext4_extent_idx* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_6 (int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_7 (struct ext4_extent_idx*,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (char*,int,int,...) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct ext4_extent_idx*,struct ext4_extent_idx*,int) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(handle_t *VAR_1, struct inode *VAR_2,
     struct ext4_ext_path *VAR_3,
     int VAR_4, ext4_fsblk_t VAR_5)
{
 struct ext4_extent_idx *VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_6(VAR_1, VAR_2, VAR_3);
 if (VAR_8)
  return VAR_8;

 if (FUNC_14(VAR_4 == FUNC_12(VAR_3->p_idx->ei_block))) {
  FUNC_1(VAR_2,
     "logical %d == ei_block %d!",
     VAR_4, FUNC_12(VAR_3->p_idx->ei_block));
  return -VAR_0;
 }

 if (FUNC_14(FUNC_11(VAR_3->p_hdr->eh_entries)
        >= FUNC_11(VAR_3->p_hdr->eh_max))) {
  FUNC_1(VAR_2,
     "eh_entries %d >= eh_max %d!",
     FUNC_11(VAR_3->p_hdr->eh_entries),
     FUNC_11(VAR_3->p_hdr->eh_max));
  return -VAR_0;
 }

 if (VAR_4 > FUNC_12(VAR_3->p_idx->ei_block)) {

  FUNC_9("insert new index %d after: %llu\n", VAR_4, VAR_5);
  VAR_6 = VAR_3->p_idx + 1;
 } else {

  FUNC_9("insert new index %d before: %llu\n", VAR_4, VAR_5);
  VAR_6 = VAR_3->p_idx;
 }

 VAR_7 = FUNC_2(VAR_3->p_hdr) - VAR_6 + 1;
 FUNC_0(VAR_7 < 0);
 if (VAR_7 > 0) {
  FUNC_9("insert new index %d: "
    "move %d indices from 0x%p to 0x%p\n",
    VAR_4, VAR_7, VAR_6, VAR_6 + 1);
  FUNC_13(VAR_6 + 1, VAR_6, VAR_7 * sizeof(struct ext4_extent_idx));
 }

 if (FUNC_14(VAR_6 > FUNC_3(VAR_3->p_hdr))) {
  FUNC_1(VAR_2, "ix > EXT_MAX_INDEX!");
  return -VAR_0;
 }

 VAR_6->ei_block = FUNC_4(VAR_4);
 FUNC_7(VAR_6, VAR_5);
 FUNC_10(&VAR_3->p_hdr->eh_entries, 1);

 if (FUNC_14(VAR_6 > FUNC_2(VAR_3->p_hdr))) {
  FUNC_1(VAR_2, "ix > EXT_LAST_INDEX!");
  return -VAR_0;
 }

 VAR_8 = FUNC_5(VAR_1, VAR_2, VAR_3);
 FUNC_8(VAR_2->i_sb, VAR_8);

 return VAR_8;
}
