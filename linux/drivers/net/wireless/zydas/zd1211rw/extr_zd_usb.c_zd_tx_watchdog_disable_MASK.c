
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb_tx {int watchdog_work; scalar_t__ watchdog_enabled; } ;
struct zd_usb {struct zd_usb_tx tx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct zd_usb*) ;

void FUNC_3(struct zd_usb *VAR_0)
{
 struct zd_usb_tx *VAR_1 = &VAR_0->tx;

 if (VAR_1->watchdog_enabled) {
  FUNC_1(FUNC_2(VAR_0), "\n");
  VAR_1->watchdog_enabled = 0;
  FUNC_0(&VAR_1->watchdog_work);
 }
}
