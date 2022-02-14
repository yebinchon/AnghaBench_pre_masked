
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_bridge {struct tsi148_driver* driver_priv; } ;
struct tsi148_driver {scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct tsi148_driver*,int) ;
 int FUNC_3 (struct tsi148_driver*) ;
 int FUNC_4 (struct tsi148_driver*,int) ;
 int FUNC_5 (struct vme_bridge*,int) ;
 int FUNC_6 (struct vme_bridge*) ;
 int FUNC_7 (struct vme_bridge*) ;
 int FUNC_8 (struct vme_bridge*,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_25, void *VAR_26)
{
 u32 VAR_27, VAR_28, VAR_29 = 0;
 struct vme_bridge *VAR_30;
 struct tsi148_driver *VAR_31;

 VAR_30 = VAR_26;

 VAR_31 = VAR_30->driver_priv;


 VAR_28 = FUNC_0(VAR_31->base + VAR_3);
 VAR_27 = FUNC_0(VAR_31->base + VAR_4);


 VAR_27 &= VAR_28;

 if (FUNC_9(!VAR_27))
  return VAR_1;



 if (VAR_27 & (VAR_6 | VAR_5))
  VAR_29 |= FUNC_2(VAR_31, VAR_27);


 if (VAR_27 & (VAR_18 | VAR_17 |
   VAR_16 | VAR_15))
  VAR_29 |= FUNC_4(VAR_31, VAR_27);


 if (VAR_27 & (VAR_22 | VAR_21 |
   VAR_20 | VAR_19))
  VAR_29 |= FUNC_5(VAR_30, VAR_27);


 if (VAR_27 & VAR_23)
  VAR_29 |= FUNC_6(VAR_30);


 if (VAR_27 & VAR_24)
  VAR_29 |= FUNC_7(VAR_30);


 if (VAR_27 & VAR_7)
  VAR_29 |= FUNC_3(VAR_31);


 if (VAR_27 & (VAR_14 | VAR_13 |
   VAR_12 | VAR_11 |
   VAR_10 | VAR_9 |
   VAR_8))
  VAR_29 |= FUNC_8(VAR_30, VAR_27);


 FUNC_1(VAR_29, VAR_31->base + VAR_2);

 return VAR_0;
}
