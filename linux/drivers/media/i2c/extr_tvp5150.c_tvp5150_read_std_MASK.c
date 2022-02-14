
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;

__attribute__((used)) static v4l2_std_id FUNC_1(struct v4l2_subdev *VAR_9)
{
 int VAR_10 = FUNC_0(VAR_9, VAR_0);

 switch (VAR_10 & 0x0F) {
 case 0x01:
  return VAR_1;
 case 0x03:
  return VAR_3;
 case 0x05:
  return VAR_4;
 case 0x07:
  return VAR_5 | VAR_6;
 case 0x09:
  return VAR_2;
 case 0xb:
  return VAR_7;
 default:
  return VAR_8;
 }
}
