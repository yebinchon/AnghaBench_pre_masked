
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct vme_master_resource {int number; int lock; scalar_t__ kern_base; TYPE_1__* parent; } ;
struct tsi148_driver {int vme_rmw; scalar_t__ base; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {struct tsi148_driver* driver_priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned int,unsigned int,unsigned long long*) ;
 int FUNC_5 (scalar_t__,unsigned int*,unsigned int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static unsigned int FUNC_8(struct vme_master_resource *VAR_10,
 unsigned int VAR_11, unsigned int VAR_12, unsigned int VAR_13,
 loff_t VAR_14)
{
 unsigned long long VAR_15;
 unsigned int VAR_16, VAR_17;
 u32 VAR_18, VAR_19;
 int VAR_20;
 struct tsi148_driver *VAR_21;

 VAR_21 = VAR_10->parent->driver_priv;


 VAR_20 = VAR_10->number;


 FUNC_2(&VAR_21->vme_rmw);


 FUNC_6(&VAR_10->lock);

 VAR_16 = FUNC_0(VAR_21->base + VAR_2[VAR_20] +
  VAR_1);
 VAR_17 = FUNC_0(VAR_21->base + VAR_2[VAR_20] +
  VAR_0);

 FUNC_4(VAR_16, VAR_17, &VAR_15);
 FUNC_5(VAR_15 + VAR_14, &VAR_16, &VAR_17);


 FUNC_1(VAR_11, VAR_21->base + VAR_6);
 FUNC_1(VAR_12, VAR_21->base + VAR_5);
 FUNC_1(VAR_13, VAR_21->base + VAR_7);
 FUNC_1(VAR_16, VAR_21->base + VAR_4);
 FUNC_1(VAR_17, VAR_21->base + VAR_3);


 VAR_18 = FUNC_0(VAR_21->base + VAR_8);
 VAR_18 |= VAR_9;
 FUNC_1(VAR_18, VAR_21->base + VAR_8);


 VAR_19 = FUNC_0(VAR_10->kern_base + VAR_14);


 VAR_18 = FUNC_0(VAR_21->base + VAR_8);
 VAR_18 &= ~VAR_9;
 FUNC_1(VAR_18, VAR_21->base + VAR_8);

 FUNC_7(&VAR_10->lock);

 FUNC_3(&VAR_21->vme_rmw);

 return VAR_19;
}
