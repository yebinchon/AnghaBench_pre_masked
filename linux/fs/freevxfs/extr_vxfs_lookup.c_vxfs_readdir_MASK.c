
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct vxfs_sb_info {int dummy; } ;
struct vxfs_direct {char* d_name; int d_reclen; int d_ino; int d_namelen; } ;
struct vxfs_dirblk {int dummy; } ;
struct super_block {int s_blocksize; } ;
struct page {int dummy; } ;
struct inode {int i_mapping; int i_size; struct super_block* i_sb; } ;
struct file {int dummy; } ;
struct dir_context {int pos; } ;
typedef int loff_t ;
struct TYPE_2__ {int vii_dotdot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct vxfs_sb_info*,struct vxfs_dirblk*) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct inode*) ;
 struct vxfs_sb_info* FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct dir_context*,char*,int,int ,int ) ;
 int FUNC_6 (struct file*,struct dir_context*) ;
 struct inode* FUNC_7 (struct file*) ;
 int FUNC_8 (struct vxfs_sb_info*,int ) ;
 int FUNC_9 (struct vxfs_sb_info*,int ) ;
 scalar_t__ FUNC_10 (struct page*) ;
 struct page* FUNC_11 (int ,int) ;
 int FUNC_12 (struct page*) ;

__attribute__((used)) static int
FUNC_13(struct file *VAR_6, struct dir_context *VAR_7)
{
 struct inode *VAR_8 = FUNC_7(VAR_6);
 struct super_block *VAR_9 = VAR_8->i_sb;
 u_long VAR_10 = VAR_9->s_blocksize;
 loff_t VAR_11, VAR_12;
 struct vxfs_sb_info *VAR_13 = FUNC_4(VAR_9);

 if (VAR_7->pos == 0) {
  if (!FUNC_6(VAR_6, VAR_7))
   goto out;
  VAR_7->pos++;
 }
 if (VAR_7->pos == 1) {
  if (!FUNC_5(VAR_7, "..", 2, FUNC_3(VAR_8)->vii_dotdot, VAR_0))
   goto out;
  VAR_7->pos++;
 }

 VAR_12 = FUNC_2(VAR_8->i_size);
 if (VAR_7->pos > VAR_12)
  goto out;

 VAR_11 = VAR_7->pos & ~3L;

 while (VAR_11 < VAR_12) {
  struct page *VAR_14;
  char *VAR_15;
  int VAR_16 = VAR_11 & ~VAR_3;
  int VAR_17 = 0;

  VAR_14 = FUNC_11(VAR_8->i_mapping, VAR_11 >> VAR_4);
  if (FUNC_0(VAR_14))
   return -VAR_2;

  VAR_15 = (char *)FUNC_10(VAR_14);

  while (VAR_16 < VAR_5 && VAR_11 < VAR_12) {
   struct vxfs_direct *VAR_18;

   if ((VAR_11 & (VAR_10 - 1)) < 4) {
    struct vxfs_dirblk *VAR_19 =
     (struct vxfs_dirblk *)
      (VAR_15 + (VAR_11 & ~VAR_3));
    int VAR_20 = FUNC_1(VAR_13, VAR_19);

    VAR_11 += VAR_20;
    VAR_16 += VAR_20;
   }
   VAR_18 = (struct vxfs_direct *)(VAR_15 + VAR_16);

   if (!VAR_18->d_reclen) {
    VAR_11 += VAR_10 - 1;
    VAR_11 &= ~(VAR_10 - 1);
    break;
   }

   VAR_16 += FUNC_8(VAR_13, VAR_18->d_reclen);
   VAR_11 += FUNC_8(VAR_13, VAR_18->d_reclen);
   if (!VAR_18->d_ino)
    continue;

   VAR_17 = FUNC_5(VAR_7, VAR_18->d_name,
     FUNC_8(VAR_13, VAR_18->d_namelen),
     FUNC_9(VAR_13, VAR_18->d_ino),
     VAR_1);
   if (!VAR_17) {

    VAR_11 -= FUNC_8(VAR_13, VAR_18->d_reclen);
    break;
   }
  }
  FUNC_12(VAR_14);
  if (!VAR_17)
   break;
 }

 VAR_7->pos = VAR_11 | 2;

out:
 return 0;
}
