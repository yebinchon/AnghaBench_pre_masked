
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct file {scalar_t__ private_data; } ;
struct camif_vp {scalar_t__ owner; int vb_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct vm_area_struct*) ;
 struct camif_vp* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 struct camif_vp *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 if (VAR_3->owner && VAR_3->owner != VAR_1->private_data)
  VAR_4 = -VAR_0;
 else
  VAR_4 = FUNC_0(&VAR_3->vb_queue, VAR_2);

 return VAR_4;
}
