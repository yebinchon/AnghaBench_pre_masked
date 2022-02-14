
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {scalar_t__* tx_power; } ;
typedef scalar_t__ int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_1(struct ath_hw *VAR_3, int16_t *VAR_4,
          int VAR_5, int VAR_6,
          bool VAR_7, int VAR_8)
{
 int VAR_9, VAR_10 = (VAR_7) ? VAR_1 : VAR_0;

 for (VAR_9 = VAR_5; VAR_9 < VAR_5 + VAR_2; VAR_9++) {
  VAR_3->tx_power[VAR_9] = VAR_4[VAR_10] + VAR_8;
  VAR_10++;
 }
 FUNC_0(&VAR_3->tx_power[VAR_6], &VAR_3->tx_power[VAR_5],
        VAR_2);
}
