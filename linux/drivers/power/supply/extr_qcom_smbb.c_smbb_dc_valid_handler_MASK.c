
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbb_charger {int dc_psy; int dc_disabled; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct smbb_charger*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct smbb_charger *VAR_4 = VAR_3;

 FUNC_1(VAR_4, VAR_2, VAR_1);
 if (!VAR_4->dc_disabled)
  FUNC_0(VAR_4->dc_psy);

 return VAR_0;
}
