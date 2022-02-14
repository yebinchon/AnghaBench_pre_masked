
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent_idx {int ei_block; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {int p_depth; int p_hdr; struct ext4_extent_idx* p_idx; struct ext4_extent* p_ext; } ;
typedef int ext4_lblk_t ;
typedef scalar_t__ ext4_fsblk_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,char*,int,...) ;
 struct ext4_extent* FUNC_1 (int ) ;
 struct ext4_extent_idx* FUNC_2 (int ) ;
 int FUNC_3 (struct ext4_extent*) ;
 scalar_t__ FUNC_4 (struct ext4_extent*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1,
    struct ext4_ext_path *VAR_2,
    ext4_lblk_t *VAR_3, ext4_fsblk_t *VAR_4)
{
 struct ext4_extent_idx *VAR_5;
 struct ext4_extent *VAR_6;
 int VAR_7, VAR_8;

 if (FUNC_6(VAR_2 == ((void*)0))) {
  FUNC_0(VAR_1, "path == NULL *logical %d!", *VAR_3);
  return -VAR_0;
 }
 VAR_7 = VAR_2->p_depth;
 *VAR_4 = 0;

 if (VAR_7 == 0 && VAR_2->p_ext == ((void*)0))
  return 0;





 VAR_6 = VAR_2[VAR_7].p_ext;
 VAR_8 = FUNC_3(VAR_6);
 if (*VAR_3 < FUNC_5(VAR_6->ee_block)) {
  if (FUNC_6(FUNC_1(VAR_2[VAR_7].p_hdr) != VAR_6)) {
   FUNC_0(VAR_1,
      "EXT_FIRST_EXTENT != ex *logical %d ee_block %d!",
      *VAR_3, FUNC_5(VAR_6->ee_block));
   return -VAR_0;
  }
  while (--VAR_7 >= 0) {
   VAR_5 = VAR_2[VAR_7].p_idx;
   if (FUNC_6(VAR_5 != FUNC_2(VAR_2[VAR_7].p_hdr))) {
    FUNC_0(VAR_1,
      "ix (%d) != EXT_FIRST_INDEX (%d) (depth %d)!",
      VAR_5 != ((void*)0) ? FUNC_5(VAR_5->ei_block) : 0,
      FUNC_2(VAR_2[VAR_7].p_hdr) != ((void*)0) ?
  FUNC_5(FUNC_2(VAR_2[VAR_7].p_hdr)->ei_block) : 0,
      VAR_7);
    return -VAR_0;
   }
  }
  return 0;
 }

 if (FUNC_6(*VAR_3 < (FUNC_5(VAR_6->ee_block) + VAR_8))) {
  FUNC_0(VAR_1,
     "logical %d < ee_block %d + ee_len %d!",
     *VAR_3, FUNC_5(VAR_6->ee_block), VAR_8);
  return -VAR_0;
 }

 *VAR_3 = FUNC_5(VAR_6->ee_block) + VAR_8 - 1;
 *VAR_4 = FUNC_4(VAR_6) + VAR_8 - 1;
 return 0;
}
