
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_master_resource {unsigned int number; int lock; int bus_resource; struct vme_bridge* parent; } ;
struct vme_bridge {int parent; struct tsi148_driver* driver_priv; } ;
struct tsi148_driver {scalar_t__ base; } ;
struct pci_dev {int bus; } ;
struct pci_bus_region {unsigned long long start; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__* VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 unsigned int VAR_32 ;
 unsigned int VAR_33 ;
 unsigned int VAR_34 ;
 int VAR_35 ;



 int VAR_36 ;
 int VAR_37 ;




 int VAR_38 ;



 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;




 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 int FUNC_4 (int ,struct pci_bus_region*,int *) ;
 int FUNC_5 (unsigned long long,unsigned int*,unsigned int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct pci_dev* FUNC_8 (int ) ;
 int FUNC_9 (struct vme_master_resource*,unsigned long long) ;
 int FUNC_10 (struct vme_master_resource*) ;

__attribute__((used)) static int FUNC_11(struct vme_master_resource *VAR_42, int VAR_43,
 unsigned long long VAR_44, unsigned long long VAR_45, u32 VAR_46,
 u32 VAR_47, u32 VAR_48)
{
 int VAR_49 = 0;
 unsigned int VAR_50;
 unsigned int VAR_51 = 0;
 unsigned int VAR_52, VAR_53;
 unsigned int VAR_54, VAR_55;
 unsigned int VAR_56, VAR_57;
 unsigned long long VAR_58, VAR_59, VAR_60;
 struct vme_bridge *VAR_61;
 struct tsi148_driver *VAR_62;
 struct pci_bus_region VAR_63;
 struct pci_dev *VAR_64;

 VAR_61 = VAR_42->parent;

 VAR_62 = VAR_61->driver_priv;

 VAR_64 = FUNC_8(VAR_61->parent);


 if (VAR_44 & 0xFFFF) {
  FUNC_0(VAR_61->parent, "Invalid VME Window "
   "alignment\n");
  VAR_49 = -VAR_0;
  goto err_window;
 }

 if ((VAR_45 == 0) && (VAR_43 != 0)) {
  FUNC_0(VAR_61->parent, "Size must be non-zero for "
   "enabled windows\n");
  VAR_49 = -VAR_0;
  goto err_window;
 }

 FUNC_6(&VAR_42->lock);





 VAR_49 = FUNC_9(VAR_42, VAR_45);
 if (VAR_49) {
  FUNC_7(&VAR_42->lock);
  FUNC_0(VAR_61->parent, "Unable to allocate memory for "
   "resource\n");
  goto err_res;
 }

 if (VAR_45 == 0) {
  VAR_60 = 0;
  VAR_58 = 0;
  VAR_59 = 0;
 } else {
  FUNC_4(VAR_64->bus, &VAR_63,
     &VAR_42->bus_resource);
  VAR_60 = VAR_63.start;





  VAR_58 = VAR_60 + (VAR_45 - 0x10000);
  VAR_59 = VAR_44 - VAR_60;
 }


 FUNC_5(VAR_60, &VAR_53, &VAR_52);
 FUNC_5(VAR_58, &VAR_55, &VAR_54);
 FUNC_5(VAR_59, &VAR_57, &VAR_56);

 if (VAR_52 & 0xFFFF) {
  FUNC_7(&VAR_42->lock);
  FUNC_0(VAR_61->parent, "Invalid PCI base alignment\n");
  VAR_49 = -VAR_0;
  goto err_gran;
 }
 if (VAR_54 & 0xFFFF) {
  FUNC_7(&VAR_42->lock);
  FUNC_0(VAR_61->parent, "Invalid PCI bound alignment\n");
  VAR_49 = -VAR_0;
  goto err_gran;
 }
 if (VAR_56 & 0xFFFF) {
  FUNC_7(&VAR_42->lock);
  FUNC_0(VAR_61->parent, "Invalid VME Offset "
   "alignment\n");
  VAR_49 = -VAR_0;
  goto err_gran;
 }

 VAR_50 = VAR_42->number;


 VAR_51 = FUNC_2(VAR_62->base + VAR_8[VAR_50] +
  VAR_1);
 VAR_51 &= ~VAR_26;
 FUNC_3(VAR_51, VAR_62->base + VAR_8[VAR_50] +
  VAR_1);


 VAR_51 &= ~VAR_12;
 switch (VAR_47 & (141 | 140 | 139)) {
 case 141:
  VAR_51 |= VAR_9;
  break;
 case 140:
  VAR_51 |= VAR_10;
  break;
 case 139:
  VAR_51 |= VAR_11;
  break;
 }


 if (VAR_47 & VAR_38) {
  VAR_51 &= ~VAR_33;
  VAR_51 |= VAR_32;
 }
 if (VAR_47 & VAR_39) {
  VAR_51 &= ~VAR_33;
  VAR_51 |= VAR_34;
 }
 if (VAR_47 & VAR_37) {
  VAR_51 &= ~VAR_33;
  VAR_51 |= VAR_31;
 }
 if (VAR_47 & VAR_35) {
  VAR_51 &= ~VAR_33;
  VAR_51 |= VAR_29;
 }
 if (VAR_47 & VAR_36) {
  FUNC_1(VAR_61->parent, "Currently not setting "
   "Broadcast Select Registers\n");
  VAR_51 &= ~VAR_33;
  VAR_51 |= VAR_30;
 }


 VAR_51 &= ~VAR_25;
 switch (VAR_48) {
 case 133:
  VAR_51 |= VAR_23;
  break;
 case 132:
  VAR_51 |= VAR_24;
  break;
 default:
  FUNC_7(&VAR_42->lock);
  FUNC_0(VAR_61->parent, "Invalid data width\n");
  VAR_49 = -VAR_0;
  goto err_dwidth;
 }


 VAR_51 &= ~VAR_18;
 switch (VAR_46) {
 case 138:
  VAR_51 |= VAR_13;
  break;
 case 137:
  VAR_51 |= VAR_14;
  break;
 case 136:
  VAR_51 |= VAR_15;
  break;
 case 135:
  VAR_51 |= VAR_16;
  break;
 case 134:
  VAR_51 |= VAR_17;
  break;
 case 131:
  VAR_51 |= VAR_19;
  break;
 case 130:
  VAR_51 |= VAR_20;
  break;
 case 129:
  VAR_51 |= VAR_21;
  break;
 case 128:
  VAR_51 |= VAR_22;
  break;
 default:
  FUNC_7(&VAR_42->lock);
  FUNC_0(VAR_61->parent, "Invalid address space\n");
  VAR_49 = -VAR_0;
  goto err_aspace;
  break;
 }

 VAR_51 &= ~(3<<4);
 if (VAR_47 & VAR_41)
  VAR_51 |= VAR_28;
 if (VAR_47 & VAR_40)
  VAR_51 |= VAR_27;


 FUNC_3(VAR_53, VAR_62->base + VAR_8[VAR_50] +
  VAR_7);
 FUNC_3(VAR_52, VAR_62->base + VAR_8[VAR_50] +
  VAR_6);
 FUNC_3(VAR_55, VAR_62->base + VAR_8[VAR_50] +
  VAR_3);
 FUNC_3(VAR_54, VAR_62->base + VAR_8[VAR_50] +
  VAR_2);
 FUNC_3(VAR_57, VAR_62->base + VAR_8[VAR_50] +
  VAR_5);
 FUNC_3(VAR_56, VAR_62->base + VAR_8[VAR_50] +
  VAR_4);


 FUNC_3(VAR_51, VAR_62->base + VAR_8[VAR_50] +
  VAR_1);

 if (VAR_43)
  VAR_51 |= VAR_26;

 FUNC_3(VAR_51, VAR_62->base + VAR_8[VAR_50] +
  VAR_1);

 FUNC_7(&VAR_42->lock);
 return 0;

err_aspace:
err_dwidth:
err_gran:
 FUNC_10(VAR_42);
err_res:
err_window:
 return VAR_49;

}
