
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath_hw {int* tx_power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;

__attribute__((used)) static void FUNC_0(struct ath_hw *VAR_5, u8 *VAR_6,
          int VAR_7, int VAR_8,
          int VAR_9, bool VAR_10)
{
 int VAR_11, VAR_12, VAR_13 = 0;
 const u8 *VAR_14 = (VAR_10) ? VAR_4 : VAR_3;

 for (VAR_11 = VAR_7; VAR_11 < VAR_7 + VAR_1; VAR_11++) {
  VAR_12 = VAR_14[VAR_13];
  VAR_5->tx_power[VAR_11] = VAR_6[VAR_12];
  VAR_13++;
 }

 for (VAR_11 = VAR_8; VAR_11 < VAR_8 + VAR_0; VAR_11++) {
  VAR_12 = VAR_14[VAR_13];
  VAR_5->tx_power[VAR_11] = VAR_6[VAR_12];
  VAR_13++;
 }

 for (VAR_11 = VAR_9; VAR_11 < VAR_9 + VAR_2; VAR_11++) {
  VAR_12 = VAR_14[VAR_13];
  VAR_5->tx_power[VAR_11] = VAR_6[VAR_12];
  VAR_13++;
 }
}
