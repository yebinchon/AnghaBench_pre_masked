
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct v4l2_audioout {int name; } ;
struct ivtv {TYPE_1__* card; } ;
struct TYPE_2__ {int * video_outputs; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_audioout*,int ,int) ;
 int FUNC_1 (int ,char*,int) ;

int FUNC_2(struct ivtv *VAR_1, u16 VAR_2, struct v4l2_audioout *VAR_3)
{
 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 if (VAR_1->card->video_outputs == ((void*)0) || VAR_2 != 0)
  return -VAR_0;
 FUNC_1(VAR_3->name, "A/V Audio Out", sizeof(VAR_3->name));
 return 0;
}
