
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int height; int width; } ;
struct TYPE_6__ {TYPE_2__ pixfmt; } ;
struct sd {scalar_t__ sensor; int sensor_width; int sensor_height; TYPE_3__ gspca_dev; TYPE_1__* freq; scalar_t__ sif; } ;
struct TYPE_4__ {int val; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct sd*,int,int) ;

__attribute__((used)) static void FUNC_2(struct sd *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
     VAR_10, VAR_11;

 if (VAR_1->sif) {
  VAR_10 = 352;
  VAR_11 = 288;
 } else {
  VAR_10 = 640;
  VAR_11 = 480;
 }

 if (VAR_1->sensor == VAR_0) {







  if (VAR_1->freq->val == 1) {
   VAR_2 = 277;
   VAR_3 = 37;
  } else {
   VAR_2 = 105;
   VAR_3 = 37;
  }
 } else {
  VAR_2 = 320;
  VAR_3 = 35;
 }





 VAR_6 = ((VAR_1->gspca_dev.pixfmt.width) << 10) / VAR_10;
 VAR_7 = ((VAR_1->gspca_dev.pixfmt.height) << 10) / VAR_11;

 VAR_8 = (VAR_6 >= VAR_7) ? VAR_10 : ((VAR_1->gspca_dev.pixfmt.width) << 10) / VAR_7;
 VAR_9 = (VAR_6 >= VAR_7) ? ((VAR_1->gspca_dev.pixfmt.height) << 10) / VAR_6 : VAR_11;

 VAR_1->sensor_width = VAR_10;
 VAR_1->sensor_height = VAR_11;

 VAR_4 = (VAR_10 - VAR_8) / 2;
 VAR_5 = (VAR_11 - VAR_9) / 2;

 FUNC_1(VAR_1, 0x10, VAR_2 + VAR_4);
 FUNC_1(VAR_1, 0x11, VAR_3 + VAR_5);
 FUNC_1(VAR_1, 0x12, VAR_2 + VAR_4 + VAR_8);
 FUNC_1(VAR_1, 0x13, VAR_3 + VAR_5 + VAR_9);
}
