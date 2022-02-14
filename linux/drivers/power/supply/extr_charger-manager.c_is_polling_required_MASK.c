
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct charger_manager {TYPE_1__* desc; int dev; } ;
struct TYPE_2__ {int polling_mode; } ;






 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct charger_manager*) ;
 int FUNC_2 (struct charger_manager*) ;

__attribute__((used)) static bool FUNC_3(struct charger_manager *VAR_0)
{
 switch (VAR_0->desc->polling_mode) {
 case 129:
  return 0;
 case 131:
  return 1;
 case 128:
  return FUNC_2(VAR_0);
 case 130:
  return FUNC_1(VAR_0);
 default:
  FUNC_0(VAR_0->dev, "Incorrect polling_mode (%d)\n",
    VAR_0->desc->polling_mode);
 }

 return 0;
}
