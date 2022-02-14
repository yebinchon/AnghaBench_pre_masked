
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_7__ {TYPE_4__* chandef; struct b43_phy_n* n; } ;
struct b43_wldev {TYPE_3__ phy; } ;
struct TYPE_6__ {scalar_t__ center_freq; scalar_t__ channel_type; } ;
struct b43_phy_n {scalar_t__* txiqlocal_bestc; TYPE_2__ txiqlocal_chanspec; int txiqlocal_coeffsvalid; } ;
struct TYPE_8__ {TYPE_1__* chan; } ;
struct TYPE_5__ {scalar_t__ center_freq; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct b43_wldev*,int ,int,scalar_t__*) ;
 int FUNC_2 (struct b43_wldev*,int ,int,scalar_t__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_0)
{
 struct b43_phy_n *VAR_1 = VAR_0->phy.n;
 u8 VAR_2;
 u16 VAR_3[7];
 bool VAR_4 = 1;

 if (!VAR_1->txiqlocal_coeffsvalid ||
     VAR_1->txiqlocal_chanspec.center_freq != VAR_0->phy.chandef->chan->center_freq ||
     VAR_1->txiqlocal_chanspec.channel_type != FUNC_3(VAR_0->phy.chandef))
  return;

 FUNC_1(VAR_0, FUNC_0(15, 80), 7, VAR_3);
 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  if (VAR_3[VAR_2] != VAR_1->txiqlocal_bestc[VAR_2]) {
   VAR_4 = 0;
   break;
  }
 }

 if (!VAR_4) {
  FUNC_2(VAR_0, FUNC_0(15, 80), 4,
     VAR_1->txiqlocal_bestc);
  for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
   VAR_3[VAR_2] = 0;
  FUNC_2(VAR_0, FUNC_0(15, 88), 4,
     VAR_3);
  FUNC_2(VAR_0, FUNC_0(15, 85), 2,
     &VAR_1->txiqlocal_bestc[5]);
  FUNC_2(VAR_0, FUNC_0(15, 93), 2,
     &VAR_1->txiqlocal_bestc[5]);
 }
}
