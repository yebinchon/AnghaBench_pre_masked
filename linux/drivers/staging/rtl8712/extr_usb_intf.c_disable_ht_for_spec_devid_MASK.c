
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct usb_device_id {scalar_t__ idVendor; scalar_t__ idProduct; } ;
struct TYPE_4__ {scalar_t__ ampdu_enable; scalar_t__ cbw40_enable; scalar_t__ ht_enable; } ;
struct _adapter {TYPE_1__ registrypriv; } ;
struct TYPE_5__ {scalar_t__ idVendor; scalar_t__ idProduct; int flags; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_1(const struct usb_device_id *VAR_2,
          struct _adapter *VAR_3)
{
 u16 VAR_4, VAR_5;
 u32 VAR_6;
 int VAR_7;
 int VAR_8 = FUNC_0(VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_4 = VAR_1[VAR_7].idVendor;
  VAR_5 = VAR_1[VAR_7].idProduct;
  VAR_6 = VAR_1[VAR_7].flags;

  if ((VAR_2->idVendor == VAR_4) && (VAR_2->idProduct == VAR_5) &&
      (VAR_6 & VAR_0)) {
   VAR_3->registrypriv.ht_enable = 0;
   VAR_3->registrypriv.cbw40_enable = 0;
   VAR_3->registrypriv.ampdu_enable = 0;
  }
 }
}
