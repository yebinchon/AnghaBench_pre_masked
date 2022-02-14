
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_operations {int dummy; } ;
struct seq_file {int size; scalar_t__ buf; struct gfs2_glock_iter* private; } ;
struct inode {int i_private; } ;
struct gfs2_glock_iter {int last_pos; int hti; int * gl; int sdp; } ;
struct file {struct seq_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct file*,struct seq_operations const*,int) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_4, struct file *VAR_5,
         const struct seq_operations *VAR_6)
{
 int VAR_7 = FUNC_2(VAR_5, VAR_6, sizeof(struct gfs2_glock_iter));
 if (VAR_7 == 0) {
  struct seq_file *VAR_8 = VAR_5->private_data;
  struct gfs2_glock_iter *VAR_9 = VAR_8->private;

  VAR_9->sdp = VAR_4->i_private;
  VAR_8->buf = FUNC_0(VAR_1, VAR_0 | VAR_2);
  if (VAR_8->buf)
   VAR_8->size = VAR_1;




  VAR_9->last_pos = -1;
  VAR_9->gl = ((void*)0);
  FUNC_1(&VAR_3, &VAR_9->hti);
 }
 return VAR_7;
}
