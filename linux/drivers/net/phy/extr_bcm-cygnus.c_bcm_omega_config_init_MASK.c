
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct phy_device {int phy_id; TYPE_1__* drv; } ;
struct TYPE_2__ {int phy_id_mask; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*,int*) ;
 int FUNC_2 (struct phy_device*,int) ;
 int FUNC_3 (struct phy_device*,int) ;
 int FUNC_4 (struct phy_device*,int ) ;
 int FUNC_5 (struct phy_device*) ;
 int FUNC_6 (char*,int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct phy_device *VAR_2)
{
 u8 VAR_3, VAR_4;
 int VAR_5 = 0;

 VAR_4 = VAR_2->phy_id & ~VAR_2->drv->phy_id_mask;

 FUNC_6("%s: %s PHY revision: 0x%02x\n",
       FUNC_5(VAR_2), VAR_2->drv->name, VAR_4);






 FUNC_4(VAR_2, VAR_1);

 switch (VAR_4) {
 case 0x00:
  VAR_5 = FUNC_0(VAR_2);
  break;
 default:
  break;
 }

 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_2, &VAR_3);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_3(VAR_2, VAR_3 == VAR_0);
 if (VAR_5)
  return VAR_5;

 return FUNC_2(VAR_2, 1);
}
