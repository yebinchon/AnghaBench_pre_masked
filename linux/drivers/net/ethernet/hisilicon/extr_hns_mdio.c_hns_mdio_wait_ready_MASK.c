
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mii_bus {struct hns_mdio_device* priv; } ;
struct hns_mdio_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct hns_mdio_device*,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct mii_bus *VAR_4)
{
 struct hns_mdio_device *VAR_5 = VAR_4->priv;
 u32 VAR_6;
 int VAR_7;



 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6 = FUNC_0(VAR_5,
       VAR_2,
       VAR_1);
  if (!VAR_6)
   break;
 }
 if ((VAR_7 == VAR_3) && VAR_6)
  return -VAR_0;

 return 0;
}
