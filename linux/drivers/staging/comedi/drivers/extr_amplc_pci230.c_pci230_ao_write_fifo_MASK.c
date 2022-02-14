
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci230_private {scalar_t__ daqio; } ;
struct comedi_device {struct pci230_private* private; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct comedi_device*,unsigned short) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_1,
     unsigned short VAR_2, unsigned int VAR_3)
{
 struct pci230_private *VAR_4 = VAR_1->private;


 FUNC_0(FUNC_1(VAR_1, VAR_2),
      VAR_4->daqio + VAR_0);
}
