
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_device {int dummy; } ;
struct snd_cx18_card {int dummy; } ;
struct TYPE_2__ {struct snd_cx18_card* alsa; } ;


 TYPE_1__* FUNC_0 (struct v4l2_device*) ;

__attribute__((used)) static inline
struct snd_cx18_card *FUNC_1(struct v4l2_device *VAR_0)
{
 return FUNC_0(VAR_0)->alsa;
}
