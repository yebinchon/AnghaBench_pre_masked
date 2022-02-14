
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peak_usb_adapter {int dummy; } ;
struct peak_time_ref {struct peak_usb_adapter const* adapter; } ;


 int FUNC_0 (struct peak_time_ref*,int ,int) ;

void FUNC_1(struct peak_time_ref *VAR_0,
       const struct peak_usb_adapter *VAR_1)
{
 if (VAR_0) {
  FUNC_0(VAR_0, 0, sizeof(struct peak_time_ref));
  VAR_0->adapter = VAR_1;
 }
}
