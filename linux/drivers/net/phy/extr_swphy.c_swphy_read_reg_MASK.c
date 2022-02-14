
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct fixed_phy_status {scalar_t__ asym_pause; scalar_t__ pause; scalar_t__ link; scalar_t__ duplex; int speed; } ;
struct TYPE_4__ {int bmsr; int estat; int lpa; int lpagb; } ;
struct TYPE_3__ {int bmsr; int estat; int lpa; int lpagb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_2__* VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_1 (int ) ;

int FUNC_2(int VAR_11, const struct fixed_phy_status *VAR_12)
{
 int VAR_13, VAR_14;
 u16 VAR_15 = VAR_1;
 u16 VAR_16 = 0;
 u16 VAR_17 = 0;
 u16 VAR_18 = 0;

 if (VAR_11 > VAR_6)
  return -1;

 VAR_13 = FUNC_1(VAR_12->speed);
 if (FUNC_0(VAR_13 < 0))
  return 0;

 VAR_14 = VAR_12->duplex ? VAR_7 : VAR_8;

 VAR_15 |= VAR_10[VAR_13].bmsr & VAR_9[VAR_14].bmsr;
 VAR_16 |= VAR_10[VAR_13].estat & VAR_9[VAR_14].estat;

 if (VAR_12->link) {
  VAR_15 |= VAR_3 | VAR_2;

  VAR_18 |= VAR_10[VAR_13].lpa & VAR_9[VAR_14].lpa;
  VAR_17 |= VAR_10[VAR_13].lpagb & VAR_9[VAR_14].lpagb;

  if (VAR_12->pause)
   VAR_18 |= VAR_5;

  if (VAR_12->asym_pause)
   VAR_18 |= VAR_4;
 }

 switch (VAR_11) {
 case 136:
  return VAR_0;
 case 135:
  return VAR_15;
 case 130:
 case 129:
  return 0;
 case 133:
  return VAR_18;
 case 128:
  return VAR_17;
 case 134:
  return VAR_16;





 case 132:
 case 131:
  return -1;

 default:
  return 0xffff;
 }
}
