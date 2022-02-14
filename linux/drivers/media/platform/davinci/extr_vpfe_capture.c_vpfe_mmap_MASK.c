
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpfe_device {int buffer_queue; int v4l2_dev; } ;
struct vm_area_struct {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int *,char*) ;
 struct vpfe_device* FUNC_1 (struct file*) ;
 int FUNC_2 (int *,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, struct vm_area_struct *VAR_2)
{

 struct vpfe_device *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(1, VAR_0, &VAR_3->v4l2_dev, "vpfe_mmap\n");

 return FUNC_2(&VAR_3->buffer_queue, VAR_2);
}
