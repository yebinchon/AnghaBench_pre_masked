
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {scalar_t__ bridge; scalar_t__ framerate; } ;
struct TYPE_2__ {int width; } ;
struct gspca_dev {TYPE_1__ pixfmt; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;
 int VAR_5;

 if (VAR_4->bridge == VAR_0) {
  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1) - 1; VAR_5++) {
   if (VAR_4->framerate >= VAR_1[VAR_5])
    break;
  }
  VAR_5 = 6 - VAR_5;


  if (VAR_5 == 6
   && VAR_3->pixfmt.width == 640)
   VAR_5 = 0x05;
 } else {
  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2) - 1; VAR_5++) {
   if (VAR_4->framerate >= VAR_2[VAR_5])
    break;
  }
  VAR_5 = 7 - VAR_5;


  if (VAR_5 == 7
   && VAR_3->pixfmt.width == 640)
   VAR_5 = 6;
  VAR_5 |= 0x80;
 }
 return VAR_5;
}
