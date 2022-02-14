
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct b43_wldev {TYPE_1__* dev; struct b43_wl* wl; } ;
struct b43_wl {int filter_flags; } ;
struct TYPE_2__ {int core_rev; int chip_id; int chip_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (struct b43_wl*,int ) ;
 int FUNC_1 (struct b43_wldev*,int ,int ,int ) ;
 int FUNC_2 (struct b43_wldev*,int ) ;
 int FUNC_3 (struct b43_wldev*,int,int) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct b43_wldev *VAR_16)
{
 struct b43_wl *VAR_17 = VAR_16->wl;
 u32 VAR_18;
 u16 VAR_19;

 VAR_18 = FUNC_2(VAR_16, VAR_8);

 VAR_18 &= ~VAR_0;
 VAR_18 &= ~VAR_6;
 VAR_18 &= ~VAR_5;
 VAR_18 &= ~VAR_4;
 VAR_18 &= ~VAR_7;
 VAR_18 &= ~VAR_1;
 VAR_18 |= VAR_3;

 if (FUNC_0(VAR_17, VAR_14) ||
     FUNC_0(VAR_17, VAR_15))
  VAR_18 |= VAR_0;
 else if (FUNC_0(VAR_17, VAR_13))
  VAR_18 &= ~VAR_3;

 if (VAR_17->filter_flags & VAR_10)
  VAR_18 |= VAR_6;
 if (VAR_17->filter_flags & VAR_11)
  VAR_18 |= VAR_4;
 if (VAR_17->filter_flags & VAR_12)
  VAR_18 |= VAR_5;
 if (VAR_17->filter_flags & VAR_9)
  VAR_18 |= VAR_1;




 if (VAR_16->dev->core_rev <= 4)
  VAR_18 |= VAR_7;

 FUNC_4(VAR_16, VAR_8, VAR_18);

 VAR_19 = 2;
 if ((VAR_18 & VAR_3) && !(VAR_18 & VAR_0)) {
  if (VAR_16->dev->chip_id == 0x4306 &&
      VAR_16->dev->chip_rev == 3)
   VAR_19 = 100;
  else
   VAR_19 = 50;
 }
 FUNC_3(VAR_16, 0x612, VAR_19);





 if (0 )
  FUNC_1(VAR_16, VAR_8, ~VAR_2, 0);
 else
  FUNC_1(VAR_16, VAR_8, ~0, VAR_2);
}
