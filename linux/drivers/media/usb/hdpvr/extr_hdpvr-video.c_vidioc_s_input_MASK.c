
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int video_input; } ;
struct hdpvr_device {scalar_t__ status; TYPE_1__ options; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct hdpvr_device*,int ,unsigned int) ;
 struct hdpvr_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, void *VAR_6,
     unsigned int VAR_7)
{
 struct hdpvr_device *VAR_8 = FUNC_1(VAR_5);
 int VAR_9;

 if (VAR_7 >= VAR_3)
  return -VAR_2;

 if (VAR_8->status != VAR_4)
  return -VAR_1;

 VAR_9 = FUNC_0(VAR_8, VAR_0, VAR_7+1);
 if (!VAR_9) {
  VAR_8->options.video_input = VAR_7;
 }

 return VAR_9;
}
