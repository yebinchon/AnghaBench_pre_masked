
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int video_input; } ;
struct hdpvr_device {TYPE_1__ options; } ;
struct file {int dummy; } ;


 struct hdpvr_device* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
     unsigned int *VAR_2)
{
 struct hdpvr_device *VAR_3 = FUNC_0(VAR_0);

 *VAR_2 = VAR_3->options.video_input;
 return 0;
}
