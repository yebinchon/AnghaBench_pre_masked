
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_modulator {int txsubchans; scalar_t__ index; } ;
struct v4l2_frequency {scalar_t__ frequency; scalar_t__ tuner; } ;
struct si4713_device {int sd; scalar_t__ rds_enabled; scalar_t__ stereo; scalar_t__ frequency; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct v4l2_frequency*) ;
 int FUNC_1 (int *,struct v4l2_modulator*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct si4713_device *VAR_4)
{
 struct v4l2_frequency VAR_5;
 struct v4l2_modulator VAR_6;
 int VAR_7;


 VAR_5.tuner = 0;
 VAR_5.frequency = VAR_4->frequency ? VAR_4->frequency : VAR_0;
 VAR_5.frequency = FUNC_2(VAR_5.frequency);
 VAR_7 = FUNC_0(&VAR_4->sd, &VAR_5);

 VAR_6.index = 0;
 if (VAR_4->stereo)
  VAR_6.txsubchans = VAR_3;
 else
  VAR_6.txsubchans = VAR_1;
 if (VAR_4->rds_enabled)
  VAR_6.txsubchans |= VAR_2;
 FUNC_1(&VAR_4->sd, &VAR_6);

 return VAR_7;
}
