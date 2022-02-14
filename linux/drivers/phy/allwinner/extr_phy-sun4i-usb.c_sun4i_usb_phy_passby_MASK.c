
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sun4i_usb_phy_data {TYPE_1__* cfg; } ;
struct sun4i_usb_phy {int index; int pmu; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 struct sun4i_usb_phy_data* FUNC_1 (struct sun4i_usb_phy*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct sun4i_usb_phy *VAR_8, int VAR_9)
{
 struct sun4i_usb_phy_data *VAR_10 = FUNC_1(VAR_8);
 u32 VAR_11, VAR_12;

 if (!VAR_8->pmu)
  return;

 VAR_11 = VAR_0 | VAR_1 |
  VAR_2 | VAR_6;


 if (VAR_10->cfg->type == VAR_7 && VAR_8->index == 2)
  VAR_11 |= VAR_3 | VAR_5 |
   VAR_4;

 VAR_12 = FUNC_0(VAR_8->pmu);

 if (VAR_9)
  VAR_12 |= VAR_11;
 else
  VAR_12 &= ~VAR_11;

 FUNC_2(VAR_12, VAR_8->pmu);
}
