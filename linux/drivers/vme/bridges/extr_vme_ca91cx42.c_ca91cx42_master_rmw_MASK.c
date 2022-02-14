
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct vme_master_resource {int lock; scalar_t__ kern_base; TYPE_1__* parent; } ;
struct device {int dummy; } ;
struct ca91cx42_driver {int vme_rmw; scalar_t__ base; } ;
typedef uintptr_t loff_t ;
struct TYPE_2__ {struct device* parent; struct ca91cx42_driver* driver_priv; } ;


 uintptr_t VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct device*,char*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (uintptr_t,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static unsigned int FUNC_7(struct vme_master_resource *VAR_7,
 unsigned int VAR_8, unsigned int VAR_9, unsigned int VAR_10,
 loff_t VAR_11)
{
 u32 VAR_12;
 uintptr_t VAR_13;
 struct ca91cx42_driver *VAR_14;
 struct device *VAR_15;

 VAR_14 = VAR_7->parent->driver_priv;
 VAR_15 = VAR_7->parent->parent;




 FUNC_3(&VAR_14->vme_rmw);


 FUNC_5(&VAR_7->lock);

 VAR_13 = (uintptr_t)VAR_7->kern_base + VAR_11;


 if (VAR_13 & 0x3) {
  FUNC_0(VAR_15, "RMW Address not 4-byte aligned\n");
  VAR_12 = -VAR_1;
  goto out;
 }


 FUNC_2(0, VAR_14->base + VAR_4);


 FUNC_2(VAR_8, VAR_14->base + VAR_5);
 FUNC_2(VAR_9, VAR_14->base + VAR_3);
 FUNC_2(VAR_10, VAR_14->base + VAR_6);
 FUNC_2(VAR_13, VAR_14->base + VAR_2);


 FUNC_2(VAR_0, VAR_14->base + VAR_4);


 VAR_12 = FUNC_1(VAR_7->kern_base + VAR_11);


 FUNC_2(0, VAR_14->base + VAR_4);

out:
 FUNC_6(&VAR_7->lock);

 FUNC_4(&VAR_14->vme_rmw);

 return VAR_12;
}
