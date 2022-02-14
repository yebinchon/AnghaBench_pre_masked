
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rfkill_ops {int dummy; } ;
struct asus_rfkill {int control_id; int * rfkill; struct asus_laptop* asus; } ;
struct asus_laptop {TYPE_1__* platform_device; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int * FUNC_0 (char const*,int *,int,struct rfkill_ops const*,struct asus_rfkill*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct asus_laptop *VAR_1, struct asus_rfkill *VAR_2,
        const char *VAR_3, int VAR_4, int VAR_5,
        const struct rfkill_ops *VAR_6)
{
 int VAR_7;

 VAR_2->control_id = VAR_4;
 VAR_2->asus = VAR_1;
 VAR_2->rfkill = FUNC_0(VAR_3, &VAR_1->platform_device->dev,
       VAR_5, VAR_6, VAR_2);
 if (!VAR_2->rfkill)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_2->rfkill);
 if (VAR_7) {
  FUNC_1(VAR_2->rfkill);
  VAR_2->rfkill = ((void*)0);
 }

 return VAR_7;
}
