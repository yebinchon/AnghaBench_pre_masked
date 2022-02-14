
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct tw9906 {int norm; } ;


 int VAR_0 ;
 struct tw9906* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,int const*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1, v4l2_std_id VAR_2)
{
 struct tw9906 *VAR_3 = FUNC_0(VAR_1);
 bool VAR_4 = VAR_2 & VAR_0;
 static const u8 VAR_5[] = {
  0x05, 0x81,
  0x07, 0x02,
  0x08, 0x14,
  0x09, 0xf0,
  0, 0,
 };
 static const u8 VAR_6[] = {
  0x05, 0x01,
  0x07, 0x12,
  0x08, 0x18,
  0x09, 0x20,
  0, 0,
 };

 FUNC_1(VAR_1, VAR_4 ? VAR_5 : VAR_6);
 VAR_3->norm = VAR_2;
 return 0;
}
