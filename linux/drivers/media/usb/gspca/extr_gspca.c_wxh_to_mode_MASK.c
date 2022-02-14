
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int nmodes; TYPE_2__* cam_mode; } ;
struct gspca_dev {TYPE_1__ cam; } ;
struct TYPE_4__ {int width; int height; scalar_t__ pixelformat; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct gspca_dev *VAR_1,
   int VAR_2, int VAR_3, u32 VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->cam.nmodes; VAR_5++) {
  if (VAR_2 == VAR_1->cam.cam_mode[VAR_5].width
      && VAR_3 == VAR_1->cam.cam_mode[VAR_5].height
      && VAR_4 == VAR_1->cam.cam_mode[VAR_5].pixelformat)
   return VAR_5;
 }
 return -VAR_0;
}
