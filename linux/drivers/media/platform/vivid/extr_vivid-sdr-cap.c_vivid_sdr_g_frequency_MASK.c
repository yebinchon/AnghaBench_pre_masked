
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int sdr_fm_freq; int sdr_adc_freq; } ;
struct v4l2_frequency {int tuner; int type; int frequency; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vivid_dev* FUNC_0 (struct file*) ;

int FUNC_1(struct file *VAR_3, void *VAR_4,
  struct v4l2_frequency *VAR_5)
{
 struct vivid_dev *VAR_6 = FUNC_0(VAR_3);

 switch (VAR_5->tuner) {
 case 0:
  VAR_5->frequency = VAR_6->sdr_adc_freq;
  VAR_5->type = VAR_1;
  return 0;
 case 1:
  VAR_5->frequency = VAR_6->sdr_fm_freq;
  VAR_5->type = VAR_2;
  return 0;
 default:
  return -VAR_0;
 }
}
