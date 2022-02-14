
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct saa7127_state {scalar_t__ ident; int std; int reg_61; } ;
struct i2c_reg_value {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct i2c_reg_value* VAR_8 ;
 struct i2c_reg_value* VAR_9 ;
 struct i2c_reg_value* VAR_10 ;
 int FUNC_0 (struct v4l2_subdev*,struct i2c_reg_value const*) ;
 struct saa7127_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_11, v4l2_std_id VAR_12)
{
 struct saa7127_state *VAR_13 = FUNC_1(VAR_11);
 const struct i2c_reg_value *VAR_14;

 if (VAR_12 & VAR_4) {
  FUNC_2(1, VAR_7, VAR_11, "Selecting 60 Hz video Standard\n");
  VAR_14 = VAR_10;
  VAR_13->reg_61 = VAR_2;

 } else if (VAR_13->ident == VAR_3 &&
     (VAR_12 & VAR_6) &&
     !(VAR_12 & (VAR_5 & ~VAR_6))) {


  FUNC_2(1, VAR_7, VAR_11,
    "Selecting 50 Hz SECAM video Standard\n");
  VAR_14 = VAR_9;
  VAR_13->reg_61 = VAR_1;

 } else {
  FUNC_2(1, VAR_7, VAR_11, "Selecting 50 Hz PAL video Standard\n");
  VAR_14 = VAR_8;
  VAR_13->reg_61 = VAR_0;
 }


 FUNC_0(VAR_11, VAR_14);
 VAR_13->std = VAR_12;
 return 0;
}
