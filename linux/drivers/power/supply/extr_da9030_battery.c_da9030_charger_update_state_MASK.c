
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct da9030_charger {int is_on; int mA; int mV; int fault; int master; int chdet; int adc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct da9030_charger*,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_3(struct da9030_charger *VAR_4)
{
 uint8_t VAR_5;

 FUNC_2(VAR_4->master, VAR_0, &VAR_5);
 VAR_4->is_on = (VAR_5 & VAR_1) ? 1 : 0;
 VAR_4->mA = ((VAR_5 >> 3) & 0xf) * 100;
 VAR_4->mV = (VAR_5 & 0x7) * 50 + 4000;

 FUNC_0(VAR_4, &VAR_4->adc);
 FUNC_2(VAR_4->master, VAR_2, &VAR_4->fault);
 VAR_4->chdet = FUNC_1(VAR_4->master,
           VAR_3);
}
