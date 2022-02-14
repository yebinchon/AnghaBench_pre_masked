
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int conf; } ;
struct dp_altmode {scalar_t__ state; int lock; TYPE_2__ data; TYPE_1__* alt; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ active; int vdo; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dp_altmode* FUNC_6 (struct device*) ;
 int FUNC_7 (struct dp_altmode*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 int FUNC_10 (int ,char const*) ;

__attribute__((used)) static ssize_t
FUNC_11(struct device *VAR_6, struct device_attribute *VAR_7,
       const char *VAR_8, size_t VAR_9)
{
 struct dp_altmode *VAR_10 = FUNC_6(VAR_6);
 u8 VAR_11;
 u32 VAR_12;
 int VAR_13;

 VAR_13 = FUNC_10(VAR_5, VAR_8);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12 = FUNC_5(FUNC_0(VAR_13));
 VAR_13 = 0;

 FUNC_8(&VAR_10->lock);

 if (VAR_12 & VAR_10->data.conf)
  goto out_unlock;

 if (VAR_10->state != VAR_2) {
  VAR_13 = -VAR_3;
  goto out_unlock;
 }

 if (FUNC_3(VAR_10->data.conf) == VAR_0)
  VAR_11 = FUNC_2(VAR_10->alt->vdo);
 else
  VAR_11 = FUNC_1(VAR_10->alt->vdo);

 if (!(FUNC_4(VAR_12) & VAR_11)) {
  VAR_13 = -VAR_4;
  goto out_unlock;
 }

 VAR_12 |= VAR_10->data.conf & ~VAR_1;


 if (VAR_10->alt->active && FUNC_3(VAR_10->data.conf)) {
  VAR_13 = FUNC_7(VAR_10, VAR_12);
  if (VAR_13)
   goto out_unlock;
 }

 VAR_10->data.conf = VAR_12;

out_unlock:
 FUNC_9(&VAR_10->lock);

 return VAR_13 ? VAR_13 : VAR_9;
}
