
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_mbus_framefmt {int code; } ;
struct ov5640_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ov5640_dev*,int ,int,int) ;
 int FUNC_2 (struct ov5640_dev*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ov5640_dev *VAR_9,
          struct v4l2_mbus_framefmt *VAR_10)
{
 int VAR_11 = 0;
 bool VAR_12 = 0;
 u8 VAR_13, VAR_14;

 switch (VAR_10->code) {
 case 129:

  VAR_13 = 0x3f;
  VAR_14 = VAR_3;
  break;
 case 128:

  VAR_13 = 0x30;
  VAR_14 = VAR_3;
  break;
 case 134:

  VAR_13 = 0x6F;
  VAR_14 = VAR_2;
  break;
 case 135:

  VAR_13 = 0x61;
  VAR_14 = VAR_2;
  break;
 case 136:

  VAR_13 = 0x30;
  VAR_14 = VAR_3;
  VAR_12 = 1;
  break;
 case 133:

  VAR_13 = 0x00;
  VAR_14 = VAR_1;
  break;
 case 132:

  VAR_13 = 0x01;
  VAR_14 = VAR_1;
  break;
 case 131:

  VAR_13 = 0x02;
  VAR_14 = VAR_1;
  break;
 case 130:

  VAR_13 = 0x03;
  VAR_14 = VAR_1;
  break;
 default:
  return -VAR_0;
 }


 VAR_11 = FUNC_2(VAR_9, VAR_4, VAR_13);
 if (VAR_11)
  return VAR_11;


 VAR_11 = FUNC_2(VAR_9, VAR_5, VAR_14);
 if (VAR_11)
  return VAR_11;





 VAR_11 = FUNC_1(VAR_9, VAR_8,
        FUNC_0(5), VAR_12 ? FUNC_0(5) : 0);
 if (VAR_11)
  return VAR_11;







 VAR_11 = FUNC_1(VAR_9, VAR_7,
        FUNC_0(4) | FUNC_0(3) | FUNC_0(2),
        VAR_12 ? 0 : (FUNC_0(4) | FUNC_0(3) | FUNC_0(2)));
 if (VAR_11)
  return VAR_11;






 return FUNC_1(VAR_9, VAR_6,
         FUNC_0(5) | FUNC_0(3),
         VAR_12 ? (FUNC_0(5) | FUNC_0(3)) : 0);
}
