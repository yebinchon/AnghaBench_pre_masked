
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int) ;
 int FUNC_3 (struct v4l2_subdev*,int,int) ;
 int FUNC_4 (struct v4l2_subdev*,int,int const) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_3,
        u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 int VAR_7;





 const int VAR_8[3][2] = {
  {0x0c, 0},
  {0x0d, 0},
  {0x0e, 1}
 };

 if (VAR_4 > 2)
  return -VAR_0;

 FUNC_1(1, VAR_1, VAR_3, "input switched to %s\n", VAR_2[VAR_4]);

 FUNC_4(VAR_3, 0x33, VAR_8[VAR_4][0]);

 VAR_7 = FUNC_2(VAR_3, 0xf2) & ~(0x0020);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_3(VAR_3, 0xf2,
   VAR_7 | (VAR_8[VAR_4][1] << 5) | 0x0010);

 FUNC_0(10);
 return 0;
}
