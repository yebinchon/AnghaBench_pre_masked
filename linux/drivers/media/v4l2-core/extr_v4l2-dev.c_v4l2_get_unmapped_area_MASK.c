
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int dev_debug; TYPE_1__* fops; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int (* get_unmapped_area ) (struct file*,unsigned long,unsigned long,unsigned long,unsigned long) ;} ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct file*,unsigned long,unsigned long,unsigned long,unsigned long) ;
 struct video_device* FUNC_2 (struct file*) ;
 int FUNC_3 (struct video_device*) ;
 int FUNC_4 (struct video_device*) ;

__attribute__((used)) static unsigned long FUNC_5(struct file *VAR_3,
  unsigned long VAR_4, unsigned long VAR_5, unsigned long VAR_6,
  unsigned long VAR_7)
{
 struct video_device *VAR_8 = FUNC_2(VAR_3);
 int VAR_9;

 if (!VAR_8->fops->get_unmapped_area)
  return -VAR_1;
 if (!FUNC_4(VAR_8))
  return -VAR_0;
 VAR_9 = VAR_8->fops->get_unmapped_area(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8->dev_debug & VAR_2)
  FUNC_0("%s: get_unmapped_area (%d)\n",
   FUNC_3(VAR_8), VAR_9);
 return VAR_9;
}
