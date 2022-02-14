
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci224_private {int ao_scan_order; int ao_scan_vals; } ;
struct comedi_device {struct pci224_private* private; } ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0)
{
 struct pci224_private *VAR_1 = VAR_0->private;

 FUNC_0(VAR_0);
 if (VAR_1) {
  FUNC_1(VAR_1->ao_scan_vals);
  FUNC_1(VAR_1->ao_scan_order);
 }
}
