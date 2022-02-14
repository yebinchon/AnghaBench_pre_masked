
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kobject {struct kernfs_node* sd; } ;
struct TYPE_4__ {TYPE_1__* target_kn; } ;
struct kernfs_node {void* ns; TYPE_2__ symlink; } ;
struct TYPE_3__ {struct kobject* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct kernfs_node* FUNC_0 (struct kernfs_node*,char const*,void const*) ;
 int FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (struct kernfs_node*,struct kernfs_node*,char const*,void const*) ;
 scalar_t__ FUNC_3 (struct kernfs_node*) ;
 struct kernfs_node* VAR_3 ;

int FUNC_4(struct kobject *VAR_4, struct kobject *VAR_5,
    const char *VAR_6, const char *VAR_7, const void *VAR_8)
{
 struct kernfs_node *VAR_9, *VAR_10 = ((void*)0);
 const void *VAR_11 = ((void*)0);
 int VAR_12;

 if (!VAR_4)
  VAR_9 = VAR_3;
 else
  VAR_9 = VAR_4->sd;

 if (VAR_5->sd)
  VAR_11 = VAR_5->sd->ns;

 VAR_12 = -VAR_1;
 VAR_10 = FUNC_0(VAR_9, VAR_6, VAR_11);
 if (!VAR_10)
  goto out;

 VAR_12 = -VAR_0;
 if (FUNC_3(VAR_10) != VAR_2)
  goto out;
 if (VAR_10->symlink.target_kn->priv != VAR_5)
  goto out;

 VAR_12 = FUNC_2(VAR_10, VAR_9, VAR_7, VAR_8);

out:
 FUNC_1(VAR_10);
 return VAR_12;
}
