
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_modulator {scalar_t__ index; int capability; int txsubchans; void* rangehigh; void* rangelow; int name; } ;
struct si4713_device {scalar_t__ rds_enabled; scalar_t__ stereo; scalar_t__ power_state; } ;


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
 scalar_t__ FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct si4713_device*,int ,int *) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 struct si4713_device* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_12, struct v4l2_modulator *VAR_13)
{
 struct si4713_device *VAR_14 = FUNC_4(VAR_12);
 int VAR_15 = 0;

 if (!VAR_14)
  return -VAR_1;

 if (VAR_13->index > 0)
  return -VAR_0;

 FUNC_3(VAR_13->name, "FM Modulator", sizeof(VAR_13->name));
 VAR_13->capability = VAR_8 | VAR_5 |
  VAR_6 | VAR_7;


 VAR_13->rangelow = FUNC_2(VAR_3);
 VAR_13->rangehigh = FUNC_2(VAR_2);

 if (VAR_14->power_state) {
  u32 VAR_16 = 0;

  VAR_15 = FUNC_1(VAR_14, VAR_4,
      &VAR_16);
  if (VAR_15 < 0)
   return VAR_15;

  VAR_14->stereo = FUNC_0(VAR_16, 1, 1 << 1);
 }


 if (VAR_14->stereo)
  VAR_13->txsubchans = VAR_11;
 else
  VAR_13->txsubchans = VAR_9;


 if (VAR_14->rds_enabled)
  VAR_13->txsubchans |= VAR_10;
 else
  VAR_13->txsubchans &= ~VAR_10;

 return VAR_15;
}
