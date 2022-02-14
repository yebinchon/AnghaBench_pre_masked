
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vme_slave_resource {unsigned int number; TYPE_1__* parent; } ;
struct ca91cx42_driver {scalar_t__ base; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {struct ca91cx42_driver* driver_priv; } ;


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
 scalar_t__* VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct vme_slave_resource *VAR_24, int *VAR_25,
 unsigned long long *VAR_26, unsigned long long *VAR_27,
 dma_addr_t *VAR_28, u32 *VAR_29, u32 *VAR_30)
{
 unsigned int VAR_31, VAR_32 = 0, VAR_33 = 0;
 unsigned long long VAR_34, VAR_35;
 struct ca91cx42_driver *VAR_36;

 VAR_36 = VAR_24->parent->driver_priv;

 VAR_31 = VAR_24->number;

 if ((VAR_31 == 0) || (VAR_31 == 4))
  VAR_32 = 0x1000;
 else
  VAR_32 = 0x10000;


 VAR_33 = FUNC_0(VAR_36->base + VAR_2[VAR_31]);

 *VAR_26 = FUNC_0(VAR_36->base + VAR_1[VAR_31]);
 VAR_34 = FUNC_0(VAR_36->base + VAR_0[VAR_31]);
 VAR_35 = FUNC_0(VAR_36->base + VAR_14[VAR_31]);

 *VAR_28 = (dma_addr_t)*VAR_26 + VAR_35;
 *VAR_27 = (unsigned long long)((VAR_34 - *VAR_26) + VAR_32);

 *VAR_25 = 0;
 *VAR_29 = 0;
 *VAR_30 = 0;

 if (VAR_33 & VAR_3)
  *VAR_25 = 1;

 if ((VAR_33 & VAR_11) == VAR_8)
  *VAR_29 = VAR_15;
 if ((VAR_33 & VAR_11) == VAR_9)
  *VAR_29 = VAR_16;
 if ((VAR_33 & VAR_11) == VAR_10)
  *VAR_29 = VAR_17;
 if ((VAR_33 & VAR_11) == VAR_12)
  *VAR_29 = VAR_22;
 if ((VAR_33 & VAR_11) == VAR_13)
  *VAR_29 = VAR_23;

 if (VAR_33 & VAR_7)
  *VAR_30 |= VAR_20;
 if (VAR_33 & VAR_6)
  *VAR_30 |= VAR_21;
 if (VAR_33 & VAR_5)
  *VAR_30 |= VAR_19;
 if (VAR_33 & VAR_4)
  *VAR_30 |= VAR_18;

 return 0;
}
