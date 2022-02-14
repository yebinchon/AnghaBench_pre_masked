
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct hpfs_sb_info {int sb_fs_size; int sb_max_fwd_alloc; int sb_c_bitmap; } ;
typedef int secno ;


 int FUNC_0 (struct super_block*,int,unsigned int,int) ;
 int FUNC_1 (struct super_block*,int) ;
 int FUNC_2 (struct super_block*,int) ;
 int FUNC_3 (struct super_block*,char*,int,int,int) ;
 struct hpfs_sb_info* FUNC_4 (struct super_block*) ;
 scalar_t__ FUNC_5 (int) ;

secno FUNC_6(struct super_block *VAR_0, secno VAR_1, unsigned VAR_2, int VAR_3)
{
 secno VAR_4;
 int VAR_5;
 unsigned VAR_6;
 struct hpfs_sb_info *VAR_7 = FUNC_4(VAR_0);
 int VAR_8 = 0;
 int VAR_9;
 if (VAR_3 < 0) {
  VAR_3 = -VAR_3;
  VAR_8 = 1;
 }
 VAR_6 = (VAR_7->sb_fs_size + 0x4000 - 1) >> 14;
 if (VAR_1 && VAR_1 < VAR_7->sb_fs_size) {
  if ((VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_8 ? VAR_3 : VAR_3/4))) goto ret;
  VAR_9 = VAR_1 >> 14;
 } else VAR_9 = VAR_6 / 2;
 if (!VAR_8) if (VAR_3 > VAR_7->sb_max_fwd_alloc) VAR_3 = VAR_7->sb_max_fwd_alloc;
 less_fwd:
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  if (VAR_9+VAR_5 < VAR_6 && ((VAR_4 = FUNC_0(VAR_0, (VAR_9+VAR_5) << 14, VAR_2, VAR_3)))) {
   VAR_7->sb_c_bitmap = VAR_9+VAR_5;
   goto ret;
  }
  if (!VAR_3) {
   if (VAR_9-VAR_5-1 >= 0 && ((VAR_4 = FUNC_0(VAR_0, (VAR_9-VAR_5-1) << 14, VAR_2, VAR_3)))) {
    VAR_7->sb_c_bitmap = VAR_9-VAR_5-1;
    goto ret;
   }
  } else {
   if (VAR_9+VAR_5 >= VAR_6 && ((VAR_4 = FUNC_0(VAR_0, (VAR_9+VAR_5-VAR_6) << 14, VAR_2, VAR_3)))) {
    VAR_7->sb_c_bitmap = VAR_9+VAR_5-VAR_6;
    goto ret;
   }
  }
  if (VAR_5 == 1 && VAR_7->sb_c_bitmap != -1 && ((VAR_4 = FUNC_0(VAR_0, (VAR_7->sb_c_bitmap) << 14, VAR_2, VAR_3)))) {
   goto ret;
  }
 }
 if (!VAR_8) {
  if (VAR_3) {
   VAR_7->sb_max_fwd_alloc = VAR_3 * 3 / 4;
   VAR_3 /= 2;
   goto less_fwd;
  }
 }
 VAR_4 = 0;
 ret:
 if (VAR_4) {
  VAR_5 = 0;
  do
   FUNC_2(VAR_0, VAR_4 + VAR_5);
  while (FUNC_5(++VAR_5 < VAR_2));
 }
 if (VAR_4 && VAR_8) {
  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
   if (!FUNC_1(VAR_0, VAR_4 + VAR_2 + VAR_5)) {
    FUNC_3(VAR_0, "Prealloc doesn't work! Wanted %d, allocated at %08x, can't allocate %d", VAR_3, VAR_4, VAR_5);
    VAR_4 = 0;
    break;
   }
  }
 }
 return VAR_4;
}
