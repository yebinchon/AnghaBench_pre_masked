
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct brcms_phy {scalar_t__ nphy_txiqlocal_chanspec; scalar_t__ radio_chanspec; scalar_t__* nphy_txiqlocal_bestc; scalar_t__ nphy_txiqlocal_coeffsvalid; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (struct brcms_phy*,int ,int ,int,int,scalar_t__*) ;
 int FUNC_2 (struct brcms_phy*,int ,int,int,int,scalar_t__*) ;

__attribute__((used)) static void FUNC_3(struct brcms_phy *VAR_1)
{
 u16 VAR_2[7];

 if ((VAR_1->nphy_txiqlocal_chanspec == VAR_1->radio_chanspec) &&
     (VAR_1->nphy_txiqlocal_coeffsvalid)) {
  FUNC_1(VAR_1, VAR_0,
     FUNC_0(VAR_2), 80, 16, VAR_2);

  if ((VAR_1->nphy_txiqlocal_bestc[0] != VAR_2[0]) ||
      (VAR_1->nphy_txiqlocal_bestc[1] != VAR_2[1]) ||
      (VAR_1->nphy_txiqlocal_bestc[2] != VAR_2[2]) ||
      (VAR_1->nphy_txiqlocal_bestc[3] != VAR_2[3])) {

   FUNC_2(VAR_1, VAR_0, 4, 80,
       16, VAR_1->nphy_txiqlocal_bestc);

   VAR_2[0] = 0;
   VAR_2[1] = 0;
   VAR_2[2] = 0;
   VAR_2[3] = 0;
   FUNC_2(VAR_1, VAR_0, 4, 88,
       16, VAR_2);

   FUNC_2(VAR_1, VAR_0, 2, 85,
       16,
       &VAR_1->nphy_txiqlocal_bestc[5]);

   FUNC_2(VAR_1, VAR_0, 2, 93,
       16,
       &VAR_1->nphy_txiqlocal_bestc[5]);
  }
 }
}
