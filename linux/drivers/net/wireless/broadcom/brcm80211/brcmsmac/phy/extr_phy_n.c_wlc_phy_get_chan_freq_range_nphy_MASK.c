
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef int u8 ;
struct chan_info_nphy_radio205x {int dummy; } ;
struct chan_info_nphy_radio2057_rev5 {int dummy; } ;
struct chan_info_nphy_radio2057 {int dummy; } ;
struct chan_info_nphy_2055 {int dummy; } ;
struct brcms_phy {int radio_chanspec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct brcms_phy*,scalar_t__,int*,struct chan_info_nphy_radio2057 const**,struct chan_info_nphy_radio205x const**,struct chan_info_nphy_radio2057_rev5 const**,struct chan_info_nphy_2055 const**) ;

u8 FUNC_3(struct brcms_phy *VAR_7, uint VAR_8)
{
 int VAR_9;
 const struct chan_info_nphy_radio2057 *VAR_10 = ((void*)0);
 const struct chan_info_nphy_radio205x *VAR_11 = ((void*)0);
 const struct chan_info_nphy_radio2057_rev5 *VAR_12 = ((void*)0);
 const struct chan_info_nphy_2055 *VAR_13 = ((void*)0);

 if (VAR_8 == 0)
  VAR_8 = FUNC_0(VAR_7->radio_chanspec);

 FUNC_2(VAR_7, VAR_8, &VAR_9, &VAR_10, &VAR_11, &VAR_12, &VAR_13);

 if (FUNC_1(VAR_7->radio_chanspec))
  return VAR_3;

 if ((VAR_9 >= VAR_1) && (VAR_9 < VAR_2))
  return VAR_5;
 else if ((VAR_9 >= VAR_2) && (VAR_9 < VAR_0))
  return VAR_6;
 else
  return VAR_4;
}
