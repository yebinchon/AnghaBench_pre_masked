
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct phy_device {TYPE_1__* drv; } ;
struct TYPE_2__ {int phy_id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_4)
{
 u32 VAR_5 = 0;
 int VAR_6 = 0, VAR_7 = 0;


 VAR_6 = FUNC_0(VAR_4, VAR_2);
 if (VAR_6 < 0)
  return -VAR_1;

 VAR_5 = VAR_6 << 16;

 VAR_7 = FUNC_0(VAR_4, VAR_3);
 if (VAR_7 < 0)
  return -VAR_1;

 VAR_5 |= VAR_7;




 if (VAR_5 != VAR_4->drv->phy_id) {
  FUNC_1(VAR_4, "Error matching phy with %s driver\n",
      VAR_4->drv->name);
  return -VAR_0;
 }

 return 0;
}
