
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int serial_interval_ns; int dio_control; int dio_output; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int class_dev; struct ni_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (struct comedi_device*,int ) ;
 int FUNC_3 (struct comedi_device*,int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_9,
       struct comedi_subdevice *VAR_10,
       unsigned char VAR_11,
       unsigned char *VAR_12)
{
 struct ni_private *VAR_13 = VAR_9->private;
 unsigned int VAR_14;
 int VAR_15 = 0, VAR_16 = 20;

 VAR_13->dio_output &= ~VAR_5;
 VAR_13->dio_output |= FUNC_0(VAR_11);
 FUNC_3(VAR_9, VAR_13->dio_output, VAR_4);

 VAR_14 = FUNC_2(VAR_9, VAR_7);
 if (VAR_14 & VAR_8) {
  VAR_15 = -VAR_0;
  goto error;
 }

 VAR_13->dio_control |= VAR_2;
 FUNC_3(VAR_9, VAR_13->dio_control, VAR_3);
 VAR_13->dio_control &= ~VAR_2;


 while ((VAR_14 = FUNC_2(VAR_9, VAR_7)) &
        VAR_8) {

  FUNC_4((VAR_13->serial_interval_ns + 999) / 1000);
  if (--VAR_16 < 0) {
   FUNC_1(VAR_9->class_dev,
    "SPI serial I/O didn't finish in time!\n");
   VAR_15 = -VAR_1;
   goto error;
  }
 }





 FUNC_4((VAR_13->serial_interval_ns + 999) / 1000);

 if (VAR_12)
  *VAR_12 = FUNC_2(VAR_9, VAR_6);

error:
 FUNC_3(VAR_9, VAR_13->dio_control, VAR_3);

 return VAR_15;
}
