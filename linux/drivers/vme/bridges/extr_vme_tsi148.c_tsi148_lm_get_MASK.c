
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vme_lm_resource {int mtx; TYPE_1__* parent; } ;
struct tsi148_driver {scalar_t__ base; } ;
struct TYPE_2__ {struct tsi148_driver* driver_priv; } ;


 scalar_t__ VAR_0 ;
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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int,unsigned long long*) ;

__attribute__((used)) static int FUNC_4(struct vme_lm_resource *VAR_21,
 unsigned long long *VAR_22, u32 *VAR_23, u32 *VAR_24)
{
 u32 VAR_25, VAR_26, VAR_27, VAR_28 = 0;
 struct tsi148_driver *VAR_29;

 VAR_29 = VAR_21->parent->driver_priv;

 FUNC_1(&VAR_21->mtx);

 VAR_25 = FUNC_0(VAR_29->base + VAR_12);
 VAR_26 = FUNC_0(VAR_29->base + VAR_11);
 VAR_27 = FUNC_0(VAR_29->base + VAR_0);

 FUNC_3(VAR_25, VAR_26, VAR_22);

 if (VAR_27 & VAR_7)
  VAR_28 = 1;

 if ((VAR_27 & VAR_5) == VAR_1)
  *VAR_23 |= VAR_13;

 if ((VAR_27 & VAR_5) == VAR_2)
  *VAR_23 |= VAR_14;

 if ((VAR_27 & VAR_5) == VAR_3)
  *VAR_23 |= VAR_15;

 if ((VAR_27 & VAR_5) == VAR_4)
  *VAR_23 |= VAR_16;


 if (VAR_27 & VAR_10)
  *VAR_24 |= VAR_19;
 if (VAR_27 & VAR_8)
  *VAR_24 |= VAR_20;
 if (VAR_27 & VAR_9)
  *VAR_24 |= VAR_18;
 if (VAR_27 & VAR_6)
  *VAR_24 |= VAR_17;

 FUNC_2(&VAR_21->mtx);

 return VAR_28;
}
