
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_audio {size_t index; int name; int capability; } ;
struct TYPE_2__ {size_t audio_input; } ;
struct hdpvr_device {TYPE_1__ options; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct hdpvr_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
     struct v4l2_audio *VAR_4)
{
 struct hdpvr_device *VAR_5 = FUNC_1(VAR_2);

 VAR_4->index = VAR_5->options.audio_input;
 VAR_4->capability = VAR_0;
 FUNC_0(VAR_4->name, VAR_1[VAR_4->index], sizeof(VAR_4->name));
 return 0;
}
