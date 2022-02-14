
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {unsigned short const subsystem_device; } ;
struct TYPE_3__ {unsigned short* ids; int num; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_1)
{
 const unsigned short *VAR_2;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_2 = VAR_0[VAR_3].ids;
  for (VAR_4 = 0; VAR_2[VAR_4]; VAR_4++)
   if (VAR_1->subsystem_device == VAR_2[VAR_4])
    return VAR_0[VAR_3].num;
 }
 return 0;
}
