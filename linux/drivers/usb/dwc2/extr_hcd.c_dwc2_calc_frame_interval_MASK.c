
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ fs_phy_type; } ;
struct dwc2_hsotg {TYPE_1__ hw_params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct dwc2_hsotg*,int ) ;

u32 FUNC_1(struct dwc2_hsotg *VAR_12)
{
 u32 VAR_13;
 u32 VAR_14;
 int VAR_15 = 60;

 VAR_13 = FUNC_0(VAR_12, VAR_3);
 VAR_14 = FUNC_0(VAR_12, VAR_8);

 if (!(VAR_13 & VAR_5) && (VAR_13 & VAR_7) &&
     !(VAR_13 & VAR_4))
  VAR_15 = 60;
 if ((VAR_13 & VAR_5) && VAR_12->hw_params.fs_phy_type ==
     VAR_1)
  VAR_15 = 48;
 if (!(VAR_13 & VAR_6) && !(VAR_13 & VAR_5) &&
     !(VAR_13 & VAR_7) && (VAR_13 & VAR_4))
  VAR_15 = 30;
 if (!(VAR_13 & VAR_6) && !(VAR_13 & VAR_5) &&
     !(VAR_13 & VAR_7) && !(VAR_13 & VAR_4))
  VAR_15 = 60;
 if ((VAR_13 & VAR_6) && !(VAR_13 & VAR_5) &&
     !(VAR_13 & VAR_7) && (VAR_13 & VAR_4))
  VAR_15 = 48;
 if ((VAR_13 & VAR_5) && !(VAR_13 & VAR_4) &&
     VAR_12->hw_params.fs_phy_type == VAR_2)
  VAR_15 = 48;
 if ((VAR_13 & VAR_5) &&
     VAR_12->hw_params.fs_phy_type == VAR_0)
  VAR_15 = 48;

 if ((VAR_14 & VAR_10) >> VAR_11 == VAR_9)

  return 125 * VAR_15 - 1;


 return 1000 * VAR_15 - 1;
}
