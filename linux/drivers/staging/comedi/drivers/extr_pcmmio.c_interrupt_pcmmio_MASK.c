
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* read_subdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (struct comedi_device*,int ,int ) ;
 int FUNC_2 (struct comedi_device*,int ,int ,int ) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct comedi_device *VAR_6 = VAR_5;
 struct comedi_subdevice *VAR_7 = VAR_6->read_subdev;
 unsigned int VAR_8;
 unsigned char VAR_9;


 VAR_9 = FUNC_0(VAR_6->iobase + VAR_2) & 0x07;
 if (!VAR_9)
  return VAR_1;


 VAR_8 = FUNC_1(VAR_6, VAR_3, 0);
 FUNC_2(VAR_6, 0, VAR_3, 0);

 FUNC_3(VAR_6, VAR_7, VAR_8);

 return VAR_0;
}
