
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct seq_file {struct kernfs_open_file* private; } ;
struct kernfs_open_file {TYPE_4__* kn; int event; } ;
struct TYPE_7__ {TYPE_2__* ops; TYPE_1__* open; } ;
struct TYPE_8__ {TYPE_3__ attr; } ;
struct TYPE_6__ {int (* seq_show ) (struct seq_file*,void*) ;} ;
struct TYPE_5__ {int event; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,void*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct kernfs_open_file *VAR_2 = VAR_0->private;

 VAR_2->event = FUNC_0(&VAR_2->kn->attr.open->event);

 return VAR_2->kn->attr.ops->seq_show(VAR_0, VAR_1);
}
