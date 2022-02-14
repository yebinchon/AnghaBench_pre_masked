
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct v4l2_ctrl {int dummy; } ;
struct msi2500_dev {unsigned int f_adc; int pixelformat; int dev; int hdl; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (int ,char*,unsigned int,unsigned int,...) ;
 unsigned int FUNC_1 (int,int) ;
 unsigned int FUNC_2 (unsigned int,int,unsigned int*) ;
 int FUNC_3 (struct msi2500_dev*,int ,int) ;
 struct v4l2_ctrl* FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (struct v4l2_ctrl*) ;
 int FUNC_6 (struct v4l2_ctrl*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct msi2500_dev *VAR_6)
{
 int VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 u32 VAR_14, VAR_15, VAR_16;
 struct v4l2_ctrl *VAR_17;
 struct v4l2_ctrl *VAR_18;

 VAR_9 = VAR_6->f_adc;


 VAR_17 = FUNC_4(&VAR_6->hdl,
   VAR_5);
 if (FUNC_5(VAR_17)) {
  VAR_18 = FUNC_4(&VAR_6->hdl,
    VAR_4);
  FUNC_6(VAR_18, VAR_6->f_adc);
 }


 switch (VAR_6->pixelformat) {
 case 128:
  VAR_16 = 0x000c9407;
  break;
 case 129:
  VAR_16 = 0x00009407;
  break;
 case 130:
  VAR_16 = 0x000c9407;
  break;
 case 133:
  VAR_16 = 0x0000a507;
  break;
 case 132:
  VAR_16 = 0x00008507;
  break;
 case 131:
  VAR_16 = 0x00009407;
  break;
 default:
  VAR_16 = 0x000c9407;
  break;
 }
 VAR_14 = 0x01000303;
 VAR_15 = 0x00000004;


 if (VAR_9 < 6000000)
  VAR_14 |= 0x1 << 20;
 else if (VAR_9 < 7000000)
  VAR_14 |= 0x5 << 20;
 else if (VAR_9 < 8500000)
  VAR_14 |= 0x9 << 20;
 else
  VAR_14 |= 0xd << 20;

 for (VAR_13 = 4; VAR_13 < 16; VAR_13 += 2) {
  VAR_8 = VAR_9 * VAR_13 * 12;
  FUNC_0(VAR_6->dev, "div_out=%u f_vco=%u\n", VAR_13, VAR_8);
  if (VAR_8 >= 202000000)
   break;
 }


 VAR_10 = FUNC_2(VAR_8, 2 * 24000000, &VAR_11);
 VAR_12 = FUNC_1((u64) VAR_11 * 0x200000, 2 * 24000000);

 VAR_14 |= VAR_10 << 16;
 VAR_14 |= (VAR_13 / 2 - 1) << 10;
 VAR_14 |= ((VAR_12 >> 20) & 0x000001) << 15;
 VAR_15 |= ((VAR_12 >> 0) & 0x0fffff) << 8;

 FUNC_0(VAR_6->dev,
  "f_sr=%u f_vco=%u div_n=%u k=%u div_out=%u reg3=%08x reg4=%08x\n",
  VAR_9, VAR_8, VAR_10, VAR_11, VAR_13, VAR_14, VAR_15);

 VAR_7 = FUNC_3(VAR_6, VAR_0, 0x00608008);
 if (VAR_7)
  goto err;

 VAR_7 = FUNC_3(VAR_6, VAR_0, 0x00000c05);
 if (VAR_7)
  goto err;

 VAR_7 = FUNC_3(VAR_6, VAR_0, 0x00020000);
 if (VAR_7)
  goto err;

 VAR_7 = FUNC_3(VAR_6, VAR_0, 0x00480102);
 if (VAR_7)
  goto err;

 VAR_7 = FUNC_3(VAR_6, VAR_0, 0x00f38008);
 if (VAR_7)
  goto err;

 VAR_7 = FUNC_3(VAR_6, VAR_0, VAR_16);
 if (VAR_7)
  goto err;

 VAR_7 = FUNC_3(VAR_6, VAR_0, VAR_15);
 if (VAR_7)
  goto err;

 VAR_7 = FUNC_3(VAR_6, VAR_0, VAR_14);
err:
 return VAR_7;
}
