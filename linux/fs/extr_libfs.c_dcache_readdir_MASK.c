
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_5__ {struct dentry* dentry; } ;
struct file {struct dentry* private_data; TYPE_1__ f_path; } ;
struct dir_context {int pos; } ;
struct TYPE_6__ {int len; int name; } ;
struct dentry {int d_lock; struct list_head d_child; TYPE_2__ d_name; struct list_head d_subdirs; } ;
struct TYPE_7__ {int i_ino; } ;


 TYPE_3__* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dir_context*,int ,int ,int ,int ) ;
 int FUNC_2 (struct file*,struct dir_context*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct list_head*) ;
 int FUNC_6 (struct list_head*) ;
 int FUNC_7 (struct list_head*,struct list_head*) ;
 struct dentry* FUNC_8 (struct dentry*,struct list_head*,int,struct dentry*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct file *VAR_0, struct dir_context *VAR_1)
{
 struct dentry *VAR_2 = VAR_0->f_path.dentry;
 struct dentry *VAR_3 = VAR_0->private_data;
 struct list_head *VAR_4 = &VAR_2->d_subdirs;
 struct dentry *VAR_5 = ((void*)0);
 struct list_head *VAR_6;

 if (!FUNC_2(VAR_0, VAR_1))
  return 0;

 if (VAR_1->pos == 2)
  VAR_6 = VAR_4;
 else if (!FUNC_6(&VAR_3->d_child))
  VAR_6 = &VAR_3->d_child;
 else
  return 0;

 while ((VAR_5 = FUNC_8(VAR_3, VAR_6, 1, VAR_5)) != ((void*)0)) {
  if (!FUNC_1(VAR_1, VAR_5->d_name.name, VAR_5->d_name.len,
         FUNC_0(VAR_5)->i_ino, FUNC_4(FUNC_0(VAR_5))))
   break;
  VAR_1->pos++;
  VAR_6 = &VAR_5->d_child;
 }
 FUNC_9(&VAR_2->d_lock);
 if (VAR_5)
  FUNC_7(&VAR_3->d_child, &VAR_5->d_child);
 else
  FUNC_5(&VAR_3->d_child);
 FUNC_10(&VAR_2->d_lock);
 FUNC_3(VAR_5);

 return 0;
}
