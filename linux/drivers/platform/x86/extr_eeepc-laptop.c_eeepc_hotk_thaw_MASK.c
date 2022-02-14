
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeepc_laptop {scalar_t__ wlan_rfkill; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct eeepc_laptop* FUNC_0 (struct device*) ;
 int FUNC_1 (struct eeepc_laptop*,int ) ;
 int FUNC_2 (struct eeepc_laptop*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1)
{
 struct eeepc_laptop *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->wlan_rfkill) {
  int VAR_3;






  VAR_3 = FUNC_1(VAR_2, VAR_0);
  if (VAR_3 >= 0)
   FUNC_2(VAR_2, VAR_0, VAR_3);
 }

 return 0;
}
