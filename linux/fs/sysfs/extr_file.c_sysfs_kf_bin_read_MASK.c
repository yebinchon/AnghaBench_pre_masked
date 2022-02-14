
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kernfs_open_file {int file; TYPE_2__* kn; } ;
struct bin_attribute {int (* read ) (int ,struct kobject*,struct bin_attribute*,char*,scalar_t__,size_t) ;} ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_6__ {scalar_t__ i_size; } ;
struct TYPE_5__ {TYPE_1__* parent; struct bin_attribute* priv; } ;
struct TYPE_4__ {struct kobject* priv; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct kobject*,struct bin_attribute*,char*,scalar_t__,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(struct kernfs_open_file *VAR_1, char *VAR_2,
     size_t VAR_3, loff_t VAR_4)
{
 struct bin_attribute *VAR_5 = VAR_1->kn->priv;
 struct kobject *VAR_6 = VAR_1->kn->parent->priv;
 loff_t VAR_7 = FUNC_0(VAR_1->file)->i_size;

 if (!VAR_3)
  return 0;

 if (VAR_7) {
  if (VAR_4 >= VAR_7)
   return 0;
  if (VAR_4 + VAR_3 > VAR_7)
   VAR_3 = VAR_7 - VAR_4;
 }

 if (!VAR_5->read)
  return -VAR_0;

 return VAR_5->read(VAR_1->file, VAR_6, VAR_5, VAR_2, VAR_4, VAR_3);
}
