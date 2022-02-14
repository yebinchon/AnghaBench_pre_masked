
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dev; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct v4l2_subdev*,int) ;

__attribute__((used)) static void FUNC_2(struct v4l2_subdev *VAR_0, char *VAR_1, u8 VAR_2,
    const u8 VAR_3, int VAR_4)
{
 u8 VAR_5[16];
 int VAR_6 = 0, VAR_7, VAR_8;

 if (VAR_4 > 16) {
  FUNC_0(VAR_0->dev, "too much data to dump\n");
  return;
 }

 for (VAR_6 = VAR_2; VAR_6 < VAR_3; VAR_6 += VAR_4) {
  VAR_8 = (VAR_3 - VAR_6 > VAR_4) ? VAR_4 : VAR_3 - VAR_6;

  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
   VAR_5[VAR_7] = FUNC_1(VAR_0, VAR_6 + VAR_7);

  FUNC_0(VAR_0->dev, "%s reg %02x = %*ph\n", VAR_1, VAR_6, VAR_8, VAR_5);
 }
}
