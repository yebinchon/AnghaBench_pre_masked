
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct rtw_hal {size_t current_band_width; size_t** tx_pwr_tbl; } ;
struct TYPE_2__ {size_t txpwr_regd; } ;
struct rtw_dev {TYPE_1__ regd; struct rtw_hal hal; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (struct rtw_dev*,size_t,size_t,size_t,size_t,size_t) ;
 size_t** VAR_1 ;
 size_t* VAR_2 ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_3,
          u8 VAR_4, u8 VAR_5, u8 VAR_6)
{
 struct rtw_hal *VAR_7 = &VAR_3->hal;
 u8 VAR_8 = VAR_3->regd.txpwr_regd;
 u8 *VAR_9;
 u8 VAR_10;
 u8 VAR_11;
 u8 VAR_12;
 u8 VAR_13;
 int VAR_14;

 if (VAR_6 >= VAR_0)
  return;

 VAR_9 = VAR_1[VAR_6];
 VAR_10 = VAR_2[VAR_6];
 VAR_13 = VAR_7->current_band_width;
 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
  VAR_11 = VAR_9[VAR_14];
  VAR_12 = FUNC_0(VAR_3, VAR_5, VAR_11,
           VAR_13, VAR_4, VAR_8);
  VAR_7->tx_pwr_tbl[VAR_5][VAR_11] = VAR_12;
 }
}
