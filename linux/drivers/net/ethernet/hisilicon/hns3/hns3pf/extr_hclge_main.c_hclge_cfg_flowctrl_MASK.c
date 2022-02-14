
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct phy_device {scalar_t__ duplex; scalar_t__ asym_pause; scalar_t__ pause; int advertising; int autoneg; int link; } ;
struct TYPE_3__ {struct phy_device* phydev; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct hclge_dev {TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hclge_dev*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct hclge_dev *VAR_5)
{
 struct phy_device *VAR_6 = VAR_5->hw.mac.phydev;
 u16 VAR_7 = 0;
 u16 VAR_8;
 u32 VAR_9, VAR_10;
 u8 VAR_11;

 if (!VAR_6->link || !VAR_6->autoneg)
  return 0;

 VAR_8 = FUNC_1(VAR_6->advertising);

 if (VAR_6->pause)
  VAR_7 = VAR_4;

 if (VAR_6->asym_pause)
  VAR_7 |= VAR_3;

 VAR_11 = FUNC_2(VAR_8,
        VAR_7);
 VAR_10 = VAR_11 & VAR_1;
 VAR_9 = VAR_11 & VAR_0;

 if (VAR_6->duplex == VAR_2) {
  VAR_10 = 0;
  VAR_9 = 0;
 }

 return FUNC_0(VAR_5, VAR_9, VAR_10);
}
