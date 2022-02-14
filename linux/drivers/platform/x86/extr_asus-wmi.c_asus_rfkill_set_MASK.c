
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct asus_rfkill {scalar_t__ dev_id; TYPE_2__* asus; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {scalar_t__ wlan_ctrl_by_user; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_1(void *VAR_2, bool VAR_3)
{
 struct asus_rfkill *VAR_4 = VAR_2;
 u32 VAR_5 = !VAR_3;
 u32 VAR_6 = VAR_4->dev_id;
 if ((VAR_6 == VAR_0) &&
      VAR_4->asus->driver->wlan_ctrl_by_user)
  VAR_6 = VAR_1;

 return FUNC_0(VAR_6, VAR_5, ((void*)0));
}
