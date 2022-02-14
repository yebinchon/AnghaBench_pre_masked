
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysfs_ops {int (* store ) (struct kobject*,int ,char*,size_t) ;} ;
struct kobject {int dummy; } ;
struct kernfs_open_file {TYPE_2__* kn; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_4__ {int priv; TYPE_1__* parent; } ;
struct TYPE_3__ {struct kobject* priv; } ;


 int FUNC_0 (struct kobject*,int ,char*,size_t) ;
 struct sysfs_ops* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static ssize_t FUNC_2(struct kernfs_open_file *VAR_0, char *VAR_1,
         size_t VAR_2, loff_t VAR_3)
{
 const struct sysfs_ops *VAR_4 = FUNC_1(VAR_0->kn);
 struct kobject *VAR_5 = VAR_0->kn->parent->priv;

 if (!VAR_2)
  return 0;

 return VAR_4->store(VAR_5, VAR_0->kn->priv, VAR_1, VAR_2);
}
