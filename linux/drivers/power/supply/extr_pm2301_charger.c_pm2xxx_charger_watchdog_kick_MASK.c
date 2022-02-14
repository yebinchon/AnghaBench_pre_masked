
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ux500_charger {TYPE_2__* psy; } ;
struct pm2xxx_charger {int dev; } ;
struct TYPE_4__ {TYPE_1__* desc; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct pm2xxx_charger*,int ,int ) ;
 struct pm2xxx_charger* FUNC_2 (struct ux500_charger*) ;

__attribute__((used)) static int FUNC_3(struct ux500_charger *VAR_4)
{
 int VAR_5;
 struct pm2xxx_charger *VAR_6;

 if (VAR_4->psy->desc->type == VAR_2)
  VAR_6 = FUNC_2(VAR_4);
 else
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_6, VAR_1, VAR_3);
 if (VAR_5)
  FUNC_0(VAR_6->dev, "Failed to kick WD!\n");

 return VAR_5;
}
