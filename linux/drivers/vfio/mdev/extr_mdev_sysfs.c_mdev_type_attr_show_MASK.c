
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdev_type_attribute {int (* show ) (struct kobject*,int ,char*) ;} ;
struct mdev_type {TYPE_1__* parent; } ;
struct kobject {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct kobject*,int ,char*) ;
 struct mdev_type* FUNC_1 (struct kobject*) ;
 struct mdev_type_attribute* FUNC_2 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1,
         struct attribute *VAR_2, char *VAR_3)
{
 struct mdev_type_attribute *VAR_4 = FUNC_2(VAR_2);
 struct mdev_type *VAR_5 = FUNC_1(VAR_1);
 ssize_t VAR_6 = -VAR_0;

 if (VAR_4->show)
  VAR_6 = VAR_4->show(VAR_1, VAR_5->parent->dev, VAR_3);
 return VAR_6;
}
