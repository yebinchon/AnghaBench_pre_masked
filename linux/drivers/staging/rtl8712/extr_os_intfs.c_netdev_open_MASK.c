
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct net_device {scalar_t__ dev_addr; } ;
struct TYPE_8__ {int (* LedControlHandler ) (struct _adapter*,int ) ;} ;
struct TYPE_7__ {int smart_ps; int power_mgnt; } ;
struct TYPE_6__ {int (* inirp_init ) (struct _adapter*) ;} ;
struct TYPE_5__ {scalar_t__ mac_addr; } ;
struct _adapter {int bup; int driver_stopped; int surprise_removed; int mutex_start; TYPE_4__ ledpriv; TYPE_3__ registrypriv; TYPE_2__ dvobjpriv; TYPE_1__ eeprompriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct _adapter*,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct _adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_11 (struct _adapter*,int *) ;
 int FUNC_12 (struct _adapter*,int ,int ) ;
 scalar_t__ FUNC_13 (struct _adapter*) ;
 scalar_t__ FUNC_14 (struct _adapter*) ;
 int FUNC_15 (struct _adapter*) ;
 int FUNC_16 (struct _adapter*) ;
 int FUNC_17 (struct _adapter*,int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_18(struct net_device *VAR_6)
{
 struct _adapter *VAR_7 = FUNC_5(VAR_6);

 FUNC_3(&VAR_7->mutex_start);
 if (!VAR_7->bup) {
  VAR_7->driver_stopped = 0;
  VAR_7->surprise_removed = 0;
  VAR_7->bup = 1;
  if (FUNC_13(VAR_7) != VAR_2)
   goto netdev_open_error;
  if (!VAR_4) {

   FUNC_1(VAR_6->dev_addr,
          VAR_7->eeprompriv.mac_addr, VAR_0);
  } else {



   FUNC_2(200);
   FUNC_11(VAR_7, (u8 *)VAR_6->dev_addr);
   FUNC_1(VAR_7->eeprompriv.mac_addr,
          VAR_6->dev_addr, VAR_0);
  }
  if (FUNC_14(VAR_7) != VAR_2)
   goto netdev_open_error;
  if (!VAR_7->dvobjpriv.inirp_init)
   goto netdev_open_error;
  else
   VAR_7->dvobjpriv.inirp_init(VAR_7);
  FUNC_12(VAR_7, VAR_7->registrypriv.power_mgnt,
      VAR_7->registrypriv.smart_ps);
 }
 if (!FUNC_7(VAR_6))
  FUNC_8(VAR_6);
 else
  FUNC_10(VAR_6);

 if (VAR_5)
  FUNC_0(VAR_7, VAR_3);

 FUNC_15(VAR_7);
 VAR_7->ledpriv.LedControlHandler(VAR_7, VAR_1);
 FUNC_4(&VAR_7->mutex_start);
 return 0;
netdev_open_error:
 VAR_7->bup = 0;
 FUNC_6(VAR_6);
 FUNC_9(VAR_6);
 FUNC_4(&VAR_7->mutex_start);
 return -1;
}
