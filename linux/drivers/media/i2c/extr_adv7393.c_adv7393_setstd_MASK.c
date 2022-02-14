
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct adv7393_std_info {int stdid; int standard_val3; int fsc_val; } ;
struct adv7393_state {int reg80; int reg01; int reg82; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct adv7393_std_info*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct v4l2_subdev*,scalar_t__,int) ;
 int VAR_13 ;
 struct adv7393_std_info* VAR_14 ;
 struct adv7393_state* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int,int ,struct v4l2_subdev*,char*,unsigned long long) ;
 int FUNC_4 (struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_15, v4l2_std_id VAR_16)
{
 struct adv7393_state *VAR_17 = FUNC_2(VAR_15);
 const struct adv7393_std_info *VAR_18;
 int VAR_19;
 u8 VAR_20;
 u32 VAR_21;
 int VAR_22 = 0;
 int VAR_23;

 VAR_19 = FUNC_0(VAR_14);

 for (VAR_23 = 0; VAR_23 < VAR_19; VAR_23++) {
  if (VAR_14[VAR_23].stdid & VAR_16)
   break;
 }

 if (VAR_23 == VAR_19) {
  FUNC_3(1, VAR_13, VAR_15,
    "Invalid std or std is not supported: %llx\n",
      (unsigned long long)VAR_16);
  return -VAR_5;
 }

 VAR_18 = &VAR_14[VAR_23];


 VAR_21 = VAR_17->reg80 & ~VAR_10;
 VAR_21 |= VAR_18->standard_val3;
 VAR_22 = FUNC_1(VAR_15, VAR_3, VAR_21);
 if (VAR_22 < 0)
  goto setstd_exit;

 VAR_17->reg80 = VAR_21;


 VAR_21 = VAR_17->reg01 & ~VAR_6;
 VAR_21 |= VAR_7;
 VAR_22 = FUNC_1(VAR_15, VAR_2, VAR_21);
 if (VAR_22 < 0)
  goto setstd_exit;

 VAR_17->reg01 = VAR_21;


 VAR_21 = VAR_18->fsc_val;
 for (VAR_20 = VAR_0; VAR_20 <= VAR_1; VAR_20++) {
  VAR_22 = FUNC_1(VAR_15, VAR_20, VAR_21);
  if (VAR_22 < 0)
   goto setstd_exit;
  VAR_21 >>= 8;
 }

 VAR_21 = VAR_17->reg82;


 if (VAR_16 & (VAR_11 | VAR_12))
  VAR_21 |= VAR_9;
 else
  VAR_21 &= VAR_8;

 VAR_22 = FUNC_1(VAR_15, VAR_4, VAR_21);
 if (VAR_22 < 0)
  goto setstd_exit;

 VAR_17->reg82 = VAR_21;

setstd_exit:
 if (VAR_22 != 0)
  FUNC_4(VAR_15, "Error setting std, write failed\n");

 return VAR_22;
}
