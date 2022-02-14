
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_open_file {struct kernfs_open_file* prealloc_buf; } ;
struct kernfs_node {int flags; } ;
struct inode {struct kernfs_node* i_private; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct kernfs_open_file* FUNC_0 (struct file*) ;
 int VAR_1 ;
 int FUNC_1 (struct kernfs_node*,struct kernfs_open_file*) ;
 int FUNC_2 (struct kernfs_node*,struct kernfs_open_file*) ;
 int FUNC_3 (struct kernfs_open_file*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_2, struct file *VAR_3)
{
 struct kernfs_node *VAR_4 = VAR_2->i_private;
 struct kernfs_open_file *VAR_5 = FUNC_0(VAR_3);

 if (VAR_4->flags & VAR_0) {
  FUNC_4(&VAR_1);
  FUNC_2(VAR_4, VAR_5);
  FUNC_5(&VAR_1);
 }

 FUNC_1(VAR_4, VAR_5);
 FUNC_6(VAR_2, VAR_3);
 FUNC_3(VAR_5->prealloc_buf);
 FUNC_3(VAR_5);

 return 0;
}
