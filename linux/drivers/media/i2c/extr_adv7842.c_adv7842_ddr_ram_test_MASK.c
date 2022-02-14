
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct v4l2_subdev*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct v4l2_subdev*,int) ;
 int FUNC_4 (struct v4l2_subdev*,int,int) ;
 int FUNC_5 (struct v4l2_subdev*,int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int ,struct v4l2_subdev*,char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_2)
{






 int VAR_3;
 int VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6 = 0;

 FUNC_1(VAR_2, 0x00, 0x01);
 FUNC_1(VAR_2, 0x01, 0x00);
 FUNC_0(VAR_2, 0x80, 0x92);
 FUNC_0(VAR_2, 0x9B, 0x01);
 FUNC_0(VAR_2, 0x9C, 0x60);
 FUNC_0(VAR_2, 0x9E, 0x02);
 FUNC_0(VAR_2, 0xA0, 0x0B);
 FUNC_0(VAR_2, 0xC3, 0x02);
 FUNC_1(VAR_2, 0x0C, 0x40);
 FUNC_1(VAR_2, 0x15, 0xBA);
 FUNC_5(VAR_2, 0x12, 0x00);
 FUNC_1(VAR_2, 0xFF, 0x04);

 FUNC_6(5000, 6000);

 FUNC_5(VAR_2, 0x12, 0x00);
 FUNC_4(VAR_2, 0x2A, 0x01);
 FUNC_4(VAR_2, 0x7c, 0x19);
 FUNC_4(VAR_2, 0x80, 0x87);
 FUNC_4(VAR_2, 0x81, 0x4a);
 FUNC_4(VAR_2, 0x82, 0x2c);
 FUNC_4(VAR_2, 0x83, 0x0e);
 FUNC_4(VAR_2, 0x84, 0x94);
 FUNC_4(VAR_2, 0x85, 0x62);
 FUNC_4(VAR_2, 0x7d, 0x00);
 FUNC_4(VAR_2, 0x7e, 0x1a);

 FUNC_6(5000, 6000);

 FUNC_4(VAR_2, 0xd9, 0xd5);
 FUNC_5(VAR_2, 0x12, 0x05);

 FUNC_2(20);

 for (VAR_3 = 0; VAR_3 < 10; VAR_3++) {
  u8 VAR_7 = FUNC_3(VAR_2, 0xdb);
  if (VAR_7 & 0x10) {
   VAR_6++;
   if (VAR_7 & 0x20)
    VAR_5++;
   else
    VAR_4++;
  }
  FUNC_2(20);
 }

 FUNC_7(1, VAR_1, VAR_2,
  "Ram Test: completed %d of %d: pass %d, fail %d\n",
  VAR_6, VAR_3, VAR_4, VAR_5);

 if (!VAR_6 || VAR_5)
  return -VAR_0;
 return 0;
}
