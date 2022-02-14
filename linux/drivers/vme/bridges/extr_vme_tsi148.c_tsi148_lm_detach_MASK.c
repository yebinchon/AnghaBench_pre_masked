
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vme_lm_resource {int mtx; TYPE_1__* parent; } ;
struct tsi148_driver {scalar_t__ base; int ** lm_data; int ** lm_callback; } ;
struct TYPE_2__ {struct tsi148_driver* driver_priv; } ;


 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 scalar_t__ VAR_2 ;
 int* VAR_3 ;
 scalar_t__ VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct vme_lm_resource *VAR_12, int VAR_13)
{
 u32 VAR_14, VAR_15;
 struct tsi148_driver *VAR_16;

 VAR_16 = VAR_12->parent->driver_priv;

 FUNC_2(&VAR_12->mtx);


 VAR_14 = FUNC_0(VAR_16->base + VAR_2);
 VAR_14 &= ~VAR_3[VAR_13];
 FUNC_1(VAR_14, VAR_16->base + VAR_2);

 VAR_15 = FUNC_0(VAR_16->base + VAR_4);
 VAR_15 &= ~VAR_5[VAR_13];
 FUNC_1(VAR_15, VAR_16->base + VAR_4);

 FUNC_1(VAR_1[VAR_13],
   VAR_16->base + VAR_0);


 VAR_16->lm_callback[VAR_13] = ((void*)0);
 VAR_16->lm_data[VAR_13] = ((void*)0);


 if ((VAR_14 & (VAR_6 | VAR_7 |
   VAR_8 | VAR_9)) == 0) {
  VAR_15 = FUNC_0(VAR_16->base + VAR_10);
  VAR_15 &= ~VAR_11;
  FUNC_1(VAR_15, VAR_16->base + VAR_10);
 }

 FUNC_3(&VAR_12->mtx);

 return 0;
}
