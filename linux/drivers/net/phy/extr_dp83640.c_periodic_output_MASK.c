
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {unsigned long sec; scalar_t__ nsec; } ;
struct TYPE_4__ {int sec; int nsec; } ;
struct TYPE_6__ {TYPE_2__ period; TYPE_1__ start; } ;
struct ptp_clock_request {TYPE_3__ perout; } ;
struct phy_device {int dummy; } ;
struct dp83640_private {struct phy_device* phydev; } ;
struct dp83640_clock {int extreg_lock; int ptp_clock; struct dp83640_private* chosen; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,struct phy_device*,int ,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct dp83640_clock *VAR_19,
      struct ptp_clock_request *VAR_20, bool VAR_21,
      int VAR_22)
{
 struct dp83640_private *VAR_23 = VAR_19->chosen;
 struct phy_device *VAR_24 = VAR_23->phydev;
 u32 VAR_25, VAR_26, VAR_27;
 u16 VAR_28, VAR_29, VAR_30;

 if (VAR_21) {
  VAR_28 = 1 + FUNC_3(VAR_19->ptp_clock, VAR_4,
     VAR_22);
  if (VAR_28 < 1)
   return -VAR_0;
 } else {
  VAR_28 = 0;
 }

 VAR_29 = VAR_18 |
  (VAR_22 & VAR_7) << VAR_8 |
  (VAR_28 & VAR_11) << VAR_12 |
  VAR_14 |
  VAR_15;

 VAR_30 = (VAR_22 & VAR_16) << VAR_17;

 if (!VAR_21) {
  VAR_30 |= VAR_9;
  FUNC_1(&VAR_19->extreg_lock);
  FUNC_0(0, VAR_24, VAR_2, VAR_6, VAR_29);
  FUNC_0(0, VAR_24, VAR_1, VAR_3, VAR_30);
  FUNC_2(&VAR_19->extreg_lock);
  return 0;
 }

 VAR_25 = VAR_20->perout.start.sec;
 VAR_26 = VAR_20->perout.start.nsec;
 VAR_27 = VAR_20->perout.period.sec * 1000000000UL;
 VAR_27 += VAR_20->perout.period.nsec;
 VAR_27 /= 2;

 FUNC_1(&VAR_19->extreg_lock);

 FUNC_0(0, VAR_24, VAR_2, VAR_6, VAR_29);


 VAR_30 |= VAR_13;
 FUNC_0(0, VAR_24, VAR_1, VAR_3, VAR_30);
 FUNC_0(0, VAR_24, VAR_1, VAR_5, VAR_26 & 0xffff);
 FUNC_0(0, VAR_24, VAR_1, VAR_5, VAR_26 >> 16);
 FUNC_0(0, VAR_24, VAR_1, VAR_5, VAR_25 & 0xffff);
 FUNC_0(0, VAR_24, VAR_1, VAR_5, VAR_25 >> 16);
 FUNC_0(0, VAR_24, VAR_1, VAR_5, VAR_27 & 0xffff);
 FUNC_0(0, VAR_24, VAR_1, VAR_5, VAR_27 >> 16);

 if (VAR_22 < 2) {
  FUNC_0(0, VAR_24, VAR_1, VAR_5, VAR_27 & 0xffff);
  FUNC_0(0, VAR_24, VAR_1, VAR_5, VAR_27 >> 16);
 }


 VAR_30 &= ~VAR_13;
 VAR_30 |= VAR_10;
 FUNC_0(0, VAR_24, VAR_1, VAR_3, VAR_30);

 FUNC_2(&VAR_19->extreg_lock);
 return 0;
}
