
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_3__ {int phy_rev; } ;
struct brcms_phy {TYPE_2__* nphy_pwrctrl_info; TYPE_1__ pubpi; } ;
typedef int s32 ;
typedef scalar_t__ int_val ;
struct TYPE_4__ {void* idle_tssi_5g; void* idle_tssi_2g; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_1 (struct brcms_phy*) ;
 scalar_t__ FUNC_2 (struct brcms_phy*) ;
 scalar_t__ FUNC_3 (struct brcms_phy*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct brcms_phy*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct brcms_phy*) ;
 int FUNC_7 (struct brcms_phy*,void*,int*,int) ;
 int FUNC_8 (struct brcms_phy*,int,int ,int,int) ;
 int FUNC_9 (struct brcms_phy*,int,int ,int,int,int ) ;
 int FUNC_10 (struct brcms_phy*,int ,int ) ;
 int FUNC_11 (struct brcms_phy*) ;
 int FUNC_12 (struct brcms_phy*,int,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_13(struct brcms_phy *VAR_5)
{
 s32 VAR_6[4];
 s32 VAR_7;

 if (FUNC_4(VAR_5) || FUNC_3(VAR_5) || FUNC_2(VAR_5))

  return;

 if (FUNC_1(VAR_5))
  FUNC_6(VAR_5);

 if (FUNC_0(VAR_5->pubpi.phy_rev, 7))
  FUNC_9(VAR_5, (0x1 << 12),
        0, 0x3, 0,
        VAR_0);
 else if (FUNC_0(VAR_5->pubpi.phy_rev, 3))
  FUNC_8(VAR_5, (0x1 << 13), 0, 3, 0);

 FUNC_11(VAR_5);

 FUNC_12(VAR_5, 4000, 0, 0, 0, 0);

 FUNC_5(20);
 VAR_7 =
  FUNC_7(VAR_5, (u8) VAR_1, VAR_6,
           1);
 FUNC_11(VAR_5);
 FUNC_10(VAR_5, VAR_4, 0);

 if (FUNC_0(VAR_5->pubpi.phy_rev, 7))
  FUNC_9(VAR_5, (0x1 << 12),
        0, 0x3, 1,
        VAR_0);
 else if (FUNC_0(VAR_5->pubpi.phy_rev, 3))
  FUNC_8(VAR_5, (0x1 << 13), 0, 3, 1);

 if (FUNC_0(VAR_5->pubpi.phy_rev, 3)) {

  VAR_5->nphy_pwrctrl_info[VAR_2].idle_tssi_2g =
   (u8) ((VAR_7 >> 24) & 0xff);
  VAR_5->nphy_pwrctrl_info[VAR_2].idle_tssi_5g =
   (u8) ((VAR_7 >> 24) & 0xff);

  VAR_5->nphy_pwrctrl_info[VAR_3].idle_tssi_2g =
   (u8) ((VAR_7 >> 8) & 0xff);
  VAR_5->nphy_pwrctrl_info[VAR_3].idle_tssi_5g =
   (u8) ((VAR_7 >> 8) & 0xff);
 } else {
  VAR_5->nphy_pwrctrl_info[VAR_2].idle_tssi_2g =
   (u8) ((VAR_7 >> 24) & 0xff);

  VAR_5->nphy_pwrctrl_info[VAR_3].idle_tssi_2g =
   (u8) ((VAR_7 >> 8) & 0xff);

  VAR_5->nphy_pwrctrl_info[VAR_2].idle_tssi_5g =
   (u8) ((VAR_7 >> 16) & 0xff);
  VAR_5->nphy_pwrctrl_info[VAR_3].idle_tssi_5g =
   (u8) ((VAR_7) & 0xff);
 }

}
