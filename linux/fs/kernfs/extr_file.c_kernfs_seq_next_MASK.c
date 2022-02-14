
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct kernfs_open_file* private; } ;
struct kernfs_ops {void* (* seq_next ) (struct seq_file*,void*,int *) ;} ;
struct kernfs_open_file {int kn; } ;
typedef int loff_t ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 struct kernfs_ops* FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,void*) ;
 void* FUNC_3 (struct seq_file*,void*,int *) ;

__attribute__((used)) static void *FUNC_4(struct seq_file *VAR_1, void *VAR_2, loff_t *VAR_3)
{
 struct kernfs_open_file *VAR_4 = VAR_1->private;
 const struct kernfs_ops *VAR_5 = FUNC_1(VAR_4->kn);

 if (VAR_5->seq_next) {
  void *VAR_6 = VAR_5->seq_next(VAR_1, VAR_2, VAR_3);

  if (VAR_6 == FUNC_0(-VAR_0))
   FUNC_2(VAR_1, VAR_6);
  return VAR_6;
 } else {




  ++*VAR_3;
  return ((void*)0);
 }
}
