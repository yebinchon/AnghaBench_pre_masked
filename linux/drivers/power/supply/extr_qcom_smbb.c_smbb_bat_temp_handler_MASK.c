
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbb_charger {int bat_psy; int statlock; int status; scalar_t__ addr; int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,unsigned int*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct smbb_charger *VAR_8 = VAR_7;
 unsigned int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_8->regmap, VAR_8->addr + VAR_1, &VAR_9);
 if (VAR_10)
  return VAR_0;

 FUNC_0(&VAR_8->statlock);
 if (VAR_9 & VAR_5) {
  VAR_8->status |= VAR_3;
 } else {
  VAR_8->status &= ~VAR_3;
  if (VAR_9 & VAR_4)
   VAR_8->status |= VAR_2;
 }
 FUNC_1(&VAR_8->statlock);

 FUNC_2(VAR_8->bat_psy);
 return VAR_0;
}
