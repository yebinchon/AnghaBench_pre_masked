
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vme_lm_resource {int mtx; TYPE_1__* parent; } ;
struct ca91cx42_driver {scalar_t__ base; int ** lm_data; int ** lm_callback; } ;
struct TYPE_2__ {struct ca91cx42_driver* driver_priv; } ;


 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct vme_lm_resource *VAR_9, int VAR_10)
{
 u32 VAR_11;
 struct ca91cx42_driver *VAR_12;

 VAR_12 = VAR_9->parent->driver_priv;

 FUNC_2(&VAR_9->mtx);


 VAR_11 = FUNC_0(VAR_12->base + VAR_6);
 VAR_11 &= ~VAR_0[VAR_10];
 FUNC_1(VAR_11, VAR_12->base + VAR_6);

 FUNC_1(VAR_0[VAR_10],
   VAR_12->base + VAR_7);


 VAR_12->lm_callback[VAR_10] = ((void*)0);
 VAR_12->lm_data[VAR_10] = ((void*)0);


 if ((VAR_11 & (VAR_1 | VAR_2 | VAR_3 |
   VAR_4)) == 0) {
  VAR_11 = FUNC_0(VAR_12->base + VAR_8);
  VAR_11 &= ~VAR_5;
  FUNC_1(VAR_11, VAR_12->base + VAR_8);
 }

 FUNC_3(&VAR_9->mtx);

 return 0;
}
