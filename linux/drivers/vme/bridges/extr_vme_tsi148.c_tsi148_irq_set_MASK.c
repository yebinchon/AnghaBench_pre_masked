
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_bridge {int parent; struct tsi148_driver* driver_priv; } ;
struct tsi148_driver {scalar_t__ base; } ;
struct pci_dev {int irq; } ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct vme_bridge *VAR_4, int VAR_5,
 int VAR_6, int VAR_7)
{
 struct pci_dev *VAR_8;
 u32 VAR_9;
 struct tsi148_driver *VAR_10;

 VAR_10 = VAR_4->driver_priv;


 if (VAR_6 == 0) {
  VAR_9 = FUNC_0(VAR_10->base + VAR_0);
  VAR_9 &= ~VAR_1[VAR_5 - 1];
  FUNC_1(VAR_9, VAR_10->base + VAR_0);

  VAR_9 = FUNC_0(VAR_10->base + VAR_2);
  VAR_9 &= ~VAR_3[VAR_5 - 1];
  FUNC_1(VAR_9, VAR_10->base + VAR_2);

  if (VAR_7 != 0) {
   VAR_8 = FUNC_3(VAR_4->parent);
   FUNC_2(VAR_8->irq);
  }
 } else {
  VAR_9 = FUNC_0(VAR_10->base + VAR_2);
  VAR_9 |= VAR_3[VAR_5 - 1];
  FUNC_1(VAR_9, VAR_10->base + VAR_2);

  VAR_9 = FUNC_0(VAR_10->base + VAR_0);
  VAR_9 |= VAR_1[VAR_5 - 1];
  FUNC_1(VAR_9, VAR_10->base + VAR_0);
 }
}
