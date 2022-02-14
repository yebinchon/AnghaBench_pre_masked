
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {int ino; } ;
struct kernfs_node {TYPE_1__ id; } ;
struct inode {int i_state; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct super_block*,int ) ;
 int FUNC_1 (struct kernfs_node*,struct inode*) ;

struct inode *FUNC_2(struct super_block *VAR_1, struct kernfs_node *VAR_2)
{
 struct inode *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2->id.ino);
 if (VAR_3 && (VAR_3->i_state & VAR_0))
  FUNC_1(VAR_2, VAR_3);

 return VAR_3;
}
