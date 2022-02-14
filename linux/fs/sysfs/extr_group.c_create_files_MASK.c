
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct kobject {int dummy; } ;
struct kernfs_node {int dummy; } ;
struct attribute {int mode; int name; } ;
struct bin_attribute {struct attribute attr; } ;
struct attribute_group {int (* is_visible ) (struct kobject*,struct attribute* const,int) ;int (* is_bin_visible ) (struct kobject*,struct bin_attribute* const,int) ;struct bin_attribute** bin_attrs; struct attribute** attrs; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int) ;
 int FUNC_1 (struct kernfs_node*,int ) ;
 int FUNC_2 (struct kernfs_node*,struct attribute_group const*) ;
 int FUNC_3 (struct kobject*,struct attribute* const,int) ;
 int FUNC_4 (struct kobject*,struct bin_attribute* const,int) ;
 int FUNC_5 (struct kernfs_node*,struct attribute* const,int,int,int ,int ,int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct kernfs_node *VAR_1, struct kobject *VAR_2,
   kuid_t VAR_3, kgid_t VAR_4,
   const struct attribute_group *VAR_5, int VAR_6)
{
 struct attribute *const *VAR_7;
 struct bin_attribute *const *VAR_8;
 int VAR_9 = 0, VAR_10;

 if (VAR_5->attrs) {
  for (VAR_10 = 0, VAR_7 = VAR_5->attrs; *VAR_7 && !VAR_9; VAR_10++, VAR_7++) {
   umode_t VAR_11 = (*VAR_7)->mode;






   if (VAR_6)
    FUNC_1(VAR_1, (*VAR_7)->name);
   if (VAR_5->is_visible) {
    VAR_11 = VAR_5->is_visible(VAR_2, *VAR_7, VAR_10);
    if (!VAR_11)
     continue;
   }

   FUNC_0(VAR_11 & ~(VAR_0 | 0664),
        "Attribute %s: Invalid permissions 0%o\n",
        (*VAR_7)->name, VAR_11);

   VAR_11 &= VAR_0 | 0664;
   VAR_9 = FUNC_5(VAR_1, *VAR_7, 0,
             VAR_11, VAR_3, VAR_4, ((void*)0));
   if (FUNC_6(VAR_9))
    break;
  }
  if (VAR_9) {
   FUNC_2(VAR_1, VAR_5);
   goto exit;
  }
 }

 if (VAR_5->bin_attrs) {
  for (VAR_10 = 0, VAR_8 = VAR_5->bin_attrs; *VAR_8; VAR_10++, VAR_8++) {
   umode_t VAR_12 = (*VAR_8)->attr.mode;

   if (VAR_6)
    FUNC_1(VAR_1,
      (*VAR_8)->attr.name);
   if (VAR_5->is_bin_visible) {
    VAR_12 = VAR_5->is_bin_visible(VAR_2, *VAR_8, VAR_10);
    if (!VAR_12)
     continue;
   }

   FUNC_0(VAR_12 & ~(VAR_0 | 0664),
        "Attribute %s: Invalid permissions 0%o\n",
        (*VAR_8)->attr.name, VAR_12);

   VAR_12 &= VAR_0 | 0664;
   VAR_9 = FUNC_5(VAR_1,
     &(*VAR_8)->attr, 1,
     VAR_12,
     VAR_3, VAR_4, ((void*)0));
   if (VAR_9)
    break;
  }
  if (VAR_9)
   FUNC_2(VAR_1, VAR_5);
 }
exit:
 return VAR_9;
}
