
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vme_lm_resource {int monitors; int mtx; TYPE_1__* parent; } ;
struct device {int dummy; } ;
struct ca91cx42_driver {scalar_t__ base; scalar_t__* lm_callback; } ;
struct TYPE_2__ {struct device* parent; struct ca91cx42_driver* driver_priv; } ;


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
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct vme_lm_resource *VAR_15,
 unsigned long long VAR_16, u32 VAR_17, u32 VAR_18)
{
 u32 VAR_19, VAR_20 = 0;
 int VAR_21;
 struct ca91cx42_driver *VAR_22;
 struct device *VAR_23;

 VAR_22 = VAR_15->parent->driver_priv;
 VAR_23 = VAR_15->parent->parent;


 VAR_19 = (u32)VAR_16;
 if (VAR_19 & 0xffff) {
  FUNC_0(VAR_23, "Location monitor must be aligned to 64KB "
   "boundary");
  return -VAR_8;
 }

 FUNC_2(&VAR_15->mtx);


 for (VAR_21 = 0; VAR_21 < VAR_15->monitors; VAR_21++) {
  if (VAR_22->lm_callback[VAR_21]) {
   FUNC_3(&VAR_15->mtx);
   FUNC_0(VAR_23, "Location monitor callback attached, "
    "can't reset\n");
   return -VAR_7;
  }
 }

 switch (VAR_17) {
 case 130:
  VAR_20 |= VAR_0;
  break;
 case 129:
  VAR_20 |= VAR_1;
  break;
 case 128:
  VAR_20 |= VAR_2;
  break;
 default:
  FUNC_3(&VAR_15->mtx);
  FUNC_0(VAR_23, "Invalid address space\n");
  return -VAR_8;
  break;
 }

 if (VAR_18 & VAR_13)
  VAR_20 |= VAR_6;
 if (VAR_18 & VAR_14)
  VAR_20 |= VAR_4;
 if (VAR_18 & VAR_12)
  VAR_20 |= VAR_5;
 if (VAR_18 & VAR_11)
  VAR_20 |= VAR_3;

 FUNC_1(VAR_16, VAR_22->base + VAR_9);
 FUNC_1(VAR_20, VAR_22->base + VAR_10);

 FUNC_3(&VAR_15->mtx);

 return 0;
}
