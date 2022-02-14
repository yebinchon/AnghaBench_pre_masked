
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int id; } ;
struct pch_gbe_hw {TYPE_1__ phy; } ;
struct pch_gbe_adapter {int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 struct pch_gbe_adapter* FUNC_2 (struct pch_gbe_hw*) ;
 int FUNC_3 (struct pch_gbe_hw*,int ,int *) ;
 int FUNC_4 (struct pch_gbe_hw*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct pch_gbe_hw *VAR_5)
{




 struct pch_gbe_adapter *VAR_6 = FUNC_2(VAR_5);
 u16 VAR_7;
 int VAR_8 = 0;

 switch (VAR_5->phy.id) {
 case 128:
  FUNC_0(VAR_6->netdev,
      "Configuring AR803X PHY for 2ns TX clock delay\n");
  FUNC_3(VAR_5, VAR_2, &VAR_7);
  VAR_8 = FUNC_4(VAR_5, VAR_2,
       VAR_3);
  if (VAR_8)
   break;

  FUNC_3(VAR_5, VAR_1, &VAR_7);
  VAR_7 |= VAR_4;
  VAR_8 = FUNC_4(VAR_5, VAR_1,
       VAR_7);
  break;
 default:
  FUNC_1(VAR_6->netdev,
      "Unknown PHY (%x), could not set TX clock delay\n",
      VAR_5->phy.id);
  return -VAR_0;
 }

 if (VAR_8)
  FUNC_1(VAR_6->netdev,
      "Could not configure tx clock delay for PHY\n");
 return VAR_8;
}
