
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int serial_interval_ns; int dio_control; int dio_output; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct ni_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (struct comedi_device*,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_6,
       struct comedi_subdevice *VAR_7,
       unsigned char VAR_8,
       unsigned char *VAR_9)
{
 struct ni_private *VAR_10 = VAR_6->private;
 unsigned char VAR_11, VAR_12 = 0;


 FUNC_2((VAR_10->serial_interval_ns + 999) / 1000);

 for (VAR_11 = 0x80; VAR_11; VAR_11 >>= 1) {





  VAR_10->dio_output &= ~VAR_5;
  if (VAR_8 & VAR_11)
   VAR_10->dio_output |= VAR_5;
  FUNC_1(VAR_6, VAR_10->dio_output, VAR_2);





  VAR_10->dio_control |= VAR_3;
  FUNC_1(VAR_6, VAR_10->dio_control, VAR_0);

  FUNC_2((VAR_10->serial_interval_ns + 999) / 2000);

  VAR_10->dio_control &= ~VAR_3;
  FUNC_1(VAR_6, VAR_10->dio_control, VAR_0);

  FUNC_2((VAR_10->serial_interval_ns + 999) / 2000);


  if (FUNC_0(VAR_6, VAR_1) & VAR_4)
   VAR_12 |= VAR_11;
 }

 if (VAR_9)
  *VAR_9 = VAR_12;

 return 0;
}
