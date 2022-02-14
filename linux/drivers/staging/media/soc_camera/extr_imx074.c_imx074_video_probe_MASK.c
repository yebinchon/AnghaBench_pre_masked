
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dev; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int *,char*,int) ;
 struct v4l2_subdev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct v4l2_subdev*,int) ;
 int FUNC_3 (struct i2c_client*,int) ;
 int FUNC_4 (struct i2c_client*,int,int) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_27)
{
 struct v4l2_subdev *VAR_28 = FUNC_1(VAR_27);
 int VAR_29;
 u16 VAR_30;

 VAR_29 = FUNC_2(VAR_28, 1);
 if (VAR_29 < 0)
  return VAR_29;


 VAR_29 = FUNC_3(VAR_27, 0);
 if (VAR_29 < 0)
  goto done;

 VAR_30 = VAR_29 << 8;

 VAR_29 = FUNC_3(VAR_27, 1);
 if (VAR_29 < 0)
  goto done;

 VAR_30 |= VAR_29;

 FUNC_0(&VAR_27->dev, "Chip ID 0x%04x detected\n", VAR_30);

 if (VAR_30 != 0x74) {
  VAR_29 = -VAR_0;
  goto done;
 }


 FUNC_4(VAR_27, VAR_8, 0x2D);
 FUNC_4(VAR_27, VAR_10, 0x02);
 FUNC_4(VAR_27, VAR_9, 0x4B);


 FUNC_4(VAR_27, 0x3024, 0x00);

 FUNC_4(VAR_27, VAR_6, 0x00);






 FUNC_4(VAR_27, 0x0112, 0x08);
 FUNC_4(VAR_27, 0x0113, 0x08);


 FUNC_4(VAR_27, VAR_15, 0x80);
 FUNC_4(VAR_27, VAR_24, 0x08);
 FUNC_4(VAR_27, 0x3015, 0x37);
 FUNC_4(VAR_27, 0x301C, 0x01);
 FUNC_4(VAR_27, 0x302C, 0x05);
 FUNC_4(VAR_27, 0x3031, 0x26);
 FUNC_4(VAR_27, 0x3041, 0x60);
 FUNC_4(VAR_27, 0x3051, 0x24);
 FUNC_4(VAR_27, 0x3053, 0x34);
 FUNC_4(VAR_27, 0x3057, 0xC0);
 FUNC_4(VAR_27, 0x305C, 0x09);
 FUNC_4(VAR_27, 0x305D, 0x07);
 FUNC_4(VAR_27, 0x3060, 0x30);
 FUNC_4(VAR_27, 0x3065, 0x00);
 FUNC_4(VAR_27, 0x30AA, 0x08);
 FUNC_4(VAR_27, 0x30AB, 0x1C);
 FUNC_4(VAR_27, 0x30B0, 0x32);
 FUNC_4(VAR_27, 0x30B2, 0x83);
 FUNC_4(VAR_27, 0x30D3, 0x04);
 FUNC_4(VAR_27, 0x3106, 0x78);
 FUNC_4(VAR_27, 0x310C, 0x82);
 FUNC_4(VAR_27, 0x3304, 0x05);
 FUNC_4(VAR_27, 0x3305, 0x04);
 FUNC_4(VAR_27, 0x3306, 0x11);
 FUNC_4(VAR_27, 0x3307, 0x02);
 FUNC_4(VAR_27, 0x3308, 0x0C);
 FUNC_4(VAR_27, 0x3309, 0x06);
 FUNC_4(VAR_27, 0x330A, 0x08);
 FUNC_4(VAR_27, 0x330B, 0x04);
 FUNC_4(VAR_27, 0x330C, 0x08);
 FUNC_4(VAR_27, 0x330D, 0x06);
 FUNC_4(VAR_27, 0x330E, 0x01);
 FUNC_4(VAR_27, 0x3381, 0x00);



 FUNC_4(VAR_27, VAR_1, 0x06);
 FUNC_4(VAR_27, VAR_2, 0x48);
 FUNC_4(VAR_27, VAR_21, 0x00);
 FUNC_4(VAR_27, VAR_20, 0x2F);

 FUNC_4(VAR_27, VAR_19, 0x08);
 FUNC_4(VAR_27, VAR_18, 0x38);

 FUNC_4(VAR_27, VAR_26, 0x06);
 FUNC_4(VAR_27, VAR_25, 0x18);
 FUNC_4(VAR_27, VAR_16, 0x01);
 FUNC_4(VAR_27, VAR_17, 0x03);
 FUNC_4(VAR_27, VAR_22, 0x01);
 FUNC_4(VAR_27, VAR_23, 0x03);
 FUNC_4(VAR_27, VAR_5, 0x00);
 FUNC_4(VAR_27, VAR_14, 0x16);
 FUNC_4(VAR_27, VAR_13, 0x24);
 FUNC_4(VAR_27, VAR_12, 0x53);
 FUNC_4(VAR_27, VAR_11, 0x00);
 FUNC_4(VAR_27, VAR_4, 0x80);

 FUNC_4(VAR_27, VAR_7, 0x00);

 FUNC_4(VAR_27, VAR_3, 0x00);

 VAR_29 = 0;

done:
 FUNC_2(VAR_28, 0);
 return VAR_29;
}
