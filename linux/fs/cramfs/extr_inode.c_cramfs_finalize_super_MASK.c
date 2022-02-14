
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_root; int * s_op; scalar_t__ s_time_max; scalar_t__ s_time_min; int s_flags; } ;
struct inode {int dummy; } ;
struct cramfs_inode {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct super_block*,struct cramfs_inode*,int ) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_3,
     struct cramfs_inode *VAR_4)
{
 struct inode *VAR_5;


 VAR_3->s_flags |= VAR_1;
 VAR_3->s_time_min = 0;
 VAR_3->s_time_max = 0;
 VAR_3->s_op = &VAR_2;
 VAR_5 = FUNC_3(VAR_3, VAR_4, 0);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 VAR_3->s_root = FUNC_2(VAR_5);
 if (!VAR_3->s_root)
  return -VAR_0;
 return 0;
}
