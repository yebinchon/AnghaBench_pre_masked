
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_v4l2 {int channel; int * dev_radio; int * dev_video; } ;


 int VAR_0 ;
 int FUNC_0 (struct pvr2_v4l2*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,struct pvr2_v4l2*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct pvr2_v4l2 *VAR_1)
{
 if (VAR_1->dev_video) {
  FUNC_3(VAR_1->dev_video);
  VAR_1->dev_video = ((void*)0);
 }
 if (VAR_1->dev_radio) {
  FUNC_3(VAR_1->dev_radio);
  VAR_1->dev_radio = ((void*)0);
 }

 FUNC_2(VAR_0,"Destroying pvr2_v4l2 id=%p",VAR_1);
 FUNC_1(&VAR_1->channel);
 FUNC_0(VAR_1);
}
