
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc624_private {void* ai_speed; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int insn_read; int * range_table; int type; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
struct comedi_devconfig {int* options; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct mpc624_private* FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_17, struct comedi_devconfig *VAR_18)
{
 struct mpc624_private *VAR_19;
 struct comedi_subdevice *VAR_20;
 int VAR_21;

 VAR_21 = FUNC_2(VAR_17, VAR_18->options[0], 0x10);
 if (VAR_21)
  return VAR_21;

 VAR_19 = FUNC_0(VAR_17, sizeof(*VAR_19));
 if (!VAR_19)
  return -VAR_1;

 switch (VAR_18->options[1]) {
 case 0:
  VAR_19->ai_speed = VAR_7;
  break;
 case 1:
  VAR_19->ai_speed = VAR_4;
  break;
 case 2:
  VAR_19->ai_speed = VAR_11;
  break;
 case 3:
  VAR_19->ai_speed = VAR_8;
  break;
 case 4:
  VAR_19->ai_speed = VAR_5;
  break;
 case 5:
  VAR_19->ai_speed = VAR_2;
  break;
 case 6:
  VAR_19->ai_speed = VAR_9;
  break;
 case 7:
  VAR_19->ai_speed = VAR_6;
  break;
 case 8:
  VAR_19->ai_speed = VAR_3;
  break;
 case 9:
  VAR_19->ai_speed = VAR_10;
  break;
 default:
  VAR_19->ai_speed = VAR_7;
 }

 VAR_21 = FUNC_1(VAR_17, 1);
 if (VAR_21)
  return VAR_21;


 VAR_20 = &VAR_17->subdevices[0];
 VAR_20->type = VAR_0;
 VAR_20->subdev_flags = VAR_13 | VAR_12;
 VAR_20->n_chan = 4;
 VAR_20->maxdata = 0x3fffffff;
 VAR_20->range_table = (VAR_18->options[1] == 0) ? &VAR_15
      : &VAR_16;
 VAR_20->insn_read = VAR_14;

 return 0;
}
