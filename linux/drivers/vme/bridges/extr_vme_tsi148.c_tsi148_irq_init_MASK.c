
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vme_bridge {int parent; struct tsi148_driver* driver_priv; } ;
struct tsi148_driver {scalar_t__ base; } ;
struct pci_dev {int irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_12 ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ,struct vme_bridge*) ;
 struct pci_dev* FUNC_3 (int ) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_4(struct vme_bridge *VAR_14)
{
 int VAR_15;
 unsigned int VAR_16;
 struct pci_dev *VAR_17;
 struct tsi148_driver *VAR_18;

 VAR_17 = FUNC_3(VAR_14->parent);

 VAR_18 = VAR_14->driver_priv;

 VAR_15 = FUNC_2(VAR_17->irq,
        VAR_13,
        VAR_0,
        VAR_12, VAR_14);
 if (VAR_15) {
  FUNC_0(VAR_14->parent, "Can't get assigned pci irq "
   "vector %02X\n", VAR_17->irq);
  return VAR_15;
 }


 VAR_16 = VAR_4 | VAR_3 |
  VAR_9 | VAR_8 |
  VAR_7 | VAR_6 |
  VAR_10 | VAR_11 |
  VAR_5;
 FUNC_1(VAR_16, VAR_18->base + VAR_2);
 FUNC_1(VAR_16, VAR_18->base + VAR_1);

 return 0;
}
