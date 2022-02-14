
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct kobject {int sd; } ;
struct kernfs_node {int mode; } ;
struct iattr {int ia_mode; int ia_valid; } ;
struct attribute {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct kernfs_node* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (struct kernfs_node*,struct iattr*) ;

int FUNC_3(struct kobject *VAR_3, const struct attribute *VAR_4,
       umode_t VAR_5)
{
 struct kernfs_node *VAR_6;
 struct iattr VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_3->sd, VAR_4->name);
 if (!VAR_6)
  return -VAR_1;

 VAR_7.ia_mode = (VAR_5 & VAR_2) | (VAR_6->mode & ~VAR_2);
 VAR_7.ia_valid = VAR_0;

 VAR_8 = FUNC_2(VAR_6, &VAR_7);

 FUNC_1(VAR_6);
 return VAR_8;
}
