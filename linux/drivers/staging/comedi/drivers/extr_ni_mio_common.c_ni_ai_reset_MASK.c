
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {scalar_t__ is_622x; scalar_t__ is_6143; scalar_t__ is_611x; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct ni_private* private; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int) ;
 int VAR_10 ;
 unsigned int FUNC_2 (int) ;
 unsigned int FUNC_3 (int) ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (struct comedi_device*) ;
 int FUNC_6 (struct comedi_device*,int ,int ,int ) ;
 int FUNC_7 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_8 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_26, struct comedi_subdevice *VAR_27)
{
 struct ni_private *VAR_28 = VAR_26->private;
 unsigned int VAR_29;
 unsigned int VAR_30;

 FUNC_5(VAR_26);

 FUNC_7(VAR_26, VAR_22 | VAR_20,
        VAR_23);

 FUNC_6(VAR_26, VAR_19, VAR_18, 0);

 FUNC_4(VAR_26);

 if (!VAR_28->is_6143)
  FUNC_8(VAR_26, VAR_24, VAR_25);

 FUNC_7(VAR_26, VAR_0, VAR_1);
 FUNC_7(VAR_26, VAR_4 |
      VAR_3
                                         ,
        VAR_2);
 FUNC_7(VAR_26, 0, VAR_5);

 FUNC_7(VAR_26, VAR_6,
        VAR_7);

 VAR_29 = VAR_14 |
        VAR_15 |
        VAR_12;
 VAR_30 = FUNC_2(3) |
        FUNC_0(0) |
        FUNC_1(2) |
        FUNC_3(3);
 if (VAR_28->is_611x) {
  VAR_30 |= VAR_8;
 } else if (VAR_28->is_6143) {
  VAR_30 |= VAR_9;
 } else {
  VAR_29 |= VAR_11;
  if (VAR_28->is_622x)
   VAR_30 |= VAR_8;
  else
   VAR_30 |= VAR_9;
 }
 FUNC_7(VAR_26, VAR_29, VAR_13);
 FUNC_7(VAR_26, VAR_30, VAR_10);
 FUNC_7(VAR_26, VAR_16, VAR_17);

 FUNC_7(VAR_26, VAR_21, VAR_23);

 return 0;
}
