
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kernfs_node {scalar_t__ ns; struct kernfs_node* parent; int name; } ;
struct TYPE_3__ {int name; } ;
struct dentry {int d_sb; TYPE_1__ d_name; struct dentry* d_parent; } ;
struct TYPE_4__ {scalar_t__ ns; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct kernfs_node*) ;
 struct kernfs_node* FUNC_2 (struct dentry*) ;
 TYPE_2__* FUNC_3 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct kernfs_node*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct dentry *VAR_3, unsigned int VAR_4)
{
 struct kernfs_node *VAR_5;

 if (VAR_4 & VAR_1)
  return -VAR_0;


 if (FUNC_0(VAR_3))
  goto out_bad_unlocked;

 VAR_5 = FUNC_2(VAR_3);
 FUNC_5(&VAR_2);


 if (!FUNC_1(VAR_5))
  goto out_bad;


 if (FUNC_2(VAR_3->d_parent) != VAR_5->parent)
  goto out_bad;


 if (FUNC_7(VAR_3->d_name.name, VAR_5->name) != 0)
  goto out_bad;


 if (VAR_5->parent && FUNC_4(VAR_5->parent) &&
     FUNC_3(VAR_3->d_sb)->ns != VAR_5->ns)
  goto out_bad;

 FUNC_6(&VAR_2);
 return 1;
out_bad:
 FUNC_6(&VAR_2);
out_bad_unlocked:
 return 0;
}
