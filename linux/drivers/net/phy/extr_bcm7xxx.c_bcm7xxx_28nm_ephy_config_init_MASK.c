
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct phy_device {int phy_id; TYPE_1__* drv; } ;
struct TYPE_2__ {int phy_id_mask; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*,int ) ;
 int FUNC_4 (struct phy_device*) ;
 int FUNC_5 (char*,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct phy_device *VAR_1)
{
 u8 VAR_2 = VAR_1->phy_id & ~VAR_1->drv->phy_id_mask;
 int VAR_3 = 0;

 FUNC_5("%s: %s PHY revision: 0x%02x\n",
       FUNC_4(VAR_1), VAR_1->drv->name, VAR_2);






 FUNC_3(VAR_1, VAR_0);


 if (VAR_2 == 0x01) {
  VAR_3 = FUNC_0(VAR_1);
  if (VAR_3)
   return VAR_3;
 }

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_1);
}
