
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct video_device {int dev_debug; TYPE_1__* fops; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int (* mmap ) (struct file*,struct vm_area_struct*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct file*,struct vm_area_struct*) ;
 struct video_device* FUNC_2 (struct file*) ;
 int FUNC_3 (struct video_device*) ;
 scalar_t__ FUNC_4 (struct video_device*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 struct video_device *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = -VAR_0;

 if (!VAR_4->fops->mmap)
  return -VAR_0;
 if (FUNC_4(VAR_4))
  VAR_5 = VAR_4->fops->mmap(VAR_2, VAR_3);
 if (VAR_4->dev_debug & VAR_1)
  FUNC_0("%s: mmap (%d)\n",
   FUNC_3(VAR_4), VAR_5);
 return VAR_5;
}
