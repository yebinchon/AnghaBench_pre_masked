
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {scalar_t__ sensor; TYPE_1__* saturation; } ;
struct gspca_dev {int dummy; } ;
typedef int s16 ;
struct TYPE_2__ {int val; } ;


 int const VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 int VAR_4, VAR_5, VAR_6;
 const s16 *VAR_7;
 u8 VAR_8[12];
 static const s16 VAR_9[6] = {
  -24, -38, 64,
   62, -51, -9
 };
 static const s16 VAR_10[6] = {
  -20, -38, 64,
   60, -51, -9
 };

 VAR_6 = VAR_3->saturation->val;
 if (VAR_3->sensor == VAR_1)
  VAR_7 = VAR_10;
 else
  VAR_7 = VAR_9;
 for (VAR_4 = 0; VAR_4 < 6; VAR_4++) {
  VAR_5 = VAR_7[VAR_4] * VAR_6 / VAR_0;
  VAR_8[VAR_4 * 2] = VAR_5;
  VAR_8[VAR_4 * 2 + 1] = (VAR_5 >> 8) & 0x0f;
 }
 FUNC_0(VAR_2, 0x8a, VAR_8, sizeof VAR_8);
}
