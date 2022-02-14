
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct nb8800_priv {int phy_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct nb8800_priv*,int ,int ) ;
 struct nb8800_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4)
{
 struct nb8800_priv *VAR_5 = FUNC_2(VAR_4);
 u32 VAR_6 = VAR_2;

 switch (VAR_5->phy_mode) {
 case 132:
 case 133:
  VAR_6 = VAR_2;
  break;

 case 131:
 case 130:
 case 129:
 case 128:
  VAR_6 = VAR_3;
  break;

 default:
  FUNC_0(VAR_4->dev.parent, "unsupported phy mode %s\n",
   FUNC_3(VAR_5->phy_mode));
  return -VAR_0;
 }

 FUNC_1(VAR_5, VAR_1, VAR_6);

 return 0;
}
