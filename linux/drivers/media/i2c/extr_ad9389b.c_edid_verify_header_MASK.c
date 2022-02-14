
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int* data; } ;
struct ad9389b_state {TYPE_1__ edid; } ;


 int FUNC_0 (int const*) ;
 struct ad9389b_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static bool FUNC_2(struct v4l2_subdev *VAR_0, u32 VAR_1)
{
 static const u8 VAR_2[] = {
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00
 };
 struct ad9389b_state *VAR_3 = FUNC_1(VAR_0);
 u8 *VAR_4 = VAR_3->edid.data;
 int VAR_5;

 if (VAR_1)
  return 1;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++)
  if (VAR_4[VAR_5] != VAR_2[VAR_5])
   return 0;

 return 1;
}
