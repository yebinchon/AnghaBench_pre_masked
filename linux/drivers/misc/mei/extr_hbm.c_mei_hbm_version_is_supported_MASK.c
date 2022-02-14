
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ major_version; scalar_t__ minor_version; } ;
struct mei_device {TYPE_1__ version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

bool FUNC_0(struct mei_device *VAR_2)
{
 return (VAR_2->version.major_version < VAR_0) ||
  (VAR_2->version.major_version == VAR_0 &&
   VAR_2->version.minor_version <= VAR_1);
}
