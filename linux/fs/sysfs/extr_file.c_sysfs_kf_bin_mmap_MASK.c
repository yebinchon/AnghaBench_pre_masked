
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct kobject {int dummy; } ;
struct kernfs_open_file {int file; TYPE_2__* kn; } ;
struct bin_attribute {int (* mmap ) (int ,struct kobject*,struct bin_attribute*,struct vm_area_struct*) ;} ;
struct TYPE_4__ {TYPE_1__* parent; struct bin_attribute* priv; } ;
struct TYPE_3__ {struct kobject* priv; } ;


 int FUNC_0 (int ,struct kobject*,struct bin_attribute*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_1(struct kernfs_open_file *VAR_0,
        struct vm_area_struct *VAR_1)
{
 struct bin_attribute *VAR_2 = VAR_0->kn->priv;
 struct kobject *VAR_3 = VAR_0->kn->parent->priv;

 return VAR_2->mmap(VAR_0->file, VAR_3, VAR_2, VAR_1);
}
