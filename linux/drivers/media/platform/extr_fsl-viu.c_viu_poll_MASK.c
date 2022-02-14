
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {int dummy; } ;
struct viu_fh {scalar_t__ type; struct viu_dev* dev; struct videobuf_queue vb_vidq; } ;
struct viu_dev {int lock; } ;
struct poll_table_struct {int dummy; } ;
struct file {struct viu_fh* private_data; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct poll_table_struct*) ;
 int FUNC_3 (struct file*,struct poll_table_struct*) ;
 int FUNC_4 (struct file*,struct videobuf_queue*,struct poll_table_struct*) ;

__attribute__((used)) static __poll_t FUNC_5(struct file *VAR_4, struct poll_table_struct *VAR_5)
{
 struct viu_fh *VAR_6 = VAR_4->private_data;
 struct videobuf_queue *VAR_7 = &VAR_6->vb_vidq;
 struct viu_dev *VAR_8 = VAR_6->dev;
 __poll_t VAR_9 = FUNC_2(VAR_5);
 __poll_t VAR_10 = FUNC_3(VAR_4, VAR_5);

 if (VAR_3 != VAR_6->type)
  return VAR_0;

 if (!(VAR_9 & (VAR_1 | VAR_2)))
  return VAR_10;

 FUNC_0(&VAR_8->lock);
 VAR_10 |= FUNC_4(VAR_4, VAR_7, VAR_5);
 FUNC_1(&VAR_8->lock);
 return VAR_10;
}
