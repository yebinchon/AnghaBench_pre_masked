
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb_tx {int watchdog_enabled; int watchdog_work; } ;
struct zd_usb {struct zd_usb_tx tx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (struct zd_usb*) ;
 int VAR_1 ;

void FUNC_3(struct zd_usb *VAR_2)
{
 struct zd_usb_tx *VAR_3 = &VAR_2->tx;

 if (!VAR_3->watchdog_enabled) {
  FUNC_0(FUNC_2(VAR_2), "\n");
  FUNC_1(VAR_1, &VAR_3->watchdog_work,
       VAR_0);
  VAR_3->watchdog_enabled = 1;
 }
}
