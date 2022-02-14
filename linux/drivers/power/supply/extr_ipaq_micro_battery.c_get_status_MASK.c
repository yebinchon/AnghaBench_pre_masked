
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct power_supply {TYPE_1__ dev; } ;
struct micro_battery {int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct micro_battery* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct power_supply *VAR_8)
{
 struct micro_battery *VAR_9 = FUNC_0(VAR_8->dev.parent);

 if (VAR_9->flag == VAR_3)
  return VAR_7;

 if (VAR_9->flag & VAR_2)
  return VAR_6;

 if ((VAR_9->flag & VAR_1) ||
  (VAR_9->flag & VAR_0))
  return VAR_4;

 return VAR_5;
}
