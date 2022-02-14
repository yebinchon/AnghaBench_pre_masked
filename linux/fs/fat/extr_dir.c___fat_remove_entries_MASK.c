
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {scalar_t__ s_blocksize; } ;
struct msdos_dir_entry {int * name; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct inode*,int*,struct buffer_head**,struct msdos_dir_entry**) ;
 int FUNC_3 (struct buffer_head*,struct inode*) ;
 int FUNC_4 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, loff_t VAR_3, int VAR_4)
{
 struct super_block *VAR_5 = VAR_2->i_sb;
 struct buffer_head *VAR_6;
 struct msdos_dir_entry *VAR_7, *VAR_8;
 int VAR_9 = 0, VAR_10;

 while (VAR_4) {
  VAR_6 = ((void*)0);
  if (FUNC_2(VAR_2, &VAR_3, &VAR_6, &VAR_7) < 0) {
   VAR_9 = -VAR_1;
   break;
  }

  VAR_10 = VAR_4;
  VAR_8 = (struct msdos_dir_entry *)(VAR_6->b_data + VAR_5->s_blocksize);
  while (VAR_4 && VAR_7 < VAR_8) {
   VAR_7->name[0] = VAR_0;
   VAR_7++;
   VAR_4--;
  }
  FUNC_3(VAR_6, VAR_2);
  if (FUNC_0(VAR_2))
   VAR_9 = FUNC_4(VAR_6);
  FUNC_1(VAR_6);
  if (VAR_9)
   break;


  VAR_3 += ((VAR_10 - VAR_4) * sizeof(*VAR_7)) - sizeof(*VAR_7);
 }

 return VAR_9;
}
