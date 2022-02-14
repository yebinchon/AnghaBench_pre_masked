
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kernfs_open_node {int event; int poll; } ;
struct kernfs_open_file {scalar_t__ event; TYPE_3__* file; } ;
struct TYPE_5__ {struct kernfs_open_node* open; } ;
struct kernfs_node {TYPE_2__ attr; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_4__ {int dentry; } ;
struct TYPE_6__ {TYPE_1__ f_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 struct kernfs_node* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int *,int *) ;

__poll_t FUNC_3(struct kernfs_open_file *VAR_3, poll_table *VAR_4)
{
 struct kernfs_node *VAR_5 = FUNC_1(VAR_3->file->f_path.dentry);
 struct kernfs_open_node *VAR_6 = VAR_5->attr.open;

 FUNC_2(VAR_3->file, &VAR_6->poll, VAR_4);

 if (VAR_3->event != FUNC_0(&VAR_6->event))
  return VAR_0|VAR_1|VAR_2;

 return VAR_0;
}
