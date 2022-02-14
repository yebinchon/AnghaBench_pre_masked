
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {int id; int val; } ;
struct em28xx {int volume; int mute; } ;




 int FUNC_0 (struct em28xx*) ;

__attribute__((used)) static void FUNC_1(struct v4l2_ctrl *VAR_0, void *VAR_1)
{
 struct em28xx *VAR_2 = VAR_1;







 switch (VAR_0->id) {
 case 129:
  VAR_2->mute = VAR_0->val;
  FUNC_0(VAR_2);
  break;
 case 128:
  VAR_2->volume = VAR_0->val;
  FUNC_0(VAR_2);
  break;
 }
}
