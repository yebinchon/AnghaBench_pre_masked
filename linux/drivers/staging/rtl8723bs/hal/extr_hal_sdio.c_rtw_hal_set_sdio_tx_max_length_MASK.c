
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hal_com_data {int* sdio_tx_max_len; } ;
struct adapter {int dummy; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (struct adapter*,int ,int*) ;

void FUNC_2(
 struct adapter *VAR_5, u8 VAR_6, u8 VAR_7, u8 VAR_8, u8 VAR_9
)
{
 struct hal_com_data *VAR_10 = FUNC_0(VAR_5);
 u32 VAR_11;
 u32 VAR_12, VAR_13, VAR_14;

 FUNC_1(VAR_5, VAR_0, &VAR_11);

 VAR_12 = ((VAR_6 + VAR_9) >> 1) * VAR_11;
 VAR_13 = ((VAR_7 + VAR_9) >> 1) * VAR_11;
 VAR_14 = ((VAR_8 + VAR_9) >> 1) * VAR_11;

 VAR_10->sdio_tx_max_len[VAR_1] =
  (VAR_12 > VAR_3) ? VAR_3 : VAR_12;
 VAR_10->sdio_tx_max_len[VAR_4] =
  (VAR_13 > VAR_3) ? VAR_3 : VAR_13;
 VAR_10->sdio_tx_max_len[VAR_2] =
  (VAR_14 > VAR_3) ? VAR_3 : VAR_14;
}
