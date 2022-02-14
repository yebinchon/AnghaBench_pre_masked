
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct phy_device {int phy_id; TYPE_1__* drv; int dev_flags; } ;
struct TYPE_2__ {int phy_id_mask; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*) ;
 int FUNC_4 (struct phy_device*) ;
 int FUNC_5 (struct phy_device*) ;
 int FUNC_6 (struct phy_device*,int*) ;
 int FUNC_7 (struct phy_device*,int) ;
 int FUNC_8 (struct phy_device*,int) ;
 int FUNC_9 (struct phy_device*,int ) ;
 int FUNC_10 (struct phy_device*) ;
 int FUNC_11 (char*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_12(struct phy_device *VAR_2)
{
 u8 VAR_3 = FUNC_1(VAR_2->dev_flags);
 u8 VAR_4 = FUNC_0(VAR_2->dev_flags);
 u8 VAR_5;
 int VAR_6 = 0;




 if (VAR_3 == 0)
  VAR_3 = VAR_2->phy_id & ~VAR_2->drv->phy_id_mask;

 FUNC_11("%s: %s PHY revision: 0x%02x, patch: %d\n",
       FUNC_10(VAR_2), VAR_2->drv->name, VAR_3, VAR_4);






 FUNC_9(VAR_2, VAR_1);

 switch (VAR_3) {
 case 0xa0:
 case 0xb0:
  VAR_6 = FUNC_5(VAR_2);
  break;
 case 0xd0:
  VAR_6 = FUNC_3(VAR_2);
  break;
 case 0xe0:
 case 0xf0:

 case 0x10:
  VAR_6 = FUNC_4(VAR_2);
  break;
 case 0x01:
  VAR_6 = FUNC_2(VAR_2);
  break;
 default:
  break;
 }

 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_6(VAR_2, &VAR_5);
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_8(VAR_2, VAR_5 == VAR_0);
 if (VAR_6)
  return VAR_6;

 return FUNC_7(VAR_2, 1);
}
