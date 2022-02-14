
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int dev_debug; TYPE_1__* fops; } ;
struct poll_table_struct {int dummy; } ;
struct file {int dummy; } ;
typedef int __poll_t ;
struct TYPE_2__ {int (* poll ) (struct file*,struct poll_table_struct*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct file*,struct poll_table_struct*) ;
 struct video_device* FUNC_2 (struct file*) ;
 int FUNC_3 (struct video_device*) ;
 scalar_t__ FUNC_4 (struct video_device*) ;

__attribute__((used)) static __poll_t FUNC_5(struct file *VAR_4, struct poll_table_struct *VAR_5)
{
 struct video_device *VAR_6 = FUNC_2(VAR_4);
 __poll_t VAR_7 = VAR_1 | VAR_2;

 if (!VAR_6->fops->poll)
  return VAR_0;
 if (FUNC_4(VAR_6))
  VAR_7 = VAR_6->fops->poll(VAR_4, VAR_5);
 if (VAR_6->dev_debug & VAR_3)
  FUNC_0("%s: poll: %08x\n",
   FUNC_3(VAR_6), VAR_7);
 return VAR_7;
}
