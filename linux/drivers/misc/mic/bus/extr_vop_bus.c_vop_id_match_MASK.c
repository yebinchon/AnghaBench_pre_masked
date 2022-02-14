
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_device_id {scalar_t__ device; scalar_t__ vendor; } ;
struct TYPE_2__ {scalar_t__ device; scalar_t__ vendor; } ;
struct vop_device {TYPE_1__ id; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const struct vop_device *VAR_1,
          const struct vop_device_id *VAR_2)
{
 if (VAR_2->device != VAR_1->id.device && VAR_2->device != VAR_0)
  return 0;

 return VAR_2->vendor == VAR_0 || VAR_2->vendor == VAR_1->id.vendor;
}
