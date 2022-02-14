
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int nbRightUp; int mirrorMask; int waitSet; int (* dev_camera_settings ) (struct gspca_dev*) ;} ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int,int,int,int,void*) ;
 int FUNC_1 (struct gspca_dev*) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;

 if (!VAR_0) {
  u8 VAR_3;
  u8 VAR_4;


  FUNC_0(VAR_1, 0xc0, 2, 0x0000, 0x0000, 1, (void *)&VAR_3);



  VAR_4 = (VAR_3 == 0xc8 || VAR_3 == 0x40);

  if (VAR_4 && VAR_2->nbRightUp > -4) {
   if (VAR_2->nbRightUp > 0)
    VAR_2->nbRightUp = 0;
   if (VAR_2->nbRightUp == -3) {
    VAR_2->mirrorMask = 1;
    VAR_2->waitSet = 1;
   }
   VAR_2->nbRightUp--;
  }
  if (!VAR_4 && VAR_2->nbRightUp < 4) {
   if (VAR_2->nbRightUp < 0)
    VAR_2->nbRightUp = 0;
   if (VAR_2->nbRightUp == 3) {
    VAR_2->mirrorMask = 0;
    VAR_2->waitSet = 1;
   }
   VAR_2->nbRightUp++;
  }
 }

 if (VAR_2->waitSet)
  VAR_2->dev_camera_settings(VAR_1);
}
