
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtw_hal {scalar_t__ antenna_rx; scalar_t__ cut_version; } ;
struct rtw_efuse {int rfe_option; } ;
struct rtw_dev {struct rtw_efuse efuse; struct rtw_hal hal; } ;
struct rtw8822b_rfe_info {int fem; int ifem_ext; struct cca_ccut* cca_ccut_5g; struct cca_ccut* cca_ccut_2g; } ;
struct cca_ccut {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;



 int FUNC_0 (struct cca_ccut const*,int,int*,int*,int*) ;
 int FUNC_1 (struct rtw_dev*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_14, u8 VAR_15, u8 VAR_16,
         const struct rtw8822b_rfe_info *VAR_17)
{
 struct rtw_hal *VAR_18 = &VAR_14->hal;
 struct rtw_efuse *VAR_19 = &VAR_14->efuse;
 const struct cca_ccut *VAR_20;
 u8 VAR_21;
 u32 VAR_22, VAR_23, VAR_24;
 bool VAR_25 = 0, VAR_26 = 0, VAR_27 = 0;

 if (VAR_15 <= 14) {
  VAR_20 = VAR_17->cca_ccut_2g;

  if (VAR_18->antenna_rx == VAR_0 ||
      VAR_18->antenna_rx == VAR_1)
   VAR_21 = VAR_2;
  else
   VAR_21 = VAR_4;
 } else {
  VAR_20 = VAR_17->cca_ccut_5g;

  if (VAR_18->antenna_rx == VAR_0 ||
      VAR_18->antenna_rx == VAR_1)
   VAR_21 = VAR_3;
  else
   VAR_21 = VAR_5;
 }

 FUNC_0(VAR_20, VAR_21, &VAR_22, &VAR_23, &VAR_24);

 switch (VAR_17->fem) {
 case 129:
 default:
  VAR_26 = 1;
  if (VAR_17->ifem_ext)
   VAR_27 = 1;
  break;
 case 130:
  VAR_25 = 1;
  break;
 case 128:
  if (VAR_15 <= 14)
   VAR_26 = 1;
  else
   VAR_25 = 1;
  break;
 }

 if (VAR_26) {
  if ((VAR_18->cut_version == VAR_13 &&
       (VAR_21 == VAR_4 || VAR_21 == VAR_5) &&
       VAR_16 == VAR_12) ||
      (!VAR_27 && VAR_21 == VAR_5 &&
       VAR_16 == VAR_12) ||
      (VAR_19->rfe_option == 5 && VAR_21 == VAR_5))
   VAR_23 = 0x79a0ea28;
 }

 FUNC_1(VAR_14, VAR_8, VAR_6, VAR_22);
 FUNC_1(VAR_14, VAR_10, VAR_6, VAR_23);
 FUNC_1(VAR_14, VAR_7, VAR_6, VAR_24);

 if (VAR_25 && !(VAR_18->cut_version == VAR_13))
  FUNC_1(VAR_14, VAR_9, VAR_6, 0x9194b2b9);

 if (VAR_16 == VAR_11 &&
     ((VAR_15 >= 52 && VAR_15 <= 64) ||
      (VAR_15 >= 100 && VAR_15 <= 144)))
  FUNC_1(VAR_14, VAR_7, 0xf0, 0x4);
}
