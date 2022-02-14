
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct nphy_sfo_cfg {int dummy; } ;
struct chan_info_nphy_radio205x {int PHY_BW1a; } ;
struct chan_info_nphy_radio2057_rev5 {int PHY_BW1a; } ;
struct chan_info_nphy_radio2057 {int PHY_BW1a; } ;
struct chan_info_nphy_2055 {int PHY_BW1a; } ;
struct brcms_phy_pub {int dummy; } ;
struct TYPE_4__ {int radiorev; int phy_rev; } ;
struct brcms_phy {scalar_t__ bw; TYPE_2__ pubpi; TYPE_1__* sh; } ;
struct TYPE_3__ {int physhim; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct brcms_phy*,int,int) ;
 int FUNC_7 (struct brcms_phy*,int,int,int) ;
 int FUNC_8 (struct brcms_phy*,int,int) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (struct brcms_phy*,int ,int*,struct chan_info_nphy_radio2057 const**,struct chan_info_nphy_radio205x const**,struct chan_info_nphy_radio2057_rev5 const**,struct chan_info_nphy_2055 const**) ;
 int FUNC_11 (struct brcms_phy*,int ,struct nphy_sfo_cfg const*) ;
 int FUNC_12 (struct brcms_phy*,struct chan_info_nphy_2055 const*) ;
 int FUNC_13 (struct brcms_phy*,struct chan_info_nphy_radio205x const*) ;
 int FUNC_14 (struct brcms_phy*,struct chan_info_nphy_radio2057 const*,struct chan_info_nphy_radio2057_rev5 const*) ;
 int FUNC_15 (struct brcms_phy_pub*,int ) ;

void FUNC_16(struct brcms_phy *VAR_7, u16 VAR_8)
{
 int VAR_9;
 const struct chan_info_nphy_radio2057 *VAR_10 = ((void*)0);
 const struct chan_info_nphy_radio205x *VAR_11 = ((void*)0);
 const struct chan_info_nphy_radio2057_rev5 *VAR_12 = ((void*)0);
 const struct chan_info_nphy_2055 *VAR_13 = ((void*)0);

 if (!FUNC_10
      (VAR_7, FUNC_1(VAR_8), &VAR_9, &VAR_10, &VAR_11, &VAR_12, &VAR_13))
  return;

 FUNC_15((struct brcms_phy_pub *) VAR_7, VAR_8);

 if (FUNC_0(VAR_8) != VAR_7->bw)
  FUNC_9(VAR_7->sh->physhim, FUNC_0(VAR_8));

 if (FUNC_2(VAR_8)) {
  if (FUNC_4(VAR_8)) {
   FUNC_8(VAR_7, 0xa0, VAR_0);
   if (FUNC_5(VAR_7->pubpi.phy_rev, 7))
    FUNC_8(VAR_7, 0x310, VAR_1);
  } else {
   FUNC_6(VAR_7, 0xa0, ~VAR_0);
   if (FUNC_5(VAR_7->pubpi.phy_rev, 7))
    FUNC_6(VAR_7, 0x310,
         (~VAR_1 & 0xffff));
  }
 }

 if (FUNC_5(VAR_7->pubpi.phy_rev, 3)) {
  if (FUNC_5(VAR_7->pubpi.phy_rev, 7)) {

   if ((VAR_7->pubpi.radiorev <= 4)
       || (VAR_7->pubpi.radiorev == 6)) {
    FUNC_7(VAR_7, VAR_5,
           0x2,
           (FUNC_3(VAR_8) ? (1 << 1)
            : 0));
    FUNC_7(VAR_7, VAR_6,
           0x2,
           (FUNC_3(VAR_8) ? (1 << 1)
            : 0));
   }

   FUNC_14(VAR_7, VAR_10, VAR_12);
   FUNC_11(VAR_7, VAR_8,
    (VAR_7->pubpi.radiorev == 5) ?
    (const struct nphy_sfo_cfg *)&(VAR_12->PHY_BW1a) :
    (const struct nphy_sfo_cfg *)&(VAR_10->PHY_BW1a));

  } else {

   FUNC_7(VAR_7,
          VAR_4 | VAR_3,
          0x4,
          (FUNC_3(VAR_8) ? (0x1 << 2) : 0));
   FUNC_13(VAR_7, VAR_11);

   FUNC_11(VAR_7, VAR_8,
    (const struct nphy_sfo_cfg *) &(VAR_11->PHY_BW1a));
  }

 } else {

  FUNC_7(VAR_7, VAR_2, 0x70,
         (FUNC_3(VAR_8) ? (0x02 << 4)
          : (0x05 << 4)));

  FUNC_12(VAR_7, VAR_13);
  FUNC_11(VAR_7, VAR_8,
         (const struct nphy_sfo_cfg *)
          &(VAR_13->PHY_BW1a));
 }

}
