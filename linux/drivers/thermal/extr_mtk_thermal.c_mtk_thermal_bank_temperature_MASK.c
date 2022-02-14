
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_thermal_data {TYPE_1__* bank_data; scalar_t__* msr; } ;
struct mtk_thermal_bank {size_t id; struct mtk_thermal* mt; } ;
struct mtk_thermal {scalar_t__ thermal_base; struct mtk_thermal_data* conf; } ;
struct TYPE_2__ {int num_sensors; size_t* sensors; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtk_thermal*,size_t,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mtk_thermal_bank *VAR_1)
{
 struct mtk_thermal *VAR_2 = VAR_1->mt;
 const struct mtk_thermal_data *VAR_3 = VAR_2->conf;
 int VAR_4, VAR_5 = VAR_0, VAR_6 = VAR_0;
 u32 VAR_7;

 for (VAR_4 = 0; VAR_4 < VAR_3->bank_data[VAR_1->id].num_sensors; VAR_4++) {
  VAR_7 = FUNC_1(VAR_2->thermal_base +
       VAR_3->msr[VAR_3->bank_data[VAR_1->id].sensors[VAR_4]]);

  VAR_5 = FUNC_0(VAR_2,
           VAR_3->bank_data[VAR_1->id].sensors[VAR_4],
           VAR_7);






  if (VAR_5 > 200000)
   VAR_5 = 0;

  if (VAR_5 > VAR_6)
   VAR_6 = VAR_5;
 }

 return VAR_6;
}
