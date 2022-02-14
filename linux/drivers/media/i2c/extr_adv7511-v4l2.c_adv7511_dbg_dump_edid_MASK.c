
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (int*,char*,int) ;
 int FUNC_1 (int,int,struct v4l2_subdev*,char*,...) ;

__attribute__((used)) static void FUNC_2(int VAR_0, int VAR_1, struct v4l2_subdev *VAR_2, int VAR_3, u8 *VAR_4)
{
 if (VAR_1 >= VAR_0) {
  int VAR_5, VAR_6;
  FUNC_1(VAR_0, VAR_1, VAR_2, "edid segment %d\n", VAR_3);
  for (VAR_5 = 0; VAR_5 < 256; VAR_5 += 16) {
   u8 VAR_7[128];
   u8 *VAR_8 = VAR_7;
   if (VAR_5 == 128)
    FUNC_1(VAR_0, VAR_1, VAR_2, "\n");
   for (VAR_6 = VAR_5; VAR_6 < VAR_5 + 16; VAR_6++) {
    FUNC_0(VAR_8, "0x%02x, ", VAR_4[VAR_6]);
    VAR_8 += 6;
   }
   VAR_8[0] = '\0';
   FUNC_1(VAR_0, VAR_1, VAR_2, "%s\n", VAR_7);
  }
 }
}
