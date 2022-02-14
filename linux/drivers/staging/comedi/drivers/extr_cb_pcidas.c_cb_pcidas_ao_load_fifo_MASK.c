
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct cb_pcidas_private* private; } ;
struct cb_pcidas_private {int ao_buffer; scalar_t__ pcibar4; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct comedi_subdevice*,int ,unsigned int) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,unsigned int) ;
 unsigned int FUNC_2 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_3 (scalar_t__,int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_1,
       struct comedi_subdevice *VAR_2,
       unsigned int VAR_3)
{
 struct cb_pcidas_private *VAR_4 = VAR_1->private;
 unsigned int VAR_5;

 VAR_3 = FUNC_2(VAR_2, VAR_3);
 VAR_5 = FUNC_0(VAR_2, VAR_4->ao_buffer, VAR_3);

 VAR_3 = FUNC_1(VAR_2, VAR_5);
 FUNC_3(VAR_4->pcibar4 + VAR_0,
       VAR_4->ao_buffer, VAR_3);
}
