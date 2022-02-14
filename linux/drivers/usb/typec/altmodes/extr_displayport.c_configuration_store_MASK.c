
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int conf; } ;
struct dp_altmode {scalar_t__ state; int lock; TYPE_2__ data; TYPE_1__* alt; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ active; int vdo; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct dp_altmode* FUNC_1 (struct device*) ;
 int FUNC_2 (struct dp_altmode*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char const*) ;

__attribute__((used)) static ssize_t
FUNC_6(struct device *VAR_9, struct device_attribute *VAR_10,
      const char *VAR_11, size_t VAR_12)
{
 struct dp_altmode *VAR_13 = FUNC_1(VAR_9);
 u32 VAR_14;
 u32 VAR_15;
 int VAR_16;
 int VAR_17 = 0;

 VAR_16 = FUNC_5(VAR_8, VAR_11);
 if (VAR_16 < 0)
  return VAR_16;

 FUNC_3(&VAR_13->lock);

 if (VAR_13->state != VAR_5) {
  VAR_17 = -VAR_6;
  goto err_unlock;
 }

 VAR_15 = FUNC_0(VAR_13->alt->vdo);

 if ((VAR_16 == VAR_2 && !(VAR_15 & VAR_0)) ||
     (VAR_16 == VAR_4 && !(VAR_15 & VAR_1))) {
  VAR_17 = -VAR_7;
  goto err_unlock;
 }

 VAR_14 = VAR_13->data.conf & ~VAR_3;
 VAR_14 |= VAR_16;

 if (VAR_13->alt->active) {
  VAR_17 = FUNC_2(VAR_13, VAR_14);
  if (VAR_17)
   goto err_unlock;
 }

 VAR_13->data.conf = VAR_14;

err_unlock:
 FUNC_4(&VAR_13->lock);

 return VAR_17 ? VAR_17 : VAR_12;
}
