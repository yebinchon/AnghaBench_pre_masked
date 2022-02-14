
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rcar_gen3_thermal_priv {int num_tscs; TYPE_1__** tscs; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int zone; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct rcar_gen3_thermal_priv *VAR_5 = VAR_4;
 u32 VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5->num_tscs; VAR_7++) {
  VAR_6 = FUNC_0(VAR_5->tscs[VAR_7], VAR_1);
  FUNC_1(VAR_5->tscs[VAR_7], VAR_1, 0);
  if (VAR_6)
   FUNC_2(VAR_5->tscs[VAR_7]->zone,
         VAR_2);
 }

 return VAR_0;
}
