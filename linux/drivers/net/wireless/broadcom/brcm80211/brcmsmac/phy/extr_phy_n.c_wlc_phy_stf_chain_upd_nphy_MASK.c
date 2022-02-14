
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {scalar_t__ nphy_txrx_chain; int nphy_perical; TYPE_1__ pubpi; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct brcms_phy*,int,int) ;
 int FUNC_2 (struct brcms_phy*,int,int,int) ;
 int FUNC_3 (struct brcms_phy*,int,int) ;

void FUNC_4(struct brcms_phy *VAR_7)
{

 u16 VAR_8 =
  (VAR_2 | VAR_3);
 bool VAR_9 = 0;

 if (VAR_7->nphy_txrx_chain == VAR_0) {
  VAR_8 = VAR_2;
  VAR_9 = 1;

  if (FUNC_0(VAR_7->pubpi.phy_rev, 2))
   FUNC_1(VAR_7, 0xa0, ~0x20);
 } else if (VAR_7->nphy_txrx_chain == VAR_1) {
  VAR_8 = VAR_3;
  VAR_9 = 1;

  if (FUNC_0(VAR_7->pubpi.phy_rev, 2))
   FUNC_3(VAR_7, 0xa0, 0x20);
 }

 FUNC_2(VAR_7, 0xa2, ((0xf << 0) | (0xf << 4)), VAR_8);

 if (VAR_9) {
  VAR_7->nphy_perical = VAR_5;
  FUNC_3(VAR_7, 0xa1, VAR_4);
 } else {
  VAR_7->nphy_perical = VAR_6;
  FUNC_1(VAR_7, 0xa1, ~VAR_4);
 }
}
