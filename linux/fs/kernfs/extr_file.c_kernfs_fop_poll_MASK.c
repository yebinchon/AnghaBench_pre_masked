
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kernfs_open_file {int dummy; } ;
struct TYPE_5__ {TYPE_3__* ops; } ;
struct kernfs_node {TYPE_2__ attr; } ;
struct TYPE_4__ {int dentry; } ;
struct file {TYPE_1__ f_path; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_6__ {int (* poll ) (struct kernfs_open_file*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct kernfs_node* FUNC_0 (int ) ;
 int FUNC_1 (struct kernfs_open_file*,int *) ;
 int FUNC_2 (struct kernfs_node*) ;
 struct kernfs_open_file* FUNC_3 (struct file*) ;
 int FUNC_4 (struct kernfs_node*) ;
 int FUNC_5 (struct kernfs_open_file*,int *) ;

__attribute__((used)) static __poll_t FUNC_6(struct file *VAR_3, poll_table *VAR_4)
{
 struct kernfs_open_file *VAR_5 = FUNC_3(VAR_3);
 struct kernfs_node *VAR_6 = FUNC_0(VAR_3->f_path.dentry);
 __poll_t VAR_7;

 if (!FUNC_2(VAR_6))
  return VAR_0|VAR_1|VAR_2;

 if (VAR_6->attr.ops->poll)
  VAR_7 = VAR_6->attr.ops->poll(VAR_5, VAR_4);
 else
  VAR_7 = FUNC_1(VAR_5, VAR_4);

 FUNC_4(VAR_6);
 return VAR_7;
}
