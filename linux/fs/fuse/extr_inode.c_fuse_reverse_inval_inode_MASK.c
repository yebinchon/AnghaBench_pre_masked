
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {int dummy; } ;
struct inode {int i_mapping; } ;
typedef int pgoff_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct super_block*,int ,int ,int *) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (struct inode*) ;

int FUNC_5(struct super_block *VAR_3, u64 VAR_4,
        loff_t VAR_5, loff_t VAR_6)
{
 struct inode *VAR_7;
 pgoff_t VAR_8;
 pgoff_t VAR_9;

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_2, &VAR_4);
 if (!VAR_7)
  return -VAR_0;

 FUNC_1(VAR_7);
 FUNC_0(VAR_7);
 if (VAR_5 >= 0) {
  VAR_8 = VAR_5 >> VAR_1;
  if (VAR_6 <= 0)
   VAR_9 = -1;
  else
   VAR_9 = (VAR_5 + VAR_6 - 1) >> VAR_1;
  FUNC_3(VAR_7->i_mapping,
           VAR_8, VAR_9);
 }
 FUNC_4(VAR_7);
 return 0;
}
