
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vme_bridge {int parent; struct ca91cx42_driver* driver_priv; } ;
struct pci_dev {int irq; int dev; } ;
struct ca91cx42_driver {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *,char*,int ) ;
 int VAR_16 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ,struct vme_bridge*) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct vme_bridge *VAR_17)
{
 int VAR_18, VAR_19;
 struct pci_dev *VAR_20;
 struct ca91cx42_driver *VAR_21;

 VAR_21 = VAR_17->driver_priv;


 VAR_20 = FUNC_3(VAR_17->parent);


 FUNC_1(0, VAR_21->base + VAR_14);


 FUNC_1(0, VAR_21->base + VAR_9);

 FUNC_1(0x00FFFFFF, VAR_21->base + VAR_13);

 VAR_18 = FUNC_2(VAR_20->irq, VAR_15, VAR_8,
   VAR_16, VAR_17);
 if (VAR_18) {
  FUNC_0(&VAR_20->dev, "Can't get assigned pci irq vector %02X\n",
         VAR_20->irq);
  return VAR_18;
 }


 FUNC_1(0, VAR_21->base + VAR_10);
 FUNC_1(0, VAR_21->base + VAR_11);
 FUNC_1(0, VAR_21->base + VAR_12);


 VAR_19 = VAR_5 | VAR_4 | VAR_3 |
  VAR_2 | VAR_6 |
  VAR_7 | VAR_1 | VAR_0;

 FUNC_1(VAR_19, VAR_21->base + VAR_9);

 return 0;
}
