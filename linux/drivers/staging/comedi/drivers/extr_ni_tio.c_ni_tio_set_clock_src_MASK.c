
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {int variant; struct comedi_device* dev; } ;
struct ni_gpct {unsigned int counter_index; unsigned int clock_period_ps; struct ni_gpct_device* counter_dev; } ;
struct comedi_device {int class_dev; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 unsigned int VAR_3 ;

 unsigned int VAR_4 ;


 int FUNC_4 (int ,char*,unsigned int) ;
 int FUNC_5 (unsigned int,unsigned int*) ;



 int FUNC_6 (unsigned int,unsigned int*) ;
 scalar_t__ FUNC_7 (struct ni_gpct_device*) ;
 int FUNC_8 (struct ni_gpct*,int ,unsigned int,unsigned int) ;
 int FUNC_9 (struct ni_gpct*,unsigned int) ;
 int FUNC_10 (struct ni_gpct*) ;

__attribute__((used)) static int FUNC_11(struct ni_gpct *VAR_5,
    unsigned int VAR_6,
    unsigned int VAR_7)
{
 struct ni_gpct_device *VAR_8 = VAR_5->counter_dev;
 unsigned int VAR_9 = VAR_5->counter_index;
 unsigned int VAR_10 = 0;
 int VAR_11;

 switch (VAR_8->variant) {
 case 130:
  VAR_11 = FUNC_5(VAR_6, &VAR_10);
  break;
 case 129:
 case 128:
 default:
  VAR_11 = FUNC_6(VAR_6, &VAR_10);
  break;
 }
 if (VAR_11) {
  struct comedi_device *VAR_12 = VAR_8->dev;

  FUNC_4(VAR_12->class_dev, "invalid clock source 0x%x\n",
   VAR_6);
  return VAR_11;
 }

 if (VAR_6 & VAR_3)
  VAR_10 |= VAR_1;
 FUNC_8(VAR_5, FUNC_3(VAR_9),
   VAR_2 | VAR_1, VAR_10);
 FUNC_9(VAR_5, VAR_6);

 if (FUNC_7(VAR_8)) {
  VAR_10 = 0;
  switch (VAR_6 & VAR_4) {
  case 133:
   break;
  case 132:
   VAR_10 |= FUNC_0(VAR_8->variant);
   break;
  case 131:
   VAR_10 |= FUNC_1(VAR_8->variant);
   break;
  default:
   return -VAR_0;
  }
  FUNC_8(VAR_5, FUNC_2(VAR_9),
    FUNC_0(VAR_8->variant) |
    FUNC_1(VAR_8->variant), VAR_10);
 }
 VAR_5->clock_period_ps = VAR_7 * 1000;
 FUNC_10(VAR_5);
 return 0;
}
