
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int is_6143; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct comedi_subdevice* read_subdev; struct ni_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned short*,int) ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct comedi_device*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_3)
{
 struct ni_private *VAR_4 = VAR_3->private;
 struct comedi_subdevice *VAR_5 = VAR_3->read_subdev;
 unsigned short VAR_6;
 unsigned int VAR_7;

 if (!VAR_4->is_6143)
  return;


 if (FUNC_1(VAR_3, VAR_2) & 0x01) {

  FUNC_2(VAR_3, 0x01, VAR_0);
  VAR_7 = FUNC_1(VAR_3, VAR_1);


  VAR_6 = (VAR_7 >> 16) & 0xffff;
  FUNC_0(VAR_5, &VAR_6, 1);
 }
}
