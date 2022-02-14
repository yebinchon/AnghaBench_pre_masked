
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {struct kernfs_node* sd; int name; } ;
struct kernfs_node {int dummy; } ;
struct attribute_group {scalar_t__ name; int bin_attrs; int attrs; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kernfs_node*) ;
 int FUNC_1 (struct kernfs_node*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,char*,int ,char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct kernfs_node*,struct kobject*,int ,int ,struct attribute_group const*,int) ;
 struct kernfs_node* FUNC_5 (struct kernfs_node*,scalar_t__,int,int ,int ,struct kobject*,int *) ;
 struct kernfs_node* FUNC_6 (struct kernfs_node*,scalar_t__) ;
 int FUNC_7 (struct kernfs_node*) ;
 int FUNC_8 (struct kernfs_node*) ;
 int FUNC_9 (struct kernfs_node*) ;
 int FUNC_10 (struct kobject*,int *,int *) ;
 int FUNC_11 (char*,int ,scalar_t__) ;
 int FUNC_12 (struct kernfs_node*,scalar_t__) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct kobject *VAR_5, int VAR_6,
     const struct attribute_group *VAR_7)
{
 struct kernfs_node *VAR_8;
 kuid_t VAR_9;
 kgid_t VAR_10;
 int VAR_11;

 if (FUNC_3(!VAR_5 || (!VAR_6 && !VAR_5->sd)))
  return -VAR_1;


 if (FUNC_13(VAR_6 && !VAR_5->sd))
  return -VAR_1;
 if (!VAR_7->attrs && !VAR_7->bin_attrs) {
  FUNC_2(1, "sysfs: (bin_)attrs not set by subsystem for group: %s/%s\n",
   VAR_5->name, VAR_7->name ?: "");
  return -VAR_1;
 }
 FUNC_10(VAR_5, &VAR_9, &VAR_10);
 if (VAR_7->name) {
  if (VAR_6) {
   VAR_8 = FUNC_6(VAR_5->sd, VAR_7->name);
   if (!VAR_8) {
    FUNC_11("Can't update unknown attr grp name: %s/%s\n",
     VAR_5->name, VAR_7->name);
    return -VAR_1;
   }
  } else {
   VAR_8 = FUNC_5(VAR_5->sd, VAR_7->name,
        VAR_3 | VAR_2 | VAR_4,
        VAR_9, VAR_10, VAR_5, ((void*)0));
   if (FUNC_0(VAR_8)) {
    if (FUNC_1(VAR_8) == -VAR_0)
     FUNC_12(VAR_5->sd, VAR_7->name);
    return FUNC_1(VAR_8);
   }
  }
 } else
  VAR_8 = VAR_5->sd;
 FUNC_7(VAR_8);
 VAR_11 = FUNC_4(VAR_8, VAR_5, VAR_9, VAR_10, VAR_7, VAR_6);
 if (VAR_11) {
  if (VAR_7->name)
   FUNC_9(VAR_8);
 }
 FUNC_8(VAR_8);

 if (VAR_7->name && VAR_6)
  FUNC_8(VAR_8);

 return VAR_11;
}
