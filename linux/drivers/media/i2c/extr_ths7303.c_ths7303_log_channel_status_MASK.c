
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (struct v4l2_subdev*,int) ;
 int FUNC_1 (struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static void FUNC_2(struct v4l2_subdev *VAR_4, u8 VAR_5)
{
 u8 VAR_6 = FUNC_0(VAR_4, VAR_5);

 if ((VAR_6 & 0x7) == 0) {
  FUNC_1(VAR_4, "Channel %d Off\n", VAR_5);
  return;
 }

 FUNC_1(VAR_4, "Channel %d On\n", VAR_5);
 FUNC_1(VAR_4, "  value 0x%x\n", VAR_6);
 FUNC_1(VAR_4, "  %s\n", VAR_3[(VAR_6 >> 6) & 0x3]);
 FUNC_1(VAR_4, "  %s\n", VAR_1[(VAR_6 >> 5) & 0x1]);
 FUNC_1(VAR_4, "  %s\n", VAR_2[(VAR_6 >> 3) & 0x3]);
 FUNC_1(VAR_4, "  %s\n", VAR_0[(VAR_6 >> 0) & 0x7]);
}
