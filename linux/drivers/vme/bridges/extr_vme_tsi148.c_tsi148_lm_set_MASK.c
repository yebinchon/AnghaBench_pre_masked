
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_lm_resource {int monitors; int mtx; struct vme_bridge* parent; } ;
struct vme_bridge {int parent; struct tsi148_driver* driver_priv; } ;
struct tsi148_driver {scalar_t__ base; scalar_t__* lm_callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned long long,int*,int*) ;

__attribute__((used)) static int FUNC_5(struct vme_lm_resource *VAR_17, unsigned long long VAR_18,
 u32 VAR_19, u32 VAR_20)
{
 u32 VAR_21, VAR_22, VAR_23 = 0;
 int VAR_24;
 struct vme_bridge *VAR_25;
 struct tsi148_driver *VAR_26;

 VAR_25 = VAR_17->parent;

 VAR_26 = VAR_25->driver_priv;

 FUNC_2(&VAR_17->mtx);


 for (VAR_24 = 0; VAR_24 < VAR_17->monitors; VAR_24++) {
  if (VAR_26->lm_callback[VAR_24]) {
   FUNC_3(&VAR_17->mtx);
   FUNC_0(VAR_25->parent, "Location monitor "
    "callback attached, can't reset\n");
   return -VAR_0;
  }
 }

 switch (VAR_19) {
 case 131:
  VAR_23 |= VAR_3;
  break;
 case 130:
  VAR_23 |= VAR_4;
  break;
 case 129:
  VAR_23 |= VAR_5;
  break;
 case 128:
  VAR_23 |= VAR_6;
  break;
 default:
  FUNC_3(&VAR_17->mtx);
  FUNC_0(VAR_25->parent, "Invalid address space\n");
  return -VAR_1;
  break;
 }

 if (VAR_20 & VAR_15)
  VAR_23 |= VAR_10 ;
 if (VAR_20 & VAR_16)
  VAR_23 |= VAR_8;
 if (VAR_20 & VAR_14)
  VAR_23 |= VAR_9;
 if (VAR_20 & VAR_13)
  VAR_23 |= VAR_7;

 FUNC_4(VAR_18, &VAR_21, &VAR_22);

 FUNC_1(VAR_21, VAR_26->base + VAR_12);
 FUNC_1(VAR_22, VAR_26->base + VAR_11);
 FUNC_1(VAR_23, VAR_26->base + VAR_2);

 FUNC_3(&VAR_17->mtx);

 return 0;
}
