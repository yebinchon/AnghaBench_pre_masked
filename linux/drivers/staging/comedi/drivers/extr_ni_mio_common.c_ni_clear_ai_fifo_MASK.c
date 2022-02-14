
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {scalar_t__ is_625x; scalar_t__ is_6143; } ;
struct comedi_device {int class_dev; struct ni_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct comedi_device*,int ) ;
 int FUNC_3 (struct comedi_device*,int,int ) ;
 int FUNC_4 (struct comedi_device*,int,int ) ;
 int FUNC_5 (struct comedi_device*,int,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct comedi_device *VAR_5)
{
 struct ni_private *VAR_6 = VAR_5->private;
 static const int VAR_7 = 10000;
 int VAR_8;

 if (VAR_6->is_6143) {

  FUNC_5(VAR_5, 0x10, VAR_0);
  FUNC_5(VAR_5, 0x00, VAR_0);

  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   if (!(FUNC_2(VAR_5, VAR_1) & 0x10))
    break;
   FUNC_6(1);
  }
  if (VAR_8 == VAR_7)
   FUNC_1(VAR_5->class_dev, "FIFO flush timeout\n");
 } else {
  FUNC_3(VAR_5, 1, VAR_2);
  if (VAR_6->is_625x) {
   FUNC_4(VAR_5, 0, FUNC_0(0));
   FUNC_4(VAR_5, 1, FUNC_0(0));
  }
 }
}
