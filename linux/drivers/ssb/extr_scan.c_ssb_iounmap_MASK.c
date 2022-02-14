
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_bus {int bustype; int * mapped_device; int * mmio; int host_pci; } ;






 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct ssb_bus *VAR_0)
{
 switch (VAR_0->bustype) {
 case 128:
 case 130:
  FUNC_1(VAR_0->mmio);
  break;
 case 131:



  FUNC_0(1);

  break;
 case 129:
  break;
 }
 VAR_0->mmio = ((void*)0);
 VAR_0->mapped_device = ((void*)0);
}
