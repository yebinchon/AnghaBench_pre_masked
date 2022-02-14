
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct superhyway_device_id {scalar_t__ id; } ;
struct TYPE_2__ {scalar_t__ id; } ;
struct superhyway_device {TYPE_1__ id; } ;



__attribute__((used)) static const struct superhyway_device_id *
FUNC_0(const struct superhyway_device_id *VAR_0,
      struct superhyway_device *VAR_1)
{
 while (VAR_0->id) {
  if (VAR_0->id == VAR_1->id.id)
   return VAR_0;

  VAR_0++;
 }

 return ((void*)0);
}
