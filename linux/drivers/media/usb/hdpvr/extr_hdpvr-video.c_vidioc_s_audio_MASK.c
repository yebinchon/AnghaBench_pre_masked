
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_audio {scalar_t__ index; } ;
struct TYPE_2__ {scalar_t__ audio_input; int audio_codec; } ;
struct hdpvr_device {scalar_t__ status; TYPE_1__ options; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct hdpvr_device*,scalar_t__,int ) ;
 struct hdpvr_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
     const struct v4l2_audio *VAR_6)
{
 struct hdpvr_device *VAR_7 = FUNC_1(VAR_4);
 int VAR_8;

 if (VAR_6->index >= VAR_2)
  return -VAR_1;

 if (VAR_7->status != VAR_3)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_7, VAR_6->index+1, VAR_7->options.audio_codec);
 if (!VAR_8)
  VAR_7->options.audio_input = VAR_6->index;

 return VAR_8;
}
