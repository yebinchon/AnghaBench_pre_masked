
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emac_sgmii {scalar_t__ base; } ;
struct emac_adapter {int netdev; struct emac_sgmii phy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,scalar_t__) ;

int FUNC_6(struct emac_adapter *VAR_12)
{
 struct emac_sgmii *VAR_13 = &VAR_12->phy;
 unsigned int VAR_14;

 FUNC_1(VAR_13->base, VAR_8,
      FUNC_0(VAR_8));
 FUNC_1(VAR_13->base, VAR_10,
      FUNC_0(VAR_10));
 FUNC_1(VAR_13->base, VAR_9, FUNC_0(VAR_9));
 FUNC_1(VAR_13->base, VAR_7, FUNC_0(VAR_7));
 FUNC_1(VAR_13->base, VAR_11, FUNC_0(VAR_11));


 FUNC_5(VAR_5, VAR_13->base + VAR_3);

 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
  if (FUNC_3(VAR_13->base + VAR_1) & VAR_4)
   break;
  FUNC_4(100, 200);
 }

 if (VAR_14 == VAR_6) {
  FUNC_2(VAR_12->netdev, "error: ser/des failed to start\n");
  return -VAR_0;
 }

 FUNC_5(0, VAR_13->base + VAR_2);

 return 0;
}
