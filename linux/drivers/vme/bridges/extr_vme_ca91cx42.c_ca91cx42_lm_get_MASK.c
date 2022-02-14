
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vme_lm_resource {int mtx; TYPE_1__* parent; } ;
struct ca91cx42_driver {scalar_t__ base; } ;
struct TYPE_2__ {struct ca91cx42_driver* driver_priv; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct vme_lm_resource *VAR_18,
 unsigned long long *VAR_19, u32 *VAR_20, u32 *VAR_21)
{
 u32 VAR_22, VAR_23 = 0;
 struct ca91cx42_driver *VAR_24;

 VAR_24 = VAR_18->parent->driver_priv;

 FUNC_1(&VAR_18->mtx);

 *VAR_19 = (unsigned long long)FUNC_0(VAR_24->base + VAR_9);
 VAR_22 = FUNC_0(VAR_24->base + VAR_10);

 if (VAR_22 & VAR_5)
  VAR_23 = 1;

 if ((VAR_22 & VAR_3) == VAR_0)
  *VAR_20 = VAR_11;
 if ((VAR_22 & VAR_3) == VAR_1)
  *VAR_20 = VAR_12;
 if ((VAR_22 & VAR_3) == VAR_2)
  *VAR_20 = VAR_13;

 *VAR_21 = 0;
 if (VAR_22 & VAR_8)
  *VAR_21 |= VAR_16;
 if (VAR_22 & VAR_6)
  *VAR_21 |= VAR_17;
 if (VAR_22 & VAR_7)
  *VAR_21 |= VAR_15;
 if (VAR_22 & VAR_4)
  *VAR_21 |= VAR_14;

 FUNC_2(&VAR_18->mtx);

 return VAR_23;
}
