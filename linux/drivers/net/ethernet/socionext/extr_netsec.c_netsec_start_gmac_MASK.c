
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct phy_device {scalar_t__ speed; } ;
struct netsec_priv {int et_coalesce; TYPE_1__* ndev; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (struct netsec_priv*,int ,int*) ;
 int FUNC_2 (struct netsec_priv*) ;
 scalar_t__ FUNC_3 (struct netsec_priv*,int ,int) ;
 scalar_t__ FUNC_4 (struct netsec_priv*,int ,int) ;
 int FUNC_5 (struct netsec_priv*,int ,int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct netsec_priv *VAR_22)
{
 struct phy_device *VAR_23 = VAR_22->ndev->phydev;
 u32 VAR_24 = 0;
 int VAR_25;

 if (VAR_23->speed != VAR_21)
  VAR_24 = (VAR_13 |
    VAR_14);

 if (FUNC_3(VAR_22, VAR_3, VAR_24))
  return -VAR_1;
 if (FUNC_3(VAR_22, VAR_2,
        VAR_11))
  return -VAR_1;


 FUNC_6(1000, 5000);

 VAR_25 = FUNC_1(VAR_22, VAR_2, &VAR_24);
 if (VAR_25)
  return VAR_25;
 if (VAR_24 & VAR_12)
  return -VAR_0;

 FUNC_5(VAR_22, VAR_9, 1);
 if (FUNC_4(VAR_22, VAR_9, 1))
  return -VAR_1;

 FUNC_5(VAR_22, VAR_8, 1);
 if (FUNC_4(VAR_22, VAR_8, 1))
  return -VAR_1;

 if (FUNC_3(VAR_22, VAR_2,
        VAR_10))
  return -VAR_1;
 if (FUNC_3(VAR_22, VAR_6,
        VAR_17))
  return -VAR_1;
 if (FUNC_3(VAR_22, VAR_7,
        VAR_18))
  return -VAR_1;
 if (FUNC_3(VAR_22, VAR_4, 0x80000001))
  return -VAR_1;

 VAR_25 = FUNC_2(VAR_22);
 if (VAR_25)
  return VAR_25;

 VAR_25 = FUNC_1(VAR_22, VAR_5, &VAR_24);
 if (VAR_25)
  return VAR_25;

 VAR_24 |= VAR_15;
 VAR_24 |= VAR_16;

 FUNC_5(VAR_22, VAR_19, ~0);
 FUNC_5(VAR_22, VAR_20, ~0);

 FUNC_0(VAR_22->ndev, &VAR_22->et_coalesce);

 if (FUNC_3(VAR_22, VAR_5, VAR_24))
  return -VAR_1;

 return 0;
}
