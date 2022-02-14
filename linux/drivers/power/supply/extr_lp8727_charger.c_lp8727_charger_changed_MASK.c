
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int parent; } ;
struct power_supply {TYPE_2__* desc; TYPE_1__ dev; } ;
struct lp8727_chg {TYPE_3__* chg_param; int devid; } ;
struct TYPE_6__ {int eoc_level; int ichg; } ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lp8727_chg* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct lp8727_chg*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct power_supply *VAR_2)
{
 struct lp8727_chg *VAR_3 = FUNC_0(VAR_2->dev.parent);
 u8 VAR_4;
 u8 VAR_5;
 u8 VAR_6;


 if (!FUNC_1(VAR_2->desc->name, VAR_3->devid))
  return;


 if (VAR_3->chg_param) {
  VAR_4 = VAR_3->chg_param->eoc_level;
  VAR_5 = VAR_3->chg_param->ichg;
  VAR_6 = (VAR_5 << VAR_1) | VAR_4;
  FUNC_2(VAR_3, VAR_0, VAR_6);
 }
}
