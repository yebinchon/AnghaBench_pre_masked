
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; int vm_page_prot; } ;
struct qcom_rmtfs_mem {scalar_t__ size; int addr; int dev; } ;
struct file {struct qcom_rmtfs_mem* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vm_area_struct*,scalar_t__,int,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 struct qcom_rmtfs_mem *VAR_4 = VAR_2->private_data;

 if (VAR_3->vm_end - VAR_3->vm_start > VAR_4->size) {
  FUNC_0(&VAR_4->dev,
   "vm_end[%lu] - vm_start[%lu] [%lu] > mem->size[%pa]\n",
   VAR_3->vm_end, VAR_3->vm_start,
   (VAR_3->vm_end - VAR_3->vm_start), &VAR_4->size);
  return -VAR_0;
 }

 VAR_3->vm_page_prot = FUNC_1(VAR_3->vm_page_prot);
 return FUNC_2(VAR_3,
          VAR_3->vm_start,
          VAR_4->addr >> VAR_1,
          VAR_3->vm_end - VAR_3->vm_start,
          VAR_3->vm_page_prot);
}
