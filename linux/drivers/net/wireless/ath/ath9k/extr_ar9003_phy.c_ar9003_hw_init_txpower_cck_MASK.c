
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct ath_hw {void** tx_power; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 void* FUNC_0 (void*,void*) ;

__attribute__((used)) static void FUNC_1(struct ath_hw *VAR_4, u8 *VAR_5)
{
 VAR_4->tx_power[0] = VAR_5[VAR_2];
 VAR_4->tx_power[1] = VAR_5[VAR_2];
 VAR_4->tx_power[2] = FUNC_0(VAR_5[VAR_2],
         VAR_5[VAR_3]);
 VAR_4->tx_power[3] = FUNC_0(VAR_5[VAR_0],
         VAR_5[VAR_1]);
}
