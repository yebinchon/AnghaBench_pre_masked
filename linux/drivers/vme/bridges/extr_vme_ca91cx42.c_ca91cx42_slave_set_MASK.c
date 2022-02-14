
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_slave_resource {unsigned int number; struct vme_bridge* parent; } ;
struct vme_bridge {int parent; struct ca91cx42_driver* driver_priv; } ;
struct ca91cx42_driver {scalar_t__ base; } ;
typedef unsigned long long dma_addr_t ;


 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
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
 scalar_t__* VAR_16 ;
 int VAR_17 ;





 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;




 int FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct vme_slave_resource *VAR_22, int VAR_23,
 unsigned long long VAR_24, unsigned long long VAR_25,
 dma_addr_t VAR_26, u32 VAR_27, u32 VAR_28)
{
 unsigned int VAR_29, VAR_30 = 0, VAR_31;
 unsigned int VAR_32 = 0;
 unsigned int VAR_33, VAR_34;
 struct vme_bridge *VAR_35;
 struct ca91cx42_driver *VAR_36;

 VAR_35 = VAR_22->parent;

 VAR_36 = VAR_35->driver_priv;

 VAR_29 = VAR_22->number;

 switch (VAR_27) {
 case 136:
  VAR_30 |= VAR_10;
  break;
 case 135:
  VAR_30 |= VAR_11;
  break;
 case 134:
  VAR_30 |= VAR_12;
  break;
 case 131:
  VAR_30 |= VAR_14;
  break;
 case 130:
  VAR_30 |= VAR_15;
  break;
 case 133:
 case 132:
 case 129:
 case 128:
 default:
  FUNC_0(VAR_35->parent, "Invalid address space\n");
  return -VAR_17;
  break;
 }





 VAR_33 = VAR_24 + VAR_25;
 VAR_34 = VAR_26 - VAR_24;

 if ((VAR_29 == 0) || (VAR_29 == 4))
  VAR_31 = 0x1000;
 else
  VAR_31 = 0x10000;

 if (VAR_24 & (VAR_31 - 1)) {
  FUNC_0(VAR_35->parent, "Invalid VME base "
   "alignment\n");
  return -VAR_17;
 }
 if (VAR_33 & (VAR_31 - 1)) {
  FUNC_0(VAR_35->parent, "Invalid VME bound "
   "alignment\n");
  return -VAR_17;
 }
 if (VAR_34 & (VAR_31 - 1)) {
  FUNC_0(VAR_35->parent, "Invalid PCI Offset "
   "alignment\n");
  return -VAR_17;
 }


 VAR_32 = FUNC_1(VAR_36->base + VAR_2[VAR_29]);
 VAR_32 &= ~VAR_3;
 FUNC_2(VAR_32, VAR_36->base + VAR_2[VAR_29]);


 FUNC_2(VAR_24, VAR_36->base + VAR_1[VAR_29]);
 FUNC_2(VAR_33, VAR_36->base + VAR_0[VAR_29]);
 FUNC_2(VAR_34, VAR_36->base + VAR_16[VAR_29]);


 VAR_32 &= ~VAR_13;
 VAR_32 |= VAR_30;


 VAR_32 &= ~(VAR_5 | VAR_7);
 if (VAR_28 & VAR_20)
  VAR_32 |= VAR_9;
 if (VAR_28 & VAR_21)
  VAR_32 |= VAR_8;
 if (VAR_28 & VAR_19)
  VAR_32 |= VAR_6;
 if (VAR_28 & VAR_18)
  VAR_32 |= VAR_4;


 FUNC_2(VAR_32, VAR_36->base + VAR_2[VAR_29]);

 if (VAR_23)
  VAR_32 |= VAR_3;

 FUNC_2(VAR_32, VAR_36->base + VAR_2[VAR_29]);

 return 0;
}
