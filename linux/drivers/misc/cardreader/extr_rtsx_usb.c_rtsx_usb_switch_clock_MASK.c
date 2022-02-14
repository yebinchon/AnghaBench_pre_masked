
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtsx_ucr {unsigned int cur_clk; TYPE_1__* pusb_intf; } ;
struct TYPE_2__ {int dev; } ;


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
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct rtsx_ucr*,int ,int ,int,int) ;
 int FUNC_4 (struct rtsx_ucr*) ;
 int FUNC_5 (struct rtsx_ucr*,int ,int) ;
 int FUNC_6 (struct rtsx_ucr*,int ,int,int) ;
 int FUNC_7 (int,int) ;

int FUNC_8(struct rtsx_ucr *VAR_22, unsigned int VAR_23,
  u8 VAR_24, bool VAR_25, bool VAR_26, bool VAR_27)
{
 int VAR_28;
 u8 VAR_29, VAR_30, VAR_31, VAR_32;

 if (!VAR_23) {
  VAR_22->cur_clk = 0;
  return 0;
 }

 if (VAR_25) {

  VAR_30 = VAR_11;
  VAR_23 = 30000000;
 } else {
  VAR_30 = VAR_10;
 }

 VAR_28 = FUNC_6(VAR_22, VAR_9,
   VAR_12, VAR_30);
 if (VAR_28 < 0)
  return VAR_28;

 VAR_23 /= 1000000;
 FUNC_0(&VAR_22->pusb_intf->dev,
   "Switch card clock to %dMHz\n", VAR_23);

 if (!VAR_25 && VAR_26)
  VAR_23 *= 2;
 FUNC_0(&VAR_22->pusb_intf->dev,
   "Internal SSC clock: %dMHz (cur_clk = %d)\n",
   VAR_23, VAR_22->cur_clk);

 if (VAR_23 == VAR_22->cur_clk)
  return 0;


 VAR_29 = VAR_23 - 2;
 if ((VAR_23 <= 2) || (VAR_29 > VAR_5))
  return -VAR_4;

 VAR_31 = 60/VAR_23 + 3;
 if (VAR_31 > 15)
  VAR_31 = 15;



 VAR_32 = VAR_2;
 while (VAR_29 < VAR_6 && VAR_32 < VAR_3) {
  VAR_29 = (VAR_29 + 2) * 2 - 2;
  VAR_32++;
 }
 FUNC_0(&VAR_22->pusb_intf->dev, "n = %d, div = %d\n", VAR_29, VAR_32);

 if (VAR_26)
  VAR_24 = FUNC_1(VAR_24);

 VAR_24 = FUNC_2(VAR_24, VAR_32);
 FUNC_0(&VAR_22->pusb_intf->dev, "ssc_depth = %d\n", VAR_24);

 FUNC_4(VAR_22);
 FUNC_3(VAR_22, VAR_21, VAR_1, VAR_0, VAR_0);
 FUNC_3(VAR_22, VAR_21, VAR_1,
   0x3F, (VAR_32 << 4) | VAR_31);
 FUNC_3(VAR_22, VAR_21, VAR_15, VAR_19, 0);
 FUNC_3(VAR_22, VAR_21, VAR_16,
   VAR_17, VAR_24);
 FUNC_3(VAR_22, VAR_21, VAR_18, 0xFF, VAR_29);
 FUNC_3(VAR_22, VAR_21, VAR_15, VAR_19, VAR_19);
 if (VAR_27) {
  FUNC_3(VAR_22, VAR_21, VAR_13,
    VAR_8, 0);
  FUNC_3(VAR_22, VAR_21, VAR_13,
    VAR_8, VAR_8);
 }

 VAR_28 = FUNC_5(VAR_22, VAR_7, 2000);
 if (VAR_28 < 0)
  return VAR_28;

 VAR_28 = FUNC_6(VAR_22, VAR_15, 0xff,
   VAR_19 | VAR_14 | VAR_20);
 if (VAR_28 < 0)
  return VAR_28;


 FUNC_7(100, 1000);

 VAR_28 = FUNC_6(VAR_22, VAR_1, VAR_0, 0);
 if (VAR_28 < 0)
  return VAR_28;

 VAR_22->cur_clk = VAR_23;

 return 0;
}
