
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_slave_resource {unsigned int number; struct vme_bridge* parent; } ;
struct vme_bridge {int parent; struct tsi148_driver* driver_priv; } ;
struct tsi148_driver {scalar_t__ base; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
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
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;



 int VAR_29 ;
 int VAR_30 ;




 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (unsigned long long,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct vme_slave_resource *VAR_37, int VAR_38,
 unsigned long long VAR_39, unsigned long long VAR_40,
 dma_addr_t VAR_41, u32 VAR_42, u32 VAR_43)
{
 unsigned int VAR_44, VAR_45 = 0, VAR_46 = 0;
 unsigned int VAR_47 = 0;
 unsigned int VAR_48, VAR_49;
 unsigned int VAR_50, VAR_51;
 unsigned int VAR_52, VAR_53;
 unsigned long long VAR_54, VAR_55;
 struct vme_bridge *VAR_56;
 struct tsi148_driver *VAR_57;

 VAR_56 = VAR_37->parent;
 VAR_57 = VAR_56->driver_priv;

 VAR_44 = VAR_37->number;

 switch (VAR_42) {
 case 131:
  VAR_46 = 0x10;
  VAR_45 |= VAR_9;
  break;
 case 130:
  VAR_46 = 0x1000;
  VAR_45 |= VAR_10;
  break;
 case 129:
  VAR_46 = 0x10000;
  VAR_45 |= VAR_11;
  break;
 case 128:
  VAR_46 = 0x10000;
  VAR_45 |= VAR_12;
  break;
 default:
  FUNC_0(VAR_56->parent, "Invalid address space\n");
  return -VAR_0;
  break;
 }


 FUNC_3(VAR_39, &VAR_49, &VAR_48);





 VAR_54 = VAR_39 + VAR_40 - VAR_46;
 FUNC_3(VAR_54, &VAR_51, &VAR_50);
 VAR_55 = (unsigned long long)VAR_41 - VAR_39;
 FUNC_3(VAR_55, &VAR_53, &VAR_52);

 if (VAR_48 & (VAR_46 - 1)) {
  FUNC_0(VAR_56->parent, "Invalid VME base alignment\n");
  return -VAR_0;
 }
 if (VAR_50 & (VAR_46 - 1)) {
  FUNC_0(VAR_56->parent, "Invalid VME bound alignment\n");
  return -VAR_0;
 }
 if (VAR_52 & (VAR_46 - 1)) {
  FUNC_0(VAR_56->parent, "Invalid PCI Offset "
   "alignment\n");
  return -VAR_0;
 }


 VAR_47 = FUNC_1(VAR_57->base + VAR_1[VAR_44] +
  VAR_21);
 VAR_47 &= ~VAR_16;
 FUNC_2(VAR_47, VAR_57->base + VAR_1[VAR_44] +
  VAR_21);


 FUNC_2(VAR_49, VAR_57->base + VAR_1[VAR_44] +
  VAR_27);
 FUNC_2(VAR_48, VAR_57->base + VAR_1[VAR_44] +
  VAR_26);
 FUNC_2(VAR_51, VAR_57->base + VAR_1[VAR_44] +
  VAR_23);
 FUNC_2(VAR_50, VAR_57->base + VAR_1[VAR_44] +
  VAR_22);
 FUNC_2(VAR_53, VAR_57->base + VAR_1[VAR_44] +
  VAR_25);
 FUNC_2(VAR_52, VAR_57->base + VAR_1[VAR_44] +
  VAR_24);


 VAR_47 &= ~VAR_7;
 switch (VAR_43 & (134 | 133 | 132)) {
 case 134:
  VAR_47 |= VAR_4;
  break;
 case 133:
  VAR_47 |= VAR_5;
  break;
 case 132:
  VAR_47 |= VAR_6;
  break;
 }


 VAR_47 &= ~(0x1F << 7);
 if (VAR_43 & VAR_31)
  VAR_47 |= VAR_14;
 if (VAR_43 & VAR_33)
  VAR_47 |= VAR_17;
 if (VAR_43 & VAR_30)
  VAR_47 |= VAR_8;
 if (VAR_43 & VAR_28)
  VAR_47 |= VAR_2;
 if (VAR_43 & VAR_29)
  VAR_47 |= VAR_3;


 VAR_47 &= ~VAR_13;
 VAR_47 |= VAR_45;

 VAR_47 &= ~0xF;
 if (VAR_43 & VAR_35)
  VAR_47 |= VAR_20 ;
 if (VAR_43 & VAR_36)
  VAR_47 |= VAR_18;
 if (VAR_43 & VAR_34)
  VAR_47 |= VAR_19;
 if (VAR_43 & VAR_32)
  VAR_47 |= VAR_15;


 FUNC_2(VAR_47, VAR_57->base + VAR_1[VAR_44] +
  VAR_21);

 if (VAR_38)
  VAR_47 |= VAR_16;

 FUNC_2(VAR_47, VAR_57->base + VAR_1[VAR_44] +
  VAR_21);

 return 0;
}
