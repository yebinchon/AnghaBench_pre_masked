
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
typedef int ext4_lblk_t ;
typedef int ext4_fsblk_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

int FUNC_3(struct inode *VAR_1, ext4_lblk_t VAR_2, ext4_fsblk_t VAR_3,
         ext4_lblk_t VAR_4)
{
 int VAR_5;

 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);

 VAR_5 = FUNC_2(VAR_1->i_sb, VAR_3, VAR_4, VAR_0);
 if (VAR_5 > 0)
  VAR_5 = 0;

 return VAR_5;
}
