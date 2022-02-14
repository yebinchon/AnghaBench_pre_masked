
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ssb_device {int dummy; } ;
struct TYPE_4__ {struct ssb_device* dev; } ;
struct TYPE_3__ {struct ssb_device* dev; } ;
struct ssb_bus {TYPE_2__ chipco; TYPE_1__ pcicore; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ssb_device*,int,int ) ;

void FUNC_2(struct ssb_bus *VAR_0)
{
 struct ssb_device *VAR_1;




 VAR_1 = VAR_0->chipco.dev;

 if (FUNC_0(!VAR_1))
  return;

 FUNC_1(VAR_1, 0xFD8, 0);
}
