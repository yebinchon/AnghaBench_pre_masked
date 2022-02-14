
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssb_sprom {int boardflags_lo; } ;
struct b43_phy {int rev; } ;
struct b43_wldev {TYPE_1__* dev; struct b43_phy phy; } ;
struct TYPE_2__ {scalar_t__ board_vendor; scalar_t__ board_type; int board_rev; struct ssb_sprom* bus_sprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct b43_wldev*,int ,int,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_8)
{
 struct ssb_sprom *VAR_9 = VAR_8->dev->bus_sprom;
 struct b43_phy *VAR_10 = &VAR_8->phy;

 if (VAR_8->dev->board_vendor != VAR_6 ||
     VAR_8->dev->board_type != VAR_7 ||
     VAR_8->dev->board_rev != 0x17) {
  if (VAR_10->rev < 2) {
   FUNC_1(VAR_8, VAR_3, 1, 0x0002);
   FUNC_1(VAR_8, VAR_3, 2, 0x0001);
  } else {
   FUNC_1(VAR_8, VAR_2, 1, 0x0002);
   FUNC_1(VAR_8, VAR_2, 2, 0x0001);
   if ((VAR_9->boardflags_lo & VAR_0) &&
       (VAR_10->rev >= 7)) {
    FUNC_2(VAR_8, FUNC_0(0x11), 0xF7FF);
    FUNC_1(VAR_8, VAR_2, 0x0020, 0x0001);
    FUNC_1(VAR_8, VAR_2, 0x0021, 0x0001);
    FUNC_1(VAR_8, VAR_2, 0x0022, 0x0001);
    FUNC_1(VAR_8, VAR_2, 0x0023, 0x0000);
    FUNC_1(VAR_8, VAR_2, 0x0000, 0x0000);
    FUNC_1(VAR_8, VAR_2, 0x0003, 0x0002);
   }
  }
 }
 if (VAR_9->boardflags_lo & VAR_1) {
  FUNC_3(VAR_8, VAR_4, 0x3120);
  FUNC_3(VAR_8, VAR_5, 0xC480);
 }
}
