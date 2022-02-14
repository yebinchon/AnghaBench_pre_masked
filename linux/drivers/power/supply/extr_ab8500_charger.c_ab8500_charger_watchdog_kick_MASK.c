
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ux500_charger {TYPE_2__* psy; } ;
struct ab8500_charger {int dev; } ;
struct TYPE_4__ {TYPE_1__* desc; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 struct ab8500_charger* FUNC_2 (struct ux500_charger*) ;
 struct ab8500_charger* FUNC_3 (struct ux500_charger*) ;

__attribute__((used)) static int FUNC_4(struct ux500_charger *VAR_6)
{
 int VAR_7;
 struct ab8500_charger *VAR_8;

 if (VAR_6->psy->desc->type == VAR_4)
  VAR_8 = FUNC_2(VAR_6);
 else if (VAR_6->psy->desc->type == VAR_5)
  VAR_8 = FUNC_3(VAR_6);
 else
  return -VAR_3;

 VAR_7 = FUNC_0(VAR_8->dev, VAR_0,
  VAR_1, VAR_2);
 if (VAR_7)
  FUNC_1(VAR_8->dev, "Failed to kick WD!\n");

 return VAR_7;
}
