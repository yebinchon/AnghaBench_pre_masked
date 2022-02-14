
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct rtw_dev {struct rtw_chip_info* chip; } ;
struct rtw_chip_info {size_t txgi_factor; } ;
struct TYPE_8__ {size_t bw80; } ;
struct TYPE_7__ {size_t bw80; } ;
struct TYPE_6__ {size_t bw20; size_t bw40; } ;
struct TYPE_5__ {size_t ofdm; size_t bw20; } ;
struct rtw_5g_txpwr_idx {size_t* bw40_base; TYPE_4__ vht_2s_diff; TYPE_3__ vht_1s_diff; TYPE_2__ ht_2s_diff; TYPE_1__ ht_1s_diff; } ;
typedef enum rtw_bandwidth { ____Placeholder_rtw_bandwidth } rtw_bandwidth ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;



 int FUNC_0 (int) ;

__attribute__((used)) static u8 FUNC_1(struct rtw_dev *VAR_6,
     struct rtw_5g_txpwr_idx *VAR_7,
     enum rtw_bandwidth VAR_8,
     u8 VAR_9, u8 VAR_10)
{
 struct rtw_chip_info *VAR_11 = VAR_6->chip;
 u8 VAR_12;
 u8 VAR_13, VAR_14;
 bool VAR_15;
 bool VAR_16;
 u8 VAR_17 = VAR_11->txgi_factor;

 VAR_12 = VAR_7->bw40_base[VAR_10];

 VAR_15 = (VAR_9 >= VAR_0 && VAR_9 <= VAR_1) ||
     (VAR_9 >= VAR_3 &&
      VAR_9 <= VAR_5);
 VAR_16 = (VAR_9 >= VAR_2 && VAR_9 <= VAR_1) ||
      (VAR_9 >= VAR_4);

 if (!VAR_15) {
  VAR_12 += VAR_7->ht_1s_diff.ofdm * VAR_17;
  return VAR_12;
 }

 switch (VAR_8) {
 default:
  FUNC_0(1);

 case 130:
  VAR_12 += VAR_7->ht_1s_diff.bw20 * VAR_17;
  if (VAR_16)
   VAR_12 += VAR_7->ht_2s_diff.bw20 * VAR_17;
  break;
 case 129:

  if (VAR_16)
   VAR_12 += VAR_7->ht_2s_diff.bw40 * VAR_17;
  break;
 case 128:

  VAR_14 = VAR_7->bw40_base[VAR_10];
  VAR_13 = VAR_7->bw40_base[VAR_10 + 1];

  VAR_12 = (VAR_14 + VAR_13) / 2;
  VAR_12 += VAR_7->vht_1s_diff.bw80 * VAR_17;
  if (VAR_16)
   VAR_12 += VAR_7->vht_2s_diff.bw80 * VAR_17;
  break;
 }

 return VAR_12;
}
