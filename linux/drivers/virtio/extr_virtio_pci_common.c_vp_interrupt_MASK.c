
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct virtio_pci_device {int isr; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,void*) ;
 int FUNC_2 (int,void*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct virtio_pci_device *VAR_4 = VAR_3;
 u8 VAR_5;



 VAR_5 = FUNC_0(VAR_4->isr);


 if (!VAR_5)
  return VAR_0;


 if (VAR_5 & VAR_1)
  FUNC_1(VAR_2, VAR_3);

 return FUNC_2(VAR_2, VAR_3);
}
