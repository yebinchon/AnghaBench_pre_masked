
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int phy_id; } ;
struct usbnet {TYPE_1__ mii; int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static u32 FUNC_2(struct usbnet *VAR_2)
{
 int VAR_3;
 u32 VAR_4;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < 100; VAR_5++) {
  VAR_3 = FUNC_1(VAR_2->net, VAR_2->mii.phy_id, VAR_0);
  if (VAR_3 != 0 && VAR_3 != 0xFFFF)
   break;
  FUNC_0(1);
 }

 if (VAR_3 <= 0 || VAR_3 == 0xFFFF)
  return 0;

 VAR_4 = (VAR_3 & 0xffff) << 16;

 VAR_3 = FUNC_1(VAR_2->net, VAR_2->mii.phy_id, VAR_1);
 if (VAR_3 < 0)
  return 0;

 VAR_4 |= (VAR_3 & 0xffff);

 return VAR_4;
}
