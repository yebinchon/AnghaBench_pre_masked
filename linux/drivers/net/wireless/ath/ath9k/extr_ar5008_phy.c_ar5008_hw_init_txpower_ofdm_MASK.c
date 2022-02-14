
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int * tx_power; } ;
typedef int int16_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ath_hw *VAR_1, int16_t *VAR_2,
     int VAR_3)
{
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = VAR_3; VAR_4 < VAR_3 + VAR_0; VAR_4++) {
  VAR_1->tx_power[VAR_4] = VAR_2[VAR_5];
  VAR_5++;
 }
}
