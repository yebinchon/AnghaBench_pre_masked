
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct brcms_phy {int * tx_power_offset; int * adj_pwr_tbl_nphy; int radio_chanspec; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;

__attribute__((used)) static void FUNC_1(struct brcms_phy *VAR_12)
{
 u8 VAR_13, VAR_14, VAR_15, VAR_16;

 for (VAR_13 = VAR_1; VAR_13 <= VAR_11; VAR_13++)
  VAR_12->adj_pwr_tbl_nphy[VAR_13] = VAR_12->tx_power_offset[VAR_13];

 for (VAR_15 = 0; VAR_15 < 4; VAR_15++) {
  VAR_14 = 0;

  VAR_16 = 0;

  switch (VAR_15) {
  case 0:

   if (FUNC_0(VAR_12->radio_chanspec)
       && VAR_0) {
    VAR_13 = VAR_7;
   } else {
    VAR_13 = (FUNC_0(VAR_12->radio_chanspec)) ?
          VAR_10 : VAR_9;
    VAR_16 = 1;
   }
   break;

  case 1:

   VAR_13 = (FUNC_0(VAR_12->radio_chanspec)) ?
         VAR_5 : VAR_2;
   break;

  case 2:

   VAR_13 = (FUNC_0(VAR_12->radio_chanspec)) ?
         VAR_8 : VAR_4;
   break;

  case 3:

   VAR_13 = (FUNC_0(VAR_12->radio_chanspec)) ?
         VAR_6 : VAR_3;
   break;
  }

  VAR_12->adj_pwr_tbl_nphy[4 + 4 * (VAR_14++) + VAR_15] =
   VAR_12->tx_power_offset[VAR_13];
  VAR_13 = VAR_13 + VAR_16;
  VAR_12->adj_pwr_tbl_nphy[4 + 4 * (VAR_14++) + VAR_15] =
   VAR_12->tx_power_offset[VAR_13];
  VAR_12->adj_pwr_tbl_nphy[4 + 4 * (VAR_14++) + VAR_15] =
   VAR_12->tx_power_offset[VAR_13];
  VAR_12->adj_pwr_tbl_nphy[4 + 4 * (VAR_14++) + VAR_15] =
   VAR_12->tx_power_offset[VAR_13++];

  VAR_12->adj_pwr_tbl_nphy[4 + 4 * (VAR_14++) + VAR_15] =
   VAR_12->tx_power_offset[VAR_13++];
  VAR_12->adj_pwr_tbl_nphy[4 + 4 * (VAR_14++) + VAR_15] =
   VAR_12->tx_power_offset[VAR_13];
  VAR_12->adj_pwr_tbl_nphy[4 + 4 * (VAR_14++) + VAR_15] =
   VAR_12->tx_power_offset[VAR_13];
  VAR_12->adj_pwr_tbl_nphy[4 + 4 * (VAR_14++) + VAR_15] =
   VAR_12->tx_power_offset[VAR_13++];

  VAR_12->adj_pwr_tbl_nphy[4 + 4 * (VAR_14++) + VAR_15] =
   VAR_12->tx_power_offset[VAR_13++];
  VAR_12->adj_pwr_tbl_nphy[4 + 4 * (VAR_14++) + VAR_15] =
   VAR_12->tx_power_offset[VAR_13];
  VAR_12->adj_pwr_tbl_nphy[4 + 4 * (VAR_14++) + VAR_15] =
   VAR_12->tx_power_offset[VAR_13];
  VAR_12->adj_pwr_tbl_nphy[4 + 4 * (VAR_14++) + VAR_15] =
   VAR_12->tx_power_offset[VAR_13++];

  VAR_12->adj_pwr_tbl_nphy[4 + 4 * (VAR_14++) + VAR_15] =
   VAR_12->tx_power_offset[VAR_13];
  VAR_12->adj_pwr_tbl_nphy[4 + 4 * (VAR_14++) + VAR_15] =
   VAR_12->tx_power_offset[VAR_13++];
  VAR_12->adj_pwr_tbl_nphy[4 + 4 * (VAR_14++) + VAR_15] =
   VAR_12->tx_power_offset[VAR_13];
  VAR_13 = VAR_13 + 1 - VAR_16;
  VAR_12->adj_pwr_tbl_nphy[4 + 4 * (VAR_14++) + VAR_15] =
   VAR_12->tx_power_offset[VAR_13];

  VAR_12->adj_pwr_tbl_nphy[4 + 4 * (VAR_14++) + VAR_15] =
   VAR_12->tx_power_offset[VAR_13];
  VAR_12->adj_pwr_tbl_nphy[4 + 4 * (VAR_14++) + VAR_15] =
   VAR_12->tx_power_offset[VAR_13];
  VAR_12->adj_pwr_tbl_nphy[4 + 4 * (VAR_14++) + VAR_15] =
   VAR_12->tx_power_offset[VAR_13];
  VAR_12->adj_pwr_tbl_nphy[4 + 4 * (VAR_14++) + VAR_15] =
   VAR_12->tx_power_offset[VAR_13];
 }
}
