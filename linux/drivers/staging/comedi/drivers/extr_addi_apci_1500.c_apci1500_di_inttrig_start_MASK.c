
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int class_dev; struct apci1500_private* private; } ;
struct comedi_cmd {unsigned int start_arg; } ;
struct apci1500_private {int* pm; int* pt; int* pp; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
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
 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (int ,char*,...) ;
 unsigned int FUNC_2 (struct comedi_device*,int ) ;
 int FUNC_3 (struct comedi_device*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_20,
         struct comedi_subdevice *VAR_21,
         unsigned int VAR_22)
{
 struct apci1500_private *VAR_23 = VAR_20->private;
 struct comedi_cmd *VAR_24 = &VAR_21->async->cmd;
 unsigned int VAR_25 = VAR_7;
 unsigned int VAR_26 = VAR_7;
 unsigned int VAR_27 = VAR_22 & 0x01;
 unsigned int VAR_28 = (VAR_22 >> 1) & 0x01;
 bool VAR_29 = 0;
 unsigned int VAR_30;

 if (VAR_22 != VAR_24->start_arg)
  return -VAR_0;


 FUNC_0(VAR_20, 0);


 FUNC_3(VAR_20, VAR_23->pm[VAR_27] & 0xff, VAR_12);
 FUNC_3(VAR_20, VAR_23->pt[VAR_27] & 0xff, VAR_14);
 FUNC_3(VAR_20, VAR_23->pp[VAR_27] & 0xff, VAR_13);


 FUNC_3(VAR_20, (VAR_23->pm[VAR_28] >> 8) & 0xff, VAR_17);
 FUNC_3(VAR_20, (VAR_23->pt[VAR_28] >> 8) & 0xff, VAR_19);
 FUNC_3(VAR_20, (VAR_23->pp[VAR_28] >> 8) & 0xff, VAR_18);


 if (VAR_23->pm[VAR_27] & 0xff) {
  VAR_25 = VAR_27 ? VAR_6
      : VAR_9;

  VAR_30 = FUNC_2(VAR_20, VAR_11);
  VAR_30 &= ~VAR_8;
  VAR_30 |= (VAR_25 | VAR_5);
  FUNC_3(VAR_20, VAR_30, VAR_11);

  FUNC_3(VAR_20, VAR_1, VAR_10);

  VAR_29 = 1;

  FUNC_1(VAR_20->class_dev,
   "Port A configured for %s mode pattern detection\n",
   VAR_27 ? "AND" : "OR");
 }


 if (VAR_23->pm[VAR_28] & 0xff00) {
  VAR_26 = VAR_28 ? VAR_6
      : VAR_9;

  VAR_30 = FUNC_2(VAR_20, VAR_16);
  VAR_30 &= ~VAR_8;
  VAR_30 |= (VAR_26 | VAR_5);
  FUNC_3(VAR_20, VAR_30, VAR_16);

  FUNC_3(VAR_20, VAR_1, VAR_15);

  VAR_29 = 1;

  FUNC_1(VAR_20->class_dev,
   "Port B configured for %s mode pattern detection\n",
   VAR_28 ? "AND" : "OR");
 }


 FUNC_0(VAR_20, 1);

 if (!VAR_29) {
  FUNC_1(VAR_20->class_dev,
   "digital trigger %d is not configured\n", VAR_22);
  return -VAR_0;
 }


 FUNC_3(VAR_20, VAR_3 | VAR_2,
      VAR_4);

 return 0;
}
