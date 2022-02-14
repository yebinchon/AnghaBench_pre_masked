
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct v4l2_subdev {int name; } ;
struct v4l2_bt_timings {int hsync; scalar_t__ pixelclock; scalar_t__ interlaced; scalar_t__ width; } ;
struct v4l2_dv_timings {struct v4l2_bt_timings bt; } ;
struct tda1997x_state {int client; struct v4l2_subdev sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct v4l2_bt_timings const*) ;
 int FUNC_1 (struct v4l2_bt_timings const*) ;
 int VAR_8 ;
 int FUNC_2 (struct v4l2_subdev*,int ) ;
 int FUNC_3 (struct v4l2_subdev*,int ) ;
 int FUNC_4 (int,int ,struct v4l2_subdev*,char*,int,int,int) ;
 struct v4l2_dv_timings* VAR_9 ;
 int FUNC_5 (int ,char*,struct v4l2_dv_timings*,int) ;
 int FUNC_6 (int ,char*,int,int,int) ;

__attribute__((used)) static int
FUNC_7(struct tda1997x_state *VAR_10,
      struct v4l2_dv_timings *VAR_11)
{
 struct v4l2_subdev *VAR_12 = &VAR_10->sd;
 u32 VAR_13;
 u16 VAR_14;
 u16 VAR_15;
 int VAR_16;







 VAR_13 = FUNC_3(VAR_12, VAR_7) & VAR_4;
 VAR_14 = FUNC_2(VAR_12, VAR_6) & VAR_2;
 VAR_15 = FUNC_2(VAR_12, VAR_5) & VAR_3;
 FUNC_4(1, VAR_8, VAR_12, "Signal Timings: %u/%u/%u\n", VAR_13, VAR_14, VAR_15);
 if (!VAR_13 || !VAR_14 || !VAR_15)
  return -VAR_0;

 for (VAR_16 = 0; VAR_9[VAR_16].bt.width; VAR_16++) {
  const struct v4l2_bt_timings *VAR_17;
  u32 VAR_18, VAR_19, VAR_20, VAR_21;
  u32 VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
  bool VAR_28, VAR_29, VAR_30;

  VAR_17 = &VAR_9[VAR_16].bt;
  VAR_19 = FUNC_1(VAR_17);
  VAR_18 = FUNC_0(VAR_17);
  VAR_20 = (u32)VAR_17->pixelclock / VAR_19;
  if (VAR_17->interlaced)
   VAR_18 /= 2;

  VAR_22 = ((27000000 / 1000) * 993) / VAR_20 * VAR_18;
  VAR_23 = ((27000000 / 1000) * 1007) / VAR_20 * VAR_18;

  VAR_24 = ((27000000 / 100) * 99) / VAR_20;
  VAR_25 = ((27000000 / 100) * 101) / VAR_20;

  VAR_21 = 27000 * VAR_17->hsync / ((u32)VAR_17->pixelclock/1000);
  VAR_26 = VAR_21 - 2;
  VAR_27 = VAR_21 + 2;


  VAR_28 = ((VAR_13 <= VAR_23) && (VAR_13 >= VAR_22)) ? 1 : 0;

  VAR_29 = ((VAR_14 <= VAR_25) && (VAR_14 >= VAR_24)) ? 1 : 0;

  VAR_30 = ((VAR_15 <= VAR_27) && (VAR_15 >= VAR_26)) ? 1 : 0;
  if (VAR_29 && VAR_28 && VAR_30) {
   FUNC_5(VAR_12->name, "Detected format: ",
           &VAR_9[VAR_16],
           0);
   if (VAR_11)
    *VAR_11 = VAR_9[VAR_16];
   return 0;
  }
 }

 FUNC_6(VAR_10->client, "no resolution match for timings: %d/%d/%d\n",
  VAR_13, VAR_14, VAR_15);
 return -VAR_1;
}
