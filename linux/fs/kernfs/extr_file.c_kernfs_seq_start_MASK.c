
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct kernfs_open_file* private; } ;
struct kernfs_ops {void* (* seq_start ) (struct seq_file*,int *) ;} ;
struct kernfs_open_file {int kn; int mutex; } ;
typedef int loff_t ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct kernfs_ops* FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,void*) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (struct seq_file*,int *) ;

__attribute__((used)) static void *FUNC_6(struct seq_file *VAR_1, loff_t *VAR_2)
{
 struct kernfs_open_file *VAR_3 = VAR_1->private;
 const struct kernfs_ops *VAR_4;





 FUNC_4(&VAR_3->mutex);
 if (!FUNC_1(VAR_3->kn))
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_2(VAR_3->kn);
 if (VAR_4->seq_start) {
  void *VAR_5 = VAR_4->seq_start(VAR_1, VAR_2);

  if (VAR_5 == FUNC_0(-VAR_0))
   FUNC_3(VAR_1, VAR_5);
  return VAR_5;
 } else {




  return ((void*)0) + !*VAR_2;
 }
}
