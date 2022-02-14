
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; int i_sb; } ;
struct ext2_group_desc {int bg_inode_table; } ;
struct backing_dev_info {int dummy; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct backing_dev_info*) ;
 struct ext2_group_desc* FUNC_4 (int ,unsigned long,int *) ;
 struct backing_dev_info* FUNC_5 (struct inode*) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct inode *VAR_0)
{
 unsigned long VAR_1;
 unsigned long VAR_2;
 unsigned long VAR_3;
 struct ext2_group_desc * VAR_4;
 struct backing_dev_info *VAR_5;

 VAR_5 = FUNC_5(VAR_0);
 if (FUNC_3(VAR_5))
  return;

 VAR_1 = (VAR_0->i_ino - 1) / FUNC_1(VAR_0->i_sb);
 VAR_4 = FUNC_4(VAR_0->i_sb, VAR_1, ((void*)0));
 if (VAR_4 == ((void*)0))
  return;




 VAR_2 = ((VAR_0->i_ino - 1) % FUNC_1(VAR_0->i_sb)) *
    FUNC_2(VAR_0->i_sb);
 VAR_3 = FUNC_6(VAR_4->bg_inode_table) +
    (VAR_2 >> FUNC_0(VAR_0->i_sb));
 FUNC_7(VAR_0->i_sb, VAR_3);
}
