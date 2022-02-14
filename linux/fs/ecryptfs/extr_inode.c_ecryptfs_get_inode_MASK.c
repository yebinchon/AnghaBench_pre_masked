
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_state; } ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 struct inode* FUNC_1 (struct inode*,struct super_block*) ;
 int FUNC_2 (struct inode*) ;

struct inode *FUNC_3(struct inode *VAR_1,
     struct super_block *VAR_2)
{
 struct inode *VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (!FUNC_0(VAR_3) && (VAR_3->i_state & VAR_0))
  FUNC_2(VAR_3);

 return VAR_3;
}
