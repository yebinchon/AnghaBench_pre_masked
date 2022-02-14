
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sd {TYPE_2__* contrast; TYPE_1__* brightness; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;
struct TYPE_4__ {int const val; scalar_t__ maximum; } ;
struct TYPE_3__ {int val; scalar_t__ maximum; } ;


 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 int VAR_2, VAR_3;
 static const u8 VAR_4[10] =
  {0x29, 0x33, 0x42, 0x5a, 0x6e, 0x80, 0x9f, 0xbb,
   0xd4, 0xec};
 static const u8 VAR_5[10] =
  {0x35, 0x33, 0x33, 0x2f, 0x2a, 0x25, 0x1e, 0x17,
   0x11, 0x0b};

 FUNC_0(VAR_0, 0xff, 0x00);
 for (VAR_2 = 0; VAR_2 < 10; VAR_2++) {
  VAR_3 = VAR_4[VAR_2];
  VAR_3 += (VAR_1->brightness->val - (s32)VAR_1->brightness->maximum)
   * 150 / (s32)VAR_1->brightness->maximum;
  VAR_3 -= VAR_5[VAR_2] * VAR_1->contrast->val / (s32)VAR_1->contrast->maximum;
  if (VAR_3 < 0)
   VAR_3 = 0;
  else if (VAR_3 > 0xff)
   VAR_3 = 0xff;
  FUNC_0(VAR_0, 0xa2 + VAR_2, VAR_3);
 }
 FUNC_0(VAR_0, 0xdc, 0x01);
}
