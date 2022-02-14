
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct msp_state {int route_in; int route_out; scalar_t__ opmode; int rxsubchans; int mode; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int,int) ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,int,int) ;
 struct msp_state* FUNC_5 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_4,
    u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct msp_state *VAR_8 = FUNC_5(VAR_4);
 struct i2c_client *VAR_9 = FUNC_6(VAR_4);
 int VAR_10 = (VAR_5 >> 3) & 1;
 int VAR_11 = VAR_5 & 0x7;
 int VAR_12 = VAR_6 & 0xf;
 int VAR_13 = (VAR_6 >> 4) & 0xf;
 u16 VAR_14, VAR_15;
 int VAR_16;
 int VAR_17 = 1;

 if (VAR_8->route_in == VAR_5 && VAR_8->route_out == VAR_6)
  return 0;
 VAR_8->route_in = VAR_5;
 VAR_8->route_out = VAR_6;

 for (VAR_16 = 0; VAR_16 < 5; VAR_16++) {
  if (((VAR_5 >> (4 + VAR_16 * 4)) & 0xf) == 0)
   VAR_17 = 0;
 }
 VAR_8->mode = VAR_17 ? VAR_1 : VAR_0;
 VAR_8->rxsubchans = VAR_3;
 FUNC_2(VAR_9, VAR_11, 0);
 FUNC_2(VAR_9, VAR_12, 1);
 FUNC_2(VAR_9, VAR_13, 2);
 FUNC_1(VAR_9);
 VAR_15 = (VAR_8->opmode == VAR_2) ? 0x30 : 0xbb;
 VAR_14 = FUNC_0(VAR_9, VAR_15);
 FUNC_4(VAR_9, VAR_15, (VAR_14 & ~0x100) | (VAR_10 << 8));

 FUNC_3(VAR_9);
 return 0;
}
