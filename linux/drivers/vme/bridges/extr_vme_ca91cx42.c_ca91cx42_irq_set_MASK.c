
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_bridge {int parent; struct ca91cx42_driver* driver_priv; } ;
struct pci_dev {int irq; } ;
struct ca91cx42_driver {scalar_t__ base; } ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct vme_bridge *VAR_2, int VAR_3,
 int VAR_4, int VAR_5)

{
 struct pci_dev *VAR_6;
 u32 VAR_7;
 struct ca91cx42_driver *VAR_8;

 VAR_8 = VAR_2->driver_priv;


 VAR_7 = FUNC_0(VAR_8->base + VAR_1);

 if (VAR_4 == 0)
  VAR_7 &= ~VAR_0[VAR_3];
 else
  VAR_7 |= VAR_0[VAR_3];

 FUNC_1(VAR_7, VAR_8->base + VAR_1);

 if ((VAR_4 == 0) && (VAR_5 != 0)) {
  VAR_6 = FUNC_3(VAR_2->parent);

  FUNC_2(VAR_6->irq);
 }
}
