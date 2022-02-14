
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct file {scalar_t__ private_data; } ;
struct camif_vp {scalar_t__ owner; int vb_queue; struct camif_dev* camif; } ;
struct camif_dev {int lock; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct file*,struct poll_table_struct*) ;
 struct camif_vp* FUNC_3 (struct file*) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_1,
       struct poll_table_struct *VAR_2)
{
 struct camif_vp *VAR_3 = FUNC_3(VAR_1);
 struct camif_dev *VAR_4 = VAR_3->camif;
 __poll_t VAR_5;

 FUNC_0(&VAR_4->lock);
 if (VAR_3->owner && VAR_3->owner != VAR_1->private_data)
  VAR_5 = VAR_0;
 else
  VAR_5 = FUNC_2(&VAR_3->vb_queue, VAR_1, VAR_2);

 FUNC_1(&VAR_4->lock);
 return VAR_5;
}
