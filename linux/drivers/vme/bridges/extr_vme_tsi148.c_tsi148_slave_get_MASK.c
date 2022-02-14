
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vme_slave_resource {unsigned int number; TYPE_1__* parent; } ;
struct tsi148_driver {scalar_t__ base; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {struct tsi148_driver* driver_priv; } ;


 scalar_t__* VAR_0 ;
 unsigned int VAR_1 ;
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
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned long long*) ;

__attribute__((used)) static int FUNC_2(struct vme_slave_resource *VAR_43, int *VAR_44,
 unsigned long long *VAR_45, unsigned long long *VAR_46,
 dma_addr_t *VAR_47, u32 *VAR_48, u32 *VAR_49)
{
 unsigned int VAR_50, VAR_51 = 0, VAR_52 = 0;
 unsigned int VAR_53, VAR_54;
 unsigned int VAR_55, VAR_56;
 unsigned int VAR_57, VAR_58;
 unsigned long long VAR_59, VAR_60;
 struct tsi148_driver *VAR_61;

 VAR_61 = VAR_43->parent->driver_priv;

 VAR_50 = VAR_43->number;


 VAR_52 = FUNC_0(VAR_61->base + VAR_0[VAR_50] +
  VAR_20);

 VAR_54 = FUNC_0(VAR_61->base + VAR_0[VAR_50] +
  VAR_26);
 VAR_53 = FUNC_0(VAR_61->base + VAR_0[VAR_50] +
  VAR_25);
 VAR_56 = FUNC_0(VAR_61->base + VAR_0[VAR_50] +
  VAR_22);
 VAR_55 = FUNC_0(VAR_61->base + VAR_0[VAR_50] +
  VAR_21);
 VAR_58 = FUNC_0(VAR_61->base + VAR_0[VAR_50] +
  VAR_24);
 VAR_57 = FUNC_0(VAR_61->base + VAR_0[VAR_50] +
  VAR_23);


 FUNC_1(VAR_54, VAR_53, VAR_45);
 FUNC_1(VAR_56, VAR_55, &VAR_59);
 FUNC_1(VAR_58, VAR_57, &VAR_60);

 *VAR_47 = (dma_addr_t)(*VAR_45 + VAR_60);

 *VAR_44 = 0;
 *VAR_48 = 0;
 *VAR_49 = 0;

 if (VAR_52 & VAR_15)
  *VAR_44 = 1;

 if ((VAR_52 & VAR_12) == VAR_8) {
  VAR_51 = 0x10;
  *VAR_48 |= VAR_33;
 }
 if ((VAR_52 & VAR_12) == VAR_9) {
  VAR_51 = 0x1000;
  *VAR_48 |= VAR_34;
 }
 if ((VAR_52 & VAR_12) == VAR_10) {
  VAR_51 = 0x10000;
  *VAR_48 |= VAR_35;
 }
 if ((VAR_52 & VAR_12) == VAR_11) {
  VAR_51 = 0x10000;
  *VAR_48 |= VAR_36;
 }


 *VAR_46 = (unsigned long long)((VAR_59 - *VAR_45) + VAR_51);


 if ((VAR_52 & VAR_6) == VAR_3)
  *VAR_49 |= VAR_28;
 if ((VAR_52 & VAR_6) == VAR_4)
  *VAR_49 |= VAR_29;
 if ((VAR_52 & VAR_6) == VAR_5)
  *VAR_49 |= VAR_30;

 if (VAR_52 & VAR_13)
  *VAR_49 |= VAR_37;
 if (VAR_52 & VAR_16)
  *VAR_49 |= VAR_39;
 if (VAR_52 & VAR_7)
  *VAR_49 |= VAR_32;
 if (VAR_52 & VAR_1)
  *VAR_49 |= VAR_27;
 if (VAR_52 & VAR_2)
  *VAR_49 |= VAR_31;

 if (VAR_52 & VAR_19)
  *VAR_49 |= VAR_41;
 if (VAR_52 & VAR_17)
  *VAR_49 |= VAR_42;
 if (VAR_52 & VAR_18)
  *VAR_49 |= VAR_40;
 if (VAR_52 & VAR_14)
  *VAR_49 |= VAR_38;

 return 0;
}
