
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct phy_device {scalar_t__ speed; scalar_t__ duplex; } ;
struct netsec_priv {scalar_t__ phy_interface; TYPE_1__* ndev; } ;
struct TYPE_2__ {struct phy_device* phydev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (struct netsec_priv*,int ,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct netsec_priv *VAR_12)
{
 struct phy_device *VAR_13 = VAR_12->ndev->phydev;
 u32 VAR_14 = 0;

 VAR_14 = VAR_13->duplex ? VAR_4 :
     VAR_5;

 if (VAR_13->speed != VAR_11)
  VAR_14 |= VAR_8;

 if (VAR_12->phy_interface != VAR_9 &&
     VAR_13->speed == VAR_10)
  VAR_14 |= VAR_3;

 VAR_14 |= VAR_2 | VAR_7;

 if (FUNC_1(VAR_12->phy_interface))
  VAR_14 |= VAR_6;

 if (FUNC_0(VAR_12, VAR_1, VAR_14))
  return -VAR_0;

 return 0;
}
