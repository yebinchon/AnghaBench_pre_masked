
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_18__ {int type; } ;
struct b43_wldev {TYPE_9__ phy; TYPE_8__* dev; } ;
struct TYPE_17__ {scalar_t__ bus_type; TYPE_7__* bus_sprom; TYPE_6__* sdev; TYPE_3__* bdev; } ;
struct TYPE_16__ {int dev_id; } ;
struct TYPE_15__ {TYPE_5__* bus; } ;
struct TYPE_14__ {scalar_t__ bustype; TYPE_4__* host_pci; } ;
struct TYPE_13__ {int device; } ;
struct TYPE_12__ {TYPE_2__* bus; } ;
struct TYPE_11__ {scalar_t__ hosttype; TYPE_1__* host_pci; } ;
struct TYPE_10__ {int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;





 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_4, bool *VAR_5,
    bool *VAR_6)
{
 u16 VAR_7 = 0;
 if (VAR_4->dev->bus_sprom->dev_id)
  VAR_7 = VAR_4->dev->bus_sprom->dev_id;


 switch (VAR_7) {
 case 0x4324:
 case 0x4312:
 case 0x4319:
 case 0x4328:
 case 0x432b:
 case 0x4350:
 case 0x4353:
 case 0x0576:
 case 0x435f:
 case 0x4331:
 case 0x4359:
 case 0x43a0:
 case 0x43b1:

  *VAR_5 = 1;
  *VAR_6 = 1;
  return;
 case 0x4321:

  if (VAR_4->phy.type != 132)
   break;

 case 0x4313:
 case 0x431a:
 case 0x432a:
 case 0x432d:
 case 0x4352:
 case 0x435a:
 case 0x4333:
 case 0x43a2:
 case 0x43b3:

  *VAR_5 = 0;
  *VAR_6 = 1;
  return;
 }


 switch (VAR_4->phy.type) {
 case 132:
 case 128:
 case 129:
 case 131:
 case 130:
  *VAR_5 = 1;
  *VAR_6 = 0;
  return;
 }

 FUNC_0(1);
}
