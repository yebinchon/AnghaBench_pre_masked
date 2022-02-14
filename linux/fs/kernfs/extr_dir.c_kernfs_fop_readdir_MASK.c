
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ino; } ;
struct kernfs_node {char* name; int hash; TYPE_2__ id; } ;
struct TYPE_4__ {struct dentry* dentry; } ;
struct file {struct kernfs_node* private_data; TYPE_1__ f_path; } ;
struct dir_context {int pos; } ;
struct dentry {int d_sb; } ;
typedef int ino_t ;
struct TYPE_6__ {void* ns; } ;


 int VAR_0 ;
 int FUNC_0 (struct dir_context*,char const*,int,int ,unsigned int) ;
 int FUNC_1 (struct file*,struct dir_context*) ;
 unsigned int FUNC_2 (struct kernfs_node*) ;
 struct kernfs_node* FUNC_3 (struct dentry*) ;
 struct kernfs_node* FUNC_4 (void const*,struct kernfs_node*,int ,struct kernfs_node*) ;
 struct kernfs_node* FUNC_5 (void const*,struct kernfs_node*,int ,struct kernfs_node*) ;
 int FUNC_6 (struct kernfs_node*) ;
 TYPE_3__* FUNC_7 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (struct kernfs_node*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static int FUNC_12(struct file *VAR_2, struct dir_context *VAR_3)
{
 struct dentry *VAR_4 = VAR_2->f_path.dentry;
 struct kernfs_node *VAR_5 = FUNC_3(VAR_4);
 struct kernfs_node *VAR_6 = VAR_2->private_data;
 const void *VAR_7 = ((void*)0);

 if (!FUNC_1(VAR_2, VAR_3))
  return 0;
 FUNC_9(&VAR_1);

 if (FUNC_8(VAR_5))
  VAR_7 = FUNC_7(VAR_4->d_sb)->ns;

 for (VAR_6 = FUNC_5(VAR_7, VAR_5, VAR_3->pos, VAR_6);
      VAR_6;
      VAR_6 = FUNC_4(VAR_7, VAR_5, VAR_3->pos, VAR_6)) {
  const char *VAR_8 = VAR_6->name;
  unsigned int VAR_9 = FUNC_2(VAR_6);
  int VAR_10 = FUNC_11(VAR_8);
  ino_t VAR_11 = VAR_6->id.ino;

  VAR_3->pos = VAR_6->hash;
  VAR_2->private_data = VAR_6;
  FUNC_6(VAR_6);

  FUNC_10(&VAR_1);
  if (!FUNC_0(VAR_3, VAR_8, VAR_10, VAR_11, VAR_9))
   return 0;
  FUNC_9(&VAR_1);
 }
 FUNC_10(&VAR_1);
 VAR_2->private_data = ((void*)0);
 VAR_3->pos = VAR_0;
 return 0;
}
