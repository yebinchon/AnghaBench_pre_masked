
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int phy_id; } ;
struct ioc3_private {TYPE_1__ mii; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct ioc3_private *VAR_2)
{
 int VAR_3 = 1;
 int VAR_4, VAR_5 = 0, VAR_6 = 0;
 u16 VAR_7;

 for (VAR_4 = 0; VAR_4 < 32; VAR_4++) {
  VAR_7 = FUNC_0(VAR_2->dev, VAR_4, VAR_1);

  if (VAR_7 != 0xffff && VAR_7 != 0x0000) {
   VAR_5 = 1;
   break;
  }
 }

 if (!VAR_5) {
  if (VAR_3) {
   VAR_4 = 31;
  } else {
   VAR_2->mii.phy_id = -1;
   VAR_6 = -VAR_0;
   goto out;
  }
 }

 VAR_2->mii.phy_id = VAR_4;

out:
 return VAR_6;
}
