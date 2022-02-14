
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct kernfs_open_file* private; } ;
struct kernfs_open_file {int mutex; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,void*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 struct kernfs_open_file *VAR_3 = VAR_1->private;

 if (VAR_2 != FUNC_0(-VAR_0))
  FUNC_1(VAR_1, VAR_2);
 FUNC_2(&VAR_3->mutex);
}
