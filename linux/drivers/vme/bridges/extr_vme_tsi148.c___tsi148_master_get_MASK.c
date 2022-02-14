
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vme_master_resource {unsigned int number; TYPE_1__* parent; } ;
struct tsi148_driver {scalar_t__ base; } ;
struct TYPE_2__ {struct tsi148_driver* driver_priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__* VAR_7 ;
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
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 scalar_t__ VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned long long*) ;

__attribute__((used)) static int FUNC_2(struct vme_master_resource *VAR_59, int *VAR_60,
 unsigned long long *VAR_61, unsigned long long *VAR_62, u32 *VAR_63,
 u32 *VAR_64, u32 *VAR_65)
{
 unsigned int VAR_66, VAR_67;
 unsigned int VAR_68, VAR_69;
 unsigned int VAR_70, VAR_71;
 unsigned int VAR_72, VAR_73;

 unsigned long long VAR_74, VAR_75, VAR_76;
 struct tsi148_driver *VAR_77;

 VAR_77 = VAR_59->parent->driver_priv;

 VAR_66 = VAR_59->number;

 VAR_67 = FUNC_0(VAR_77->base + VAR_7[VAR_66] +
  VAR_0);

 VAR_69 = FUNC_0(VAR_77->base + VAR_7[VAR_66] +
  VAR_6);
 VAR_68 = FUNC_0(VAR_77->base + VAR_7[VAR_66] +
  VAR_5);
 VAR_71 = FUNC_0(VAR_77->base + VAR_7[VAR_66] +
  VAR_2);
 VAR_70 = FUNC_0(VAR_77->base + VAR_7[VAR_66] +
  VAR_1);
 VAR_73 = FUNC_0(VAR_77->base + VAR_7[VAR_66] +
  VAR_4);
 VAR_72 = FUNC_0(VAR_77->base + VAR_7[VAR_66] +
  VAR_3);


 FUNC_1(VAR_69, VAR_68, &VAR_74);
 FUNC_1(VAR_71, VAR_70, &VAR_75);
 FUNC_1(VAR_73, VAR_72, &VAR_76);

 *VAR_61 = VAR_74 + VAR_76;
 *VAR_62 = (unsigned long long)(VAR_75 - VAR_74) + 0x10000;

 *VAR_60 = 0;
 *VAR_63 = 0;
 *VAR_64 = 0;
 *VAR_65 = 0;

 if (VAR_67 & VAR_25)
  *VAR_60 = 1;


 if ((VAR_67 & VAR_17) == VAR_12)
  *VAR_63 |= VAR_41;
 if ((VAR_67 & VAR_17) == VAR_13)
  *VAR_63 |= VAR_42;
 if ((VAR_67 & VAR_17) == VAR_14)
  *VAR_63 |= VAR_43;
 if ((VAR_67 & VAR_17) == VAR_15)
  *VAR_63 |= VAR_44;
 if ((VAR_67 & VAR_17) == VAR_16)
  *VAR_63 |= VAR_46;
 if ((VAR_67 & VAR_17) == VAR_18)
  *VAR_63 |= VAR_55;
 if ((VAR_67 & VAR_17) == VAR_19)
  *VAR_63 |= VAR_56;
 if ((VAR_67 & VAR_17) == VAR_20)
  *VAR_63 |= VAR_57;
 if ((VAR_67 & VAR_17) == VAR_21)
  *VAR_63 |= VAR_58;


 if ((VAR_67 & VAR_11) == VAR_8)
  *VAR_64 |= VAR_36;
 if ((VAR_67 & VAR_11) == VAR_9)
  *VAR_64 |= VAR_37;
 if ((VAR_67 & VAR_11) == VAR_10)
  *VAR_64 |= VAR_38;


 if ((VAR_67 & VAR_32) == VAR_34)
  *VAR_64 |= VAR_52;
 if ((VAR_67 & VAR_32) == VAR_31)
  *VAR_64 |= VAR_45;
 if ((VAR_67 & VAR_32) == VAR_33)
  *VAR_64 |= VAR_50;
 if ((VAR_67 & VAR_32) == VAR_30)
  *VAR_64 |= VAR_40;
 if ((VAR_67 & VAR_32) == VAR_28)
  *VAR_64 |= VAR_35;
 if ((VAR_67 & VAR_32) == VAR_29)
  *VAR_64 |= VAR_39;

 if (VAR_67 & VAR_27)
  *VAR_64 |= VAR_53;
 else
  *VAR_64 |= VAR_54;

 if (VAR_67 & VAR_26)
  *VAR_64 |= VAR_51;
 else
  *VAR_64 |= VAR_49;


 if ((VAR_67 & VAR_24) == VAR_22)
  *VAR_65 = VAR_47;
 if ((VAR_67 & VAR_24) == VAR_23)
  *VAR_65 = VAR_48;

 return 0;
}
