
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ssb_chipcommon {int capabilities; TYPE_2__* dev; } ;
struct ssb_bus {int dummy; } ;
struct TYPE_3__ {int revision; } ;
struct TYPE_4__ {TYPE_1__ id; struct ssb_bus* bus; } ;


 int VAR_0 ;
 int FUNC_0 (struct ssb_chipcommon*) ;
 int FUNC_1 (struct ssb_bus*) ;

__attribute__((used)) static int FUNC_2(struct ssb_chipcommon *VAR_1)
{
 struct ssb_bus *VAR_2 = VAR_1->dev->bus;

 if (VAR_1->capabilities & VAR_0) {

   return 32;
 } else {
  if (VAR_1->dev->id.revision < 18)
   return FUNC_1(VAR_2) / 1000;
  else
   return FUNC_0(VAR_1) / 1000;
 }
}
