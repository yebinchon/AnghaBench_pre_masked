
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int,int ) ;
 int FUNC_2 (int) ;
 int * VAR_3 ;
 int FUNC_3 (int,int ,struct v4l2_subdev*,char*) ;

__attribute__((used)) static void FUNC_4(struct v4l2_subdev *VAR_4)
{
 u8 *VAR_5 = VAR_3;
 int VAR_6;

 FUNC_3(1, VAR_2, VAR_4, "reset\n");
 FUNC_2(1);




 for (VAR_6 = 1; VAR_6 < 33; VAR_6++)
  FUNC_1(VAR_4, VAR_6, VAR_5[VAR_6]);

 for (VAR_6 = 35; VAR_6 < 40; VAR_6++)
  FUNC_1(VAR_4, VAR_6, VAR_5[VAR_6]);

 for (VAR_6 = 41; VAR_6 < 56; VAR_6++)
  FUNC_1(VAR_4, VAR_6, VAR_5[VAR_6]);

 for (VAR_6 = 58; VAR_6 < 64; VAR_6++)
  FUNC_1(VAR_4, VAR_6, VAR_5[VAR_6]);


 if ((FUNC_0(VAR_4, VAR_1) & 0x80) == 0) {
  FUNC_3(1, VAR_2, VAR_4, "ks0122s found\n");
  return;
 }

 switch (FUNC_0(VAR_4, VAR_0) & 0x0f) {
 case 0:
  FUNC_3(1, VAR_2, VAR_4, "ks0127 found\n");
  break;

 case 9:
  FUNC_3(1, VAR_2, VAR_4, "ks0127B Revision A found\n");
  break;

 default:
  FUNC_3(1, VAR_2, VAR_4, "unknown revision\n");
  break;
 }
}
