
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct rtw_dev {struct rtw_chip_info* chip; } ;
struct rtw_chip_info {scalar_t__ txgi_factor; } ;
struct TYPE_4__ {scalar_t__ bw20; scalar_t__ bw40; } ;
struct TYPE_3__ {scalar_t__ ofdm; scalar_t__ bw20; } ;
struct rtw_2g_txpwr_idx {scalar_t__* cck_base; scalar_t__* bw40_base; TYPE_2__ ht_2s_diff; TYPE_1__ ht_1s_diff; } ;
typedef enum rtw_bandwidth { ____Placeholder_rtw_bandwidth } rtw_bandwidth ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;


 int FUNC_0 (int) ;

__attribute__((used)) static u8 FUNC_1(struct rtw_dev *VAR_9,
     struct rtw_2g_txpwr_idx *VAR_10,
     enum rtw_bandwidth VAR_11,
     u8 VAR_12, u8 VAR_13)
{
 struct rtw_chip_info *VAR_14 = VAR_9->chip;
 u8 VAR_15;
 bool VAR_16;
 bool VAR_17;
 u8 VAR_18 = VAR_14->txgi_factor;

 if (VAR_12 <= VAR_0)
  VAR_15 = VAR_10->cck_base[VAR_13];
 else
  VAR_15 = VAR_10->bw40_base[VAR_13];

 if (VAR_12 >= VAR_2 && VAR_12 <= VAR_1)
  VAR_15 += VAR_10->ht_1s_diff.ofdm * VAR_18;

 VAR_16 = (VAR_12 >= VAR_3 && VAR_12 <= VAR_4) ||
     (VAR_12 >= VAR_6 &&
      VAR_12 <= VAR_8);
 VAR_17 = (VAR_12 >= VAR_5 && VAR_12 <= VAR_4) ||
      (VAR_12 >= VAR_7);

 if (!VAR_16)
  return VAR_15;

 switch (VAR_11) {
 default:
  FUNC_0(1);

 case 129:
  VAR_15 += VAR_10->ht_1s_diff.bw20 * VAR_18;
  if (VAR_17)
   VAR_15 += VAR_10->ht_2s_diff.bw20 * VAR_18;
  break;
 case 128:

  if (VAR_17)
   VAR_15 += VAR_10->ht_2s_diff.bw40 * VAR_18;
  break;
 }

 return VAR_15;
}
