
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,int) ;
 int FUNC_2 (struct v4l2_subdev*,int,int) ;
 int FUNC_3 (struct v4l2_subdev*,char*) ;

__attribute__((used)) static void FUNC_4(struct v4l2_subdev *VAR_3, bool VAR_4)
{
 u8 VAR_5 = VAR_1 | VAR_2;
 u8 VAR_6;
 int VAR_7 = 100;



 if (!VAR_4)
  VAR_5 = 0;
 else if (FUNC_0(VAR_3))
  VAR_5 |= VAR_0;
 do {
  FUNC_2(VAR_3, 0x94, VAR_5);
  VAR_6 = FUNC_1(VAR_3, 0x94);
 } while (VAR_7-- && VAR_6 != VAR_5);

 if (VAR_6 != VAR_5)
  FUNC_3(VAR_3, "Could not set interrupts: hw failure?\n");
}
