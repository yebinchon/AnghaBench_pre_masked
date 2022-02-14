
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; } ;
struct CHIPSTATE {size_t input; TYPE_2__* balance; TYPE_1__* volume; int muted; struct CHIPDESC* desc; } ;
struct CHIPDESC {int (* treblefunc ) (int ) ;int treblereg; int (* bassfunc ) (int ) ;int bassreg; int (* volfunc ) (unsigned int) ;int rightreg; int leftreg; int inputmask; int * inputmap; int inputreg; int inputmute; } ;
struct TYPE_4__ {unsigned int val; } ;
struct TYPE_3__ {unsigned int val; } ;


 int VAR_0 ;




 int FUNC_0 (struct CHIPSTATE*,int ,int ) ;
 int FUNC_1 (struct CHIPSTATE*,int ,int ,int ) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct v4l2_subdev* FUNC_7 (struct v4l2_ctrl*) ;
 struct CHIPSTATE* FUNC_8 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_9(struct v4l2_ctrl *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_7(VAR_1);
 struct CHIPSTATE *VAR_3 = FUNC_8(VAR_2);
 struct CHIPDESC *VAR_4 = VAR_3->desc;

 switch (VAR_1->id) {
 case 130:
  VAR_3->muted = VAR_1->val;
  if (VAR_3->muted)
   FUNC_1(VAR_3,VAR_4->inputreg,VAR_4->inputmute,VAR_4->inputmask);
  else
   FUNC_1(VAR_3,VAR_4->inputreg,
     VAR_4->inputmap[VAR_3->input],VAR_4->inputmask);
  return 0;
 case 128: {
  u32 VAR_5, VAR_6;
  u32 VAR_7, VAR_8;

  VAR_5 = VAR_3->volume->val;
  VAR_6 = VAR_3->balance->val;
  VAR_7 = (FUNC_2(65536U - VAR_6, 32768U) * VAR_5) / 32768U;
  VAR_8 = (FUNC_2(VAR_6, 32768U) * VAR_5) / 32768U;

  FUNC_0(VAR_3, VAR_4->leftreg, VAR_4->volfunc(VAR_7));
  FUNC_0(VAR_3, VAR_4->rightreg, VAR_4->volfunc(VAR_8));
  return 0;
 }
 case 131:
  FUNC_0(VAR_3, VAR_4->bassreg, VAR_4->bassfunc(VAR_1->val));
  return 0;
 case 129:
  FUNC_0(VAR_3, VAR_4->treblereg, VAR_4->treblefunc(VAR_1->val));
  return 0;
 }
 return -VAR_0;
}
