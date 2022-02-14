
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {unsigned long i_size; struct super_block* i_sb; } ;
struct file {int dummy; } ;
struct cramfs_sb_info {unsigned int linear_phys_addr; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ d_name; } ;


 struct cramfs_sb_info* FUNC_0 (struct super_block*) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned int FUNC_1 (struct inode*,unsigned long,unsigned int*) ;
 TYPE_2__* FUNC_2 (struct file*) ;
 struct inode* FUNC_3 (struct file*) ;
 int FUNC_4 (char*,int ,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_5(struct file *VAR_4,
   unsigned long VAR_5, unsigned long VAR_6,
   unsigned long VAR_7, unsigned long VAR_8)
{
 struct inode *VAR_9 = FUNC_3(VAR_4);
 struct super_block *VAR_10 = VAR_9->i_sb;
 struct cramfs_sb_info *VAR_11 = FUNC_0(VAR_10);
 unsigned int VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_12 = (VAR_6 + VAR_3 - 1) >> VAR_2;
 VAR_14 = (VAR_9->i_size + VAR_3 - 1) >> VAR_2;
 if (VAR_7 >= VAR_14 || VAR_12 > VAR_14 - VAR_7)
  return -VAR_0;
 VAR_13 = VAR_12;
 VAR_15 = FUNC_1(VAR_9, VAR_7, &VAR_13);
 if (!VAR_15 || VAR_13 != VAR_12)
  return -VAR_1;
 VAR_5 = VAR_11->linear_phys_addr + VAR_15;
 FUNC_4("get_unmapped for %s ofs %#lx siz %lu at 0x%08lx\n",
   FUNC_2(VAR_4)->d_name.name, VAR_7*VAR_3, VAR_6, VAR_5);
 return VAR_5;
}
