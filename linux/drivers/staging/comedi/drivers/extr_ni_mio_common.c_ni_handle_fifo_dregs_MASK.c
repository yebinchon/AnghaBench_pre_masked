
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {unsigned short* ai_fifo_buffer; scalar_t__ is_6143; scalar_t__ is_611x; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct comedi_subdevice* read_subdev; struct ni_private* private; } ;


 int FUNC_0 (unsigned short*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned short VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct comedi_subdevice*,unsigned short*,int) ;
 int FUNC_2 (struct comedi_device*,int ) ;
 unsigned short FUNC_3 (struct comedi_device*,int ) ;
 unsigned short FUNC_4 (struct comedi_device*,int ) ;
 int FUNC_5 (struct comedi_device*,int,int ) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_7)
{
 struct ni_private *VAR_8 = VAR_7->private;
 struct comedi_subdevice *VAR_9 = VAR_7->read_subdev;
 unsigned int VAR_10;
 unsigned short VAR_11;
 int VAR_12;

 if (VAR_8->is_611x) {
  while ((FUNC_4(VAR_7, VAR_5) &
   VAR_4) == 0) {
   VAR_10 = FUNC_2(VAR_7, VAR_0);


   VAR_11 = VAR_10 >> 16;
   FUNC_1(VAR_9, &VAR_11, 1);
   VAR_11 = VAR_10 & 0xffff;
   FUNC_1(VAR_9, &VAR_11, 1);
  }
 } else if (VAR_8->is_6143) {
  VAR_12 = 0;
  while (FUNC_2(VAR_7, VAR_3) & 0x04) {
   VAR_10 = FUNC_2(VAR_7, VAR_2);


   VAR_11 = VAR_10 >> 16;
   FUNC_1(VAR_9, &VAR_11, 1);
   VAR_11 = VAR_10 & 0xffff;
   FUNC_1(VAR_9, &VAR_11, 1);
   VAR_12 += 2;
  }

  if (FUNC_2(VAR_7, VAR_3) & 0x01) {

   FUNC_5(VAR_7, 0x01, VAR_1);
   VAR_10 = FUNC_2(VAR_7, VAR_2);
   VAR_11 = (VAR_10 >> 16) & 0xffff;
   FUNC_1(VAR_9, &VAR_11, 1);
  }

 } else {
  unsigned short VAR_13;

  VAR_13 = FUNC_4(VAR_7, VAR_5) &
       VAR_4;
  while (VAR_13 == 0) {
   for (VAR_12 = 0;
        VAR_12 < FUNC_0(VAR_8->ai_fifo_buffer); VAR_12++) {
    VAR_13 = FUNC_4(VAR_7, VAR_5) &
         VAR_4;
    if (VAR_13)
     break;
    VAR_8->ai_fifo_buffer[VAR_12] =
        FUNC_3(VAR_7, VAR_6);
   }
   FUNC_1(VAR_9, VAR_8->ai_fifo_buffer, VAR_12);
  }
 }
}
