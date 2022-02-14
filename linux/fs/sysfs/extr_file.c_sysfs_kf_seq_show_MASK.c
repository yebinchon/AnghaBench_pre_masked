
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysfs_ops {int (* show ) (struct kobject*,int ,char*) ;} ;
struct seq_file {struct kernfs_open_file* private; } ;
struct kobject {int dummy; } ;
struct kernfs_open_file {TYPE_2__* kn; } ;
typedef int ssize_t ;
struct TYPE_4__ {int priv; TYPE_1__* parent; } ;
struct TYPE_3__ {struct kobject* priv; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int (*) (struct kobject*,int ,char*)) ;
 int FUNC_2 (struct seq_file*,int) ;
 int FUNC_3 (struct seq_file*,char**) ;
 int FUNC_4 (struct kobject*,int ,char*) ;
 struct sysfs_ops* FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_1, void *VAR_2)
{
 struct kernfs_open_file *VAR_3 = VAR_1->private;
 struct kobject *VAR_4 = VAR_3->kn->parent->priv;
 const struct sysfs_ops *VAR_5 = FUNC_5(VAR_3->kn);
 ssize_t VAR_6;
 char *VAR_7;


 VAR_6 = FUNC_3(VAR_1, &VAR_7);
 if (VAR_6 < VAR_0) {
  FUNC_2(VAR_1, -1);
  return 0;
 }
 FUNC_0(VAR_7, 0, VAR_0);





 if (VAR_5->show) {
  VAR_6 = VAR_5->show(VAR_4, VAR_3->kn->priv, VAR_7);
  if (VAR_6 < 0)
   return VAR_6;
 }





 if (VAR_6 >= (ssize_t)VAR_0) {
  FUNC_1("fill_read_buffer: %pS returned bad count\n",
    VAR_5->show);

  VAR_6 = VAR_0 - 1;
 }
 FUNC_2(VAR_1, VAR_6);
 return 0;
}
