
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdos_sb_info {int dummy; } ;
struct inode {int i_generation; int i_sb; } ;
struct fat_fid {int i_pos_low; int i_pos_hi; int parent_i_pos_hi; int parent_i_pos_low; int parent_i_gen; int i_gen; } ;
typedef int loff_t ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct msdos_sb_info* FUNC_0 (int ) ;
 int FUNC_1 (struct msdos_sb_info*,struct inode*) ;

__attribute__((used)) static int
FUNC_2(struct inode *VAR_5, __u32 *VAR_6, int *VAR_7,
        struct inode *VAR_8)
{
 int VAR_9 = *VAR_7;
 struct msdos_sb_info *VAR_10 = FUNC_0(VAR_5->i_sb);
 struct fat_fid *VAR_11 = (struct fat_fid *) VAR_6;
 loff_t VAR_12;
 int VAR_13 = VAR_2;

 if (VAR_8) {
  if (VAR_9 < VAR_1) {
   *VAR_7 = VAR_1;
   return VAR_4;
  }
 } else {
  if (VAR_9 < VAR_0) {
   *VAR_7 = VAR_0;
   return VAR_4;
  }
 }

 VAR_12 = FUNC_1(VAR_10, VAR_5);
 *VAR_7 = VAR_0;
 VAR_11->i_gen = VAR_5->i_generation;
 VAR_11->i_pos_low = VAR_12 & 0xFFFFFFFF;
 VAR_11->i_pos_hi = (VAR_12 >> 32) & 0xFFFF;
 if (VAR_8) {
  VAR_12 = FUNC_1(VAR_10, VAR_8);
  VAR_11->parent_i_pos_hi = (VAR_12 >> 32) & 0xFFFF;
  VAR_11->parent_i_pos_low = VAR_12 & 0xFFFFFFFF;
  VAR_11->parent_i_gen = VAR_8->i_generation;
  VAR_13 = VAR_3;
  *VAR_7 = VAR_1;
 }

 return VAR_13;
}
