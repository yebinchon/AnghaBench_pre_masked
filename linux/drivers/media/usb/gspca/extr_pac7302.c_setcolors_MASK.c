
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {TYPE_1__* saturation; } ;
struct gspca_dev {int dummy; } ;
typedef int const s32 ;
struct TYPE_2__ {int const val; scalar_t__ maximum; } ;


 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 int VAR_2, VAR_3;
 static const int VAR_4[9] =
  {217, -212, 0, -101, 170, -67, -38, -315, 355};
 static const int VAR_5[9] =
  {19, 106, 0, 19, 106, 1, 19, 106, 1};

 FUNC_0(VAR_0, 0xff, 0x03);
 FUNC_0(VAR_0, 0x11, 0x01);
 FUNC_0(VAR_0, 0xff, 0x00);
 for (VAR_2 = 0; VAR_2 < 9; VAR_2++) {
  VAR_3 = VAR_4[VAR_2] * VAR_1->saturation->val / (s32)VAR_1->saturation->maximum;
  VAR_3 += VAR_5[VAR_2];
  FUNC_0(VAR_0, 0x0f + 2 * VAR_2, (VAR_3 >> 8) & 0x07);
  FUNC_0(VAR_0, 0x0f + 2 * VAR_2 + 1, VAR_3);
 }
 FUNC_0(VAR_0, 0xdc, 0x01);
}
