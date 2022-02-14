
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct pcm20 {int kthread; TYPE_1__ v4l2_dev; } ;
struct file {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct pcm20*,char*,int ) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_5 (struct file*) ;
 int FUNC_6 (struct file*) ;
 int FUNC_7 (struct file*) ;
 struct pcm20* FUNC_8 (struct file*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_1)
{
 struct pcm20 *VAR_2 = FUNC_8(VAR_1);
 int VAR_3 = FUNC_6(VAR_1);

 if (!VAR_3 && FUNC_5(VAR_1) &&
     FUNC_1(VAR_2->kthread)) {
  VAR_2->kthread = FUNC_3(VAR_0, VAR_2, "%s",
        VAR_2->v4l2_dev.name);
  if (FUNC_0(VAR_2->kthread)) {
   FUNC_4(&VAR_2->v4l2_dev, "kernel_thread() failed\n");
   FUNC_7(VAR_1);
   return FUNC_2(VAR_2->kthread);
  }
 }
 return VAR_3;
}
