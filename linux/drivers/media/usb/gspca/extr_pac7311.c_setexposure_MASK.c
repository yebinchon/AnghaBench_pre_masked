
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; } ;
struct gspca_dev {TYPE_1__ pixfmt; } ;
typedef int s32 ;


 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, s32 VAR_1)
{
 FUNC_0(VAR_0, 0xff, 0x04);
 FUNC_0(VAR_0, 0x02, VAR_1);


 FUNC_0(VAR_0, 0x11, 0x01);





 FUNC_0(VAR_0, 0xff, 0x01);
 if (VAR_0->pixfmt.width != 640 && VAR_1 <= 3)
  FUNC_0(VAR_0, 0x08, 0x09);
 else
  FUNC_0(VAR_0, 0x08, 0x08);







 if (VAR_0->pixfmt.width == 640 && VAR_1 == 2)
  FUNC_0(VAR_0, 0x80, 0x01);
 else
  FUNC_0(VAR_0, 0x80, 0x1c);


 FUNC_0(VAR_0, 0x11, 0x01);
}
