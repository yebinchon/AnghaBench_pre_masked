
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_2__ {size_t phy_corenum; int phy_rev; } ;
struct brcms_phy {size_t nphy_noise_index; scalar_t__** nphy_noise_win; TYPE_1__ pubpi; } ;
typedef scalar_t__ s8 ;
typedef int cmplx_pwr_dbm ;


 size_t FUNC_0 (size_t,int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (size_t*,int ,int) ;
 int FUNC_3 (int *,scalar_t__*,size_t) ;

__attribute__((used)) static bool
FUNC_4(struct brcms_phy *VAR_3, u32 *VAR_4, s8 *VAR_5)
{
 s8 VAR_6[VAR_0];
 u8 VAR_7;

 FUNC_2((u8 *) VAR_6, 0, sizeof(VAR_6));
 FUNC_3(VAR_4, VAR_6, VAR_3->pubpi.phy_corenum);

 for (VAR_7 = 0; VAR_7 < VAR_3->pubpi.phy_corenum; VAR_7++) {
  if (FUNC_1(VAR_3->pubpi.phy_rev, 3))
   VAR_6[VAR_7] += (s8) VAR_1;
  else

   VAR_6[VAR_7] += (s8) (16 - (15) * 3 - 70);
 }

 for (VAR_7 = 0; VAR_7 < VAR_3->pubpi.phy_corenum; VAR_7++) {
  VAR_3->nphy_noise_win[VAR_7][VAR_3->nphy_noise_index] = VAR_6[VAR_7];
  VAR_5[VAR_7] = VAR_6[VAR_7];
 }
 VAR_3->nphy_noise_index =
  FUNC_0(VAR_3->nphy_noise_index, VAR_2);
 return 1;
}
