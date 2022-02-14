
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {struct kernfs_node* sd; TYPE_1__* parent; } ;
struct kernfs_node {int dummy; } ;
typedef int kuid_t ;
typedef int kgid_t ;
struct TYPE_2__ {struct kernfs_node* sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct kernfs_node*) ;
 int FUNC_1 (struct kernfs_node*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 struct kernfs_node* FUNC_3 (struct kernfs_node*,int ,int,int ,int ,struct kobject*,void const*) ;
 int FUNC_4 (struct kobject*,int *,int *) ;
 int FUNC_5 (struct kobject*) ;
 struct kernfs_node* VAR_6 ;
 int FUNC_6 (struct kernfs_node*,int ) ;

int FUNC_7(struct kobject *VAR_7, const void *VAR_8)
{
 struct kernfs_node *VAR_9, *VAR_10;
 kuid_t VAR_11;
 kgid_t VAR_12;

 if (FUNC_2(!VAR_7))
  return -VAR_1;

 if (VAR_7->parent)
  VAR_9 = VAR_7->parent->sd;
 else
  VAR_9 = VAR_6;

 if (!VAR_9)
  return -VAR_2;

 FUNC_4(VAR_7, &VAR_11, &VAR_12);

 VAR_10 = FUNC_3(VAR_9, FUNC_5(VAR_7),
      VAR_4 | VAR_3 | VAR_5, VAR_11, VAR_12,
      VAR_7, VAR_8);
 if (FUNC_0(VAR_10)) {
  if (FUNC_1(VAR_10) == -VAR_0)
   FUNC_6(VAR_9, FUNC_5(VAR_7));
  return FUNC_1(VAR_10);
 }

 VAR_7->sd = VAR_10;
 return 0;
}
