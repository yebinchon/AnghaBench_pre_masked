
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct adv7183 {int std; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int ,int) ;
 int FUNC_3 (int) ;
 struct adv7183* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_10, v4l2_std_id *VAR_11)
{
 struct adv7183 *VAR_12 = FUNC_4(VAR_10);
 int VAR_13;


 VAR_13 = FUNC_0(VAR_10, VAR_0) & 0xF;
 FUNC_2(VAR_10, VAR_0, VAR_13);


 FUNC_3(10);


 VAR_13 = FUNC_0(VAR_10, VAR_1);
 switch ((VAR_13 >> 0x4) & 0x7) {
 case 0:
  *VAR_11 &= VAR_2;
  break;
 case 1:
  *VAR_11 &= VAR_3;
  break;
 case 2:
  *VAR_11 &= VAR_6;
  break;
 case 3:
  *VAR_11 &= VAR_5;
  break;
 case 4:
  *VAR_11 &= VAR_4;
  break;
 case 5:
  *VAR_11 &= VAR_8;
  break;
 case 6:
  *VAR_11 &= VAR_7;
  break;
 case 7:
  *VAR_11 &= VAR_8;
  break;
 default:
  *VAR_11 = VAR_9;
  break;
 }


 FUNC_1(VAR_10, VAR_12->std);
 return 0;
}
