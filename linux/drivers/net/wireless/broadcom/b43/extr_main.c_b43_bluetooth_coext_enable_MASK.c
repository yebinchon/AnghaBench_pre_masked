
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct ssb_sprom {int boardflags_lo; } ;
struct TYPE_4__ {scalar_t__ type; int gmode; } ;
struct b43_wldev {TYPE_2__ phy; TYPE_1__* dev; } ;
struct TYPE_3__ {struct ssb_sprom* bus_sprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_6)
{
 struct ssb_sprom *VAR_7 = VAR_6->dev->bus_sprom;
 u64 VAR_8;

 if (!VAR_5)
  return;
 if (!(VAR_7->boardflags_lo & VAR_1))
  return;
 if (VAR_6->phy.type != VAR_4 && !VAR_6->phy.gmode)
  return;

 VAR_8 = FUNC_0(VAR_6);
 if (VAR_7->boardflags_lo & VAR_0)
  VAR_8 |= VAR_3;
 else
  VAR_8 |= VAR_2;
 FUNC_1(VAR_6, VAR_8);
}
