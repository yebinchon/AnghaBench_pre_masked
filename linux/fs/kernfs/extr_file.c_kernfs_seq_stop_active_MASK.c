
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct kernfs_open_file* private; } ;
struct kernfs_ops {int (* seq_stop ) (struct seq_file*,void*) ;} ;
struct kernfs_open_file {int kn; } ;


 struct kernfs_ops* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,void*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct kernfs_open_file *VAR_2 = VAR_0->private;
 const struct kernfs_ops *VAR_3 = FUNC_0(VAR_2->kn);

 if (VAR_3->seq_stop)
  VAR_3->seq_stop(VAR_0, VAR_1);
 FUNC_1(VAR_2->kn);
}
