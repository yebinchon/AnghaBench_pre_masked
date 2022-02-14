
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct msdos_sb_info {int cluster_size; int cluster_bits; } ;
struct inode {int i_blocks; int i_mode; struct super_block* i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 long VAR_0 ;
 int VAR_1 ;
 struct msdos_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;

__attribute__((used)) static long FUNC_7(struct file *VAR_2, int VAR_3,
     loff_t VAR_4, loff_t VAR_5)
{
 int VAR_6;
 loff_t VAR_7;
 loff_t VAR_8;
 struct inode *VAR_9 = VAR_2->f_mapping->host;
 struct super_block *VAR_10 = VAR_9->i_sb;
 struct msdos_sb_info *VAR_11 = FUNC_0(VAR_10);
 int VAR_12 = 0;


 if (VAR_3 & ~VAR_1)
  return -VAR_0;


 if (!FUNC_1(VAR_9->i_mode))
  return -VAR_0;

 FUNC_5(VAR_9);
 if (VAR_3 & VAR_1) {
  VAR_8 = VAR_9->i_blocks << 9;
  if ((VAR_4 + VAR_5) <= VAR_8)
   goto error;


  VAR_7 = VAR_4 + VAR_5 - VAR_8;
  VAR_6 = (VAR_7 + (VAR_11->cluster_size - 1)) >>
   VAR_11->cluster_bits;


  while (VAR_6-- > 0) {
   VAR_12 = FUNC_2(VAR_9);
   if (VAR_12)
    goto error;
  }
 } else {
  if ((VAR_4 + VAR_5) <= FUNC_4(VAR_9))
   goto error;


  VAR_12 = FUNC_3(VAR_9, (VAR_4 + VAR_5));
 }

error:
 FUNC_6(VAR_9);
 return VAR_12;
}
