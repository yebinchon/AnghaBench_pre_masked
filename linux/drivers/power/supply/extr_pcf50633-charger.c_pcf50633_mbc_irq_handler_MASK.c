
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcf50633_mbc {int usb_online; int adapter_online; TYPE_2__* pcf; int adapter; int usb; int ac; } ;
struct TYPE_5__ {TYPE_1__* pdata; } ;
struct TYPE_4__ {int (* mbc_event_callback ) (TYPE_2__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_4, void *VAR_5)
{
 struct pcf50633_mbc *VAR_6 = VAR_5;


 if (VAR_4 == VAR_2) {
  VAR_6->usb_online = 1;
 } else if (VAR_4 == VAR_3) {
  VAR_6->usb_online = 0;
  FUNC_0(VAR_6->pcf, 0);
 }


 if (VAR_4 == VAR_0)
  VAR_6->adapter_online = 1;
 else if (VAR_4 == VAR_1)
  VAR_6->adapter_online = 0;

 FUNC_1(VAR_6->ac);
 FUNC_1(VAR_6->usb);
 FUNC_1(VAR_6->adapter);

 if (VAR_6->pcf->pdata->mbc_event_callback)
  VAR_6->pcf->pdata->mbc_event_callback(VAR_6->pcf, VAR_4);
}
