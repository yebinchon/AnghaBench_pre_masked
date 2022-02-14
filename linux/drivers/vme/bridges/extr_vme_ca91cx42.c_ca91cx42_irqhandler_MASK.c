
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_bridge {struct ca91cx42_driver* driver_priv; } ;
struct ca91cx42_driver {scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (struct ca91cx42_driver*) ;
 int FUNC_1 (struct ca91cx42_driver*) ;
 int FUNC_2 (struct vme_bridge*) ;
 int FUNC_3 (struct ca91cx42_driver*,int) ;
 int FUNC_4 (struct ca91cx42_driver*,int) ;
 int FUNC_5 (struct vme_bridge*) ;
 int FUNC_6 (struct vme_bridge*,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_20, void *VAR_21)
{
 u32 VAR_22, VAR_23, VAR_24 = 0;
 struct vme_bridge *VAR_25;
 struct ca91cx42_driver *VAR_26;

 VAR_25 = VAR_21;

 VAR_26 = VAR_25->driver_priv;

 VAR_23 = FUNC_7(VAR_26->base + VAR_18);
 VAR_22 = FUNC_7(VAR_26->base + VAR_19);


 VAR_22 &= VAR_23;

 if (FUNC_9(!VAR_22))
  return VAR_17;

 if (VAR_22 & VAR_0)
  VAR_24 |= FUNC_0(VAR_26);
 if (VAR_22 & (VAR_2 | VAR_3 | VAR_4 |
   VAR_5))
  VAR_24 |= FUNC_3(VAR_26, VAR_22);
 if (VAR_22 & VAR_6)
  VAR_24 |= FUNC_4(VAR_26, VAR_22);
 if (VAR_22 & VAR_7)
  VAR_24 |= FUNC_1(VAR_26);
 if (VAR_22 & VAR_8)
  VAR_24 |= FUNC_5(VAR_25);
 if (VAR_22 & VAR_1)
  VAR_24 |= FUNC_2(VAR_25);
 if (VAR_22 & (VAR_9 | VAR_10 |
   VAR_11 | VAR_12 |
   VAR_13 | VAR_14 |
   VAR_15))
  VAR_24 |= FUNC_6(VAR_25, VAR_22);


 FUNC_8(VAR_24, VAR_26->base + VAR_19);

 return VAR_16;
}
