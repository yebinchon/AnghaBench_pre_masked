
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sd {int swapRB; int nbIm; } ;
struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {TYPE_2__ cam; int curr_mode; } ;
typedef size_t s32 ;
typedef int s16 ;
struct TYPE_3__ {int bytesperline; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int ,int *,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_3,
   u8 *VAR_4, int VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_3;
 static s32 VAR_7;

 s32 VAR_8 = (s32) VAR_3->curr_mode;
 s32 VAR_9 =
  VAR_6->swapRB * (VAR_3->cam.cam_mode[VAR_8].bytesperline + 1);


 switch (*(s16 *) VAR_4) {
 case 0x0202:
  FUNC_0(VAR_3, VAR_2, ((void*)0), 0);
  VAR_7 = 0;
  if (VAR_6->nbIm >= 0 && VAR_6->nbIm < 10)
   VAR_6->nbIm++;
  FUNC_0(VAR_3, VAR_0, ((void*)0), 0);
  break;

 default:
  VAR_4 += 2;
  VAR_5 -= 2;
  if (VAR_7 + VAR_5 <= VAR_9)
   VAR_7 += VAR_5;
  else {
   if (VAR_7 < VAR_9 && VAR_7 + VAR_5 > VAR_9) {
    VAR_4 += VAR_9 - VAR_7;
    VAR_5 -= VAR_9 - VAR_7;
    VAR_7 = VAR_9 + 1;
   }
   FUNC_0(VAR_3,
    VAR_1, VAR_4, VAR_5);
  }
  break;
 }
}
