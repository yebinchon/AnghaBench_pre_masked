
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdev_type_attribute {int (* store ) (int *,int ,char const*,size_t) ;} ;
struct mdev_type {TYPE_1__* parent; int kobj; } ;
struct kobject {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char const*,size_t) ;
 struct mdev_type* FUNC_1 (struct kobject*) ;
 struct mdev_type_attribute* FUNC_2 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1,
          struct attribute *VAR_2,
          const char *VAR_3, size_t VAR_4)
{
 struct mdev_type_attribute *VAR_5 = FUNC_2(VAR_2);
 struct mdev_type *VAR_6 = FUNC_1(VAR_1);
 ssize_t VAR_7 = -VAR_0;

 if (VAR_5->store)
  VAR_7 = VAR_5->store(&VAR_6->kobj, VAR_6->parent->dev, VAR_3, VAR_4);
 return VAR_7;
}
