
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct mwifiex_private {int tx_ba_stream_tbl_ptr; } ;
struct mwifiex_adapter {size_t priv_num; scalar_t__ fw_api_ver; int hw_dot_11n_dev_cap; struct mwifiex_private** priv; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline u8 FUNC_2(
     struct mwifiex_adapter *VAR_2)
{
 struct mwifiex_private *VAR_3;
 u8 VAR_4;
 u32 VAR_5 = 0, VAR_6;

 VAR_6 = VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_2->priv_num; VAR_4++) {
  VAR_3 = VAR_2->priv[VAR_4];
  if (VAR_3)
   VAR_5 += FUNC_1(
    &VAR_3->tx_ba_stream_tbl_ptr);
 }

 if (VAR_2->fw_api_ver == VAR_0) {
  VAR_6 =
          FUNC_0(VAR_2->hw_dot_11n_dev_cap);
  if (!VAR_6)
   VAR_6 = VAR_1;
 }

 return ((VAR_5 < VAR_6) ? 1 : 0);
}
