
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ops; } ;
struct ath10k {TYPE_2__ wmi; } ;
typedef enum wmi_vdev_subtype { ____Placeholder_wmi_vdev_subtype } wmi_vdev_subtype ;
struct TYPE_3__ {int (* get_vdev_subtype ) (struct ath10k*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int) ;

__attribute__((used)) static inline int
FUNC_1(struct ath10k *VAR_1, enum wmi_vdev_subtype VAR_2)
{
 if (!VAR_1->wmi.ops->get_vdev_subtype)
  return -VAR_0;

 return VAR_1->wmi.ops->get_vdev_subtype(VAR_1, VAR_2);
}
