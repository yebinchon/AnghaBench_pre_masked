
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int tuner; int frequency; int type; } ;
struct file {int dummy; } ;
struct airspy {int f_rf; int dev; int f_adc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 struct airspy* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
  struct v4l2_frequency *VAR_5)
{
 struct airspy *VAR_6 = FUNC_1(VAR_3);
 int VAR_7;

 if (VAR_5->tuner == 0) {
  VAR_5->type = VAR_1;
  VAR_5->frequency = VAR_6->f_adc;
  FUNC_0(VAR_6->dev, "ADC frequency=%u Hz\n", VAR_6->f_adc);
  VAR_7 = 0;
 } else if (VAR_5->tuner == 1) {
  VAR_5->type = VAR_2;
  VAR_5->frequency = VAR_6->f_rf;
  FUNC_0(VAR_6->dev, "RF frequency=%u Hz\n", VAR_6->f_rf);
  VAR_7 = 0;
 } else {
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
