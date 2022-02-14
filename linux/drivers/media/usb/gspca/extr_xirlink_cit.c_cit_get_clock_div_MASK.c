
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; int height; } ;
struct gspca_dev {TYPE_1__ pixfmt; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*,int ,char*,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_1)
{
 int VAR_2 = 7;
 int VAR_3[8] = { 30, 25, 20, 15, 12, 8, 6, 3 };
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 while (VAR_2 > 3 &&
   1000 * VAR_4 >
   VAR_1->pixfmt.width * VAR_1->pixfmt.height *
   VAR_3[VAR_2 - 1] * 3 / 2)
  VAR_2--;

 FUNC_1(VAR_1, VAR_0,
    "PacketSize: %d, res: %dx%d -> using clockdiv: %d (%d fps)\n",
    VAR_4,
    VAR_1->pixfmt.width, VAR_1->pixfmt.height,
    VAR_2, VAR_3[VAR_2]);

 return VAR_2;
}
