
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_rfkill {int type; struct samsung_laptop* samsung; struct rfkill* rfkill; } ;
struct samsung_laptop {TYPE_1__* platform_device; } ;
struct rfkill_ops {int dummy; } ;
struct rfkill {int dummy; } ;
typedef enum rfkill_type { ____Placeholder_rfkill_type } rfkill_type ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct rfkill* FUNC_0 (char const*,int *,int,struct rfkill_ops const*,struct samsung_rfkill*) ;
 int FUNC_1 (struct rfkill*) ;
 int FUNC_2 (struct rfkill*,int) ;
 int FUNC_3 (struct rfkill*) ;

__attribute__((used)) static int FUNC_4(struct samsung_laptop *VAR_1,
         struct samsung_rfkill *VAR_2,
         const char *VAR_3, enum rfkill_type VAR_4,
         const struct rfkill_ops *VAR_5,
         int VAR_6)
{
 struct rfkill **VAR_7 = &VAR_2->rfkill;
 int VAR_8;

 VAR_2->type = VAR_4;
 VAR_2->samsung = VAR_1;

 *VAR_7 = FUNC_0(VAR_3, &VAR_1->platform_device->dev,
          VAR_4, VAR_5, VAR_2);

 if (!*VAR_7)
  return -VAR_0;

 if (VAR_6 != -1)
  FUNC_2(*VAR_7, VAR_6);

 VAR_8 = FUNC_3(*VAR_7);
 if (VAR_8) {
  FUNC_1(*VAR_7);
  *VAR_7 = ((void*)0);
  return VAR_8;
 }
 return 0;
}
