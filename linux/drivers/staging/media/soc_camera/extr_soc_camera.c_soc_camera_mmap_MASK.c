
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct soc_camera_host {int host_lock; } ;
struct soc_camera_device {int pdev; int vb2_vidq; struct file* streamer; int parent; } ;
struct file {struct soc_camera_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct soc_camera_host* FUNC_3 (int ) ;
 int FUNC_4 (int *,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 struct soc_camera_device *VAR_4 = VAR_2->private_data;
 struct soc_camera_host *VAR_5 = FUNC_3(VAR_4->parent);
 int VAR_6;

 FUNC_0(VAR_4->pdev, "mmap called, vma=%p\n", VAR_3);

 if (VAR_4->streamer != VAR_2)
  return -VAR_0;

 if (FUNC_1(&VAR_5->host_lock))
  return -VAR_1;
 VAR_6 = FUNC_4(&VAR_4->vb2_vidq, VAR_3);
 FUNC_2(&VAR_5->host_lock);

 FUNC_0(VAR_4->pdev, "vma start=0x%08lx, size=%ld, ret=%d\n",
  (unsigned long)VAR_3->vm_start,
  (unsigned long)VAR_3->vm_end - (unsigned long)VAR_3->vm_start,
  VAR_6);

 return VAR_6;
}
