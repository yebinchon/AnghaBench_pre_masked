
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ rfkill; } ;
struct asus_wmi {TYPE_1__ wlan; } ;


 int VAR_0 ;
 int FUNC_0 (struct asus_wmi*,int ) ;
 int FUNC_1 (int ,int,int *) ;
 struct asus_wmi* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1)
{
 struct asus_wmi *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->wlan.rfkill) {
  bool VAR_3;






  VAR_3 = FUNC_0(VAR_2, VAR_0);
  FUNC_1(VAR_0, VAR_3, ((void*)0));
 }

 return 0;
}
