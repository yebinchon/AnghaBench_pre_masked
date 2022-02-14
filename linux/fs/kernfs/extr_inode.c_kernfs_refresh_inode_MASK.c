
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ subdirs; } ;
struct kernfs_node {TYPE_1__ dir; int mode; struct kernfs_iattrs* iattr; } ;
struct kernfs_iattrs {int dummy; } ;
struct inode {int i_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct kernfs_node*) ;
 int FUNC_1 (struct inode*,struct kernfs_iattrs*) ;
 int FUNC_2 (struct inode*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct kernfs_node *VAR_1, struct inode *VAR_2)
{
 struct kernfs_iattrs *VAR_3 = VAR_1->iattr;

 VAR_2->i_mode = VAR_1->mode;
 if (VAR_3)




  FUNC_1(VAR_2, VAR_3);

 if (FUNC_0(VAR_1) == VAR_0)
  FUNC_2(VAR_2, VAR_1->dir.subdirs + 2);
}
