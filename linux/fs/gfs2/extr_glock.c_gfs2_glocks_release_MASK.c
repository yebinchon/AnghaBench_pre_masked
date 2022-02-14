
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct gfs2_glock_iter* private; } ;
struct inode {int dummy; } ;
struct gfs2_glock_iter {int hti; scalar_t__ gl; } ;
struct file {struct seq_file* private_data; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct seq_file *VAR_2 = VAR_1->private_data;
 struct gfs2_glock_iter *VAR_3 = VAR_2->private;

 if (VAR_3->gl)
  FUNC_0(VAR_3->gl);
 FUNC_1(&VAR_3->hti);
 return FUNC_2(VAR_0, VAR_1);
}
