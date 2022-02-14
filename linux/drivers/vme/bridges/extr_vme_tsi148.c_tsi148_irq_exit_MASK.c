
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vme_bridge {struct tsi148_driver* driver_priv; } ;
struct tsi148_driver {scalar_t__ base; } ;
struct pci_dev {int irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct vme_bridge*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct vme_bridge *VAR_3,
 struct pci_dev *VAR_4)
{
 struct tsi148_driver *VAR_5 = VAR_3->driver_priv;


 FUNC_1(0x0, VAR_5->base + VAR_2);
 FUNC_1(0x0, VAR_5->base + VAR_1);


 FUNC_1(0xFFFFFFFF, VAR_5->base + VAR_0);


 FUNC_0(VAR_4->irq, VAR_3);
}
