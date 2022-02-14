
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int capabilities; TYPE_2__* dev; } ;
struct ssb_bus {scalar_t__ bustype; TYPE_3__ chipco; } ;
struct TYPE_4__ {int revision; } ;
struct TYPE_5__ {TYPE_1__ id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

bool FUNC_0(struct ssb_bus *VAR_2)
{




 if (VAR_2->bustype == VAR_0 &&
     VAR_2->chipco.dev &&
     VAR_2->chipco.dev->id.revision >= 31)
  return VAR_2->chipco.capabilities & VAR_1;

 return 1;
}
