
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct labpc_private {int (* write_byte ) (struct comedi_device*,unsigned int,int ) ;} ;
struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_device {struct labpc_private* private; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_3 (struct comedi_device*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_0,
      struct comedi_subdevice *VAR_1,
      unsigned int VAR_2, unsigned int VAR_3)
{
 struct labpc_private *VAR_4 = VAR_0->private;

 VAR_4->write_byte(VAR_0, VAR_3 & 0xff, FUNC_0(VAR_2));
 VAR_4->write_byte(VAR_0, (VAR_3 >> 8) & 0xff, FUNC_1(VAR_2));

 VAR_1->readback[VAR_2] = VAR_3;
}
