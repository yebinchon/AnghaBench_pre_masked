
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pci_ioeventfd {int count; int addr; int data; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_0, void *VAR_1)
{
 struct vfio_pci_ioeventfd *VAR_2 = VAR_0;

 switch (VAR_2->count) {
 case 1:
  FUNC_3(VAR_2->data, VAR_2->addr);
  break;
 case 2:
  FUNC_0(VAR_2->data, VAR_2->addr);
  break;
 case 4:
  FUNC_1(VAR_2->data, VAR_2->addr);
  break;





 }

 return 0;
}
