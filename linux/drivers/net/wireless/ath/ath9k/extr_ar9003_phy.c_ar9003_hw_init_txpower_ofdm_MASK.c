
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath_hw {int * tx_power; } ;


 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ath_hw *VAR_2, u8 *VAR_3,
     int VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = VAR_4; VAR_5 < VAR_4 + VAR_0; VAR_5++) {

  VAR_6 = VAR_1[VAR_5 - VAR_4];
  VAR_2->tx_power[VAR_5] = VAR_3[VAR_6];
 }
}
