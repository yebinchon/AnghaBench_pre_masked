
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int * tx_power; int * tx_power_stbc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct ath_hw *VAR_3, int VAR_4,
     int VAR_5, int VAR_6)
{
 FUNC_0(&VAR_3->tx_power_stbc[VAR_4], &VAR_3->tx_power[VAR_4],
        VAR_1);
 FUNC_0(&VAR_3->tx_power_stbc[VAR_5], &VAR_3->tx_power[VAR_5],
        VAR_0);
 FUNC_0(&VAR_3->tx_power_stbc[VAR_6], &VAR_3->tx_power[VAR_6],
        VAR_2);
}
