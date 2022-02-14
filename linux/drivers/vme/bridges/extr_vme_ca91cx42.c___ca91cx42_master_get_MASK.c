
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vme_master_resource {unsigned int number; TYPE_1__* parent; } ;
struct ca91cx42_driver {scalar_t__ base; } ;
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
 scalar_t__* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct vme_master_resource *VAR_26,
 int *VAR_27, unsigned long long *VAR_28, unsigned long long *VAR_29,
 u32 *VAR_30, u32 *VAR_31, u32 *VAR_32)
{
 unsigned int VAR_33, VAR_34;
 unsigned long long VAR_35, VAR_36, VAR_37;
 struct ca91cx42_driver *VAR_38;

 VAR_38 = VAR_26->parent->driver_priv;

 VAR_33 = VAR_26->number;

 VAR_34 = FUNC_0(VAR_38->base + VAR_2[VAR_33]);

 VAR_35 = FUNC_0(VAR_38->base + VAR_1[VAR_33]);
 VAR_37 = FUNC_0(VAR_38->base + VAR_9[VAR_33]);
 VAR_36 = FUNC_0(VAR_38->base + VAR_0[VAR_33]);

 *VAR_28 = VAR_35 + VAR_37;
 *VAR_29 = (unsigned long long)(VAR_36 - VAR_35);

 *VAR_27 = 0;
 *VAR_30 = 0;
 *VAR_31 = 0;
 *VAR_32 = 0;

 if (VAR_34 & VAR_3)
  *VAR_27 = 1;


 switch (VAR_34 & VAR_6) {
 case 137:
  *VAR_30 = VAR_10;
  break;
 case 136:
  *VAR_30 = VAR_11;
  break;
 case 135:
  *VAR_30 = VAR_12;
  break;
 case 134:
  *VAR_30 = VAR_14;
  break;
 case 133:
  *VAR_30 = VAR_24;
  break;
 case 132:
  *VAR_30 = VAR_25;
  break;
 }



 if (VAR_34 & VAR_7)
  *VAR_31 |= VAR_13;
 else
  *VAR_31 |= VAR_21;

 if (VAR_34 & VAR_5)
  *VAR_31 |= VAR_22;
 else
  *VAR_31 |= VAR_23;

 if (VAR_34 & VAR_4)
  *VAR_31 = VAR_20;
 else
  *VAR_31 = VAR_19;


 switch (VAR_34 & VAR_8) {
 case 128:
  *VAR_32 = VAR_18;
  break;
 case 131:
  *VAR_32 = VAR_15;
  break;
 case 130:
  *VAR_32 = VAR_16;
  break;
 case 129:
  *VAR_32 = VAR_17;
  break;
 }

 return 0;
}
