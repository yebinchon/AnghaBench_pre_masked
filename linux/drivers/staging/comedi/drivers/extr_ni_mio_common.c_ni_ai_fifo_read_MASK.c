
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {unsigned short* ai_fifo_buffer; scalar_t__ is_6143; scalar_t__ is_611x; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int class_dev; struct ni_private* private; } ;
struct comedi_async {int events; } ;


 int FUNC_0 (unsigned short*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct comedi_subdevice*,unsigned short*,int) ;
 int FUNC_2 (int ,char*) ;
 unsigned int FUNC_3 (struct comedi_device*,int ) ;
 unsigned short FUNC_4 (struct comedi_device*,int ) ;
 int FUNC_5 (struct comedi_device*,int,int ) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_5,
       struct comedi_subdevice *VAR_6, int VAR_7)
{
 struct ni_private *VAR_8 = VAR_5->private;
 struct comedi_async *VAR_9 = VAR_6->async;
 unsigned int VAR_10;
 unsigned short VAR_11;
 int VAR_12;

 if (VAR_8->is_611x) {
  for (VAR_12 = 0; VAR_12 < VAR_7 / 2; VAR_12++) {
   VAR_10 = FUNC_3(VAR_5, VAR_1);

   VAR_11 = (VAR_10 >> 16) & 0xffff;
   FUNC_1(VAR_6, &VAR_11, 1);
   VAR_11 = VAR_10 & 0xffff;
   FUNC_1(VAR_6, &VAR_11, 1);
  }

  if (VAR_7 % 2) {
   VAR_10 = FUNC_3(VAR_5, VAR_1);
   VAR_11 = VAR_10 & 0xffff;
   FUNC_1(VAR_6, &VAR_11, 1);
  }
 } else if (VAR_8->is_6143) {




  for (VAR_12 = 0; VAR_12 < VAR_7 / 2; VAR_12++) {
   VAR_10 = FUNC_3(VAR_5, VAR_3);

   VAR_11 = (VAR_10 >> 16) & 0xffff;
   FUNC_1(VAR_6, &VAR_11, 1);
   VAR_11 = VAR_10 & 0xffff;
   FUNC_1(VAR_6, &VAR_11, 1);
  }
  if (VAR_7 % 2) {


   FUNC_5(VAR_5, 0x01, VAR_2);
   VAR_10 = FUNC_3(VAR_5, VAR_3);
   VAR_11 = (VAR_10 >> 16) & 0xffff;
   FUNC_1(VAR_6, &VAR_11, 1);
  }
 } else {
  if (VAR_7 > FUNC_0(VAR_8->ai_fifo_buffer)) {
   FUNC_2(VAR_5->class_dev,
    "bug! ai_fifo_buffer too small\n");
   VAR_9->events |= VAR_0;
   return;
  }
  for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
   VAR_8->ai_fifo_buffer[VAR_12] =
       FUNC_4(VAR_5, VAR_4);
  }
  FUNC_1(VAR_6, VAR_8->ai_fifo_buffer, VAR_7);
 }
}
