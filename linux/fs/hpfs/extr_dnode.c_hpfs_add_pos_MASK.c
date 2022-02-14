
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct hpfs_inode_info {int ** i_rddir_off; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct hpfs_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int **) ;
 int ** FUNC_2 (int,int,int ) ;
 int FUNC_3 (int **,int **,int) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct inode *VAR_2, loff_t *VAR_3)
{
 struct hpfs_inode_info *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = 0;
 loff_t **VAR_6;

 if (VAR_4->i_rddir_off)
  for (; VAR_4->i_rddir_off[VAR_5]; VAR_5++)
   if (VAR_4->i_rddir_off[VAR_5] == VAR_3)
    return 0;
 if (!(VAR_5&0x0f)) {
  VAR_6 = FUNC_2(VAR_5 + 0x11, sizeof(loff_t *), VAR_1);
  if (!VAR_6) {
   FUNC_4("out of memory for position list\n");
   return -VAR_0;
  }
  if (VAR_4->i_rddir_off) {
   FUNC_3(VAR_6, VAR_4->i_rddir_off, VAR_5 * sizeof(loff_t));
   FUNC_1(VAR_4->i_rddir_off);
  }
  VAR_4->i_rddir_off = VAR_6;
 }
 VAR_4->i_rddir_off[VAR_5] = VAR_3;
 VAR_4->i_rddir_off[VAR_5 + 1] = ((void*)0);
 return 0;
}
