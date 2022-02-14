
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct da9030_charger {int master; } ;
struct da9030_adc_res {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int *) ;

__attribute__((used)) static inline void FUNC_1(struct da9030_charger *VAR_1,
       struct da9030_adc_res *VAR_2)
{
 FUNC_0(VAR_1->master, VAR_0,
       sizeof(*VAR_2), (uint8_t *)VAR_2);
}
