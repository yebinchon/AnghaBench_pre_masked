
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_enet_pdata {scalar_t__ enet_id; int port_id; int phy_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;


 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct xgene_enet_pdata*,int) ;
 int FUNC_4 (struct xgene_enet_pdata*,int ) ;
 int FUNC_5 (struct xgene_enet_pdata*,int) ;
 int FUNC_6 (struct xgene_enet_pdata*,int,int) ;
 int FUNC_7 (struct xgene_enet_pdata*,int ,int) ;
 int FUNC_8 (struct xgene_enet_pdata*,int,int) ;
 int FUNC_9 (struct xgene_enet_pdata*) ;

__attribute__((used)) static void FUNC_10(struct xgene_enet_pdata *VAR_17)
{
 u32 VAR_18, VAR_19, VAR_20;
 u32 VAR_21, VAR_22, VAR_23;
 u32 VAR_24, VAR_25;

 FUNC_9(VAR_17);

 if (VAR_17->enet_id == VAR_13) {
  VAR_18 = VAR_6 + VAR_17->port_id * VAR_11;
  VAR_19 = VAR_7 + VAR_17->port_id * VAR_10;
  VAR_20 = VAR_2;
 } else {
  VAR_18 = VAR_15;
  VAR_19 = VAR_16;
  VAR_20 = VAR_14;
 }

 VAR_21 = FUNC_5(VAR_17, VAR_18);
 VAR_22 = FUNC_5(VAR_17, VAR_19);
 VAR_24 = FUNC_4(VAR_17, VAR_9);
 VAR_23 = FUNC_4(VAR_17, VAR_8);

 switch (VAR_17->phy_speed) {
 case 129:
  FUNC_2(&VAR_24, 1);
  VAR_23 &= ~(VAR_4 | VAR_3);
  FUNC_0(&VAR_21, 0);
  FUNC_1(&VAR_22, 500);
  break;
 case 128:
  FUNC_2(&VAR_24, 1);
  VAR_23 &= ~VAR_3;
  VAR_23 |= VAR_4;
  FUNC_0(&VAR_21, 1);
  FUNC_1(&VAR_22, 80);
  break;
 default:
  FUNC_2(&VAR_24, 2);
  VAR_23 &= ~VAR_4;
  VAR_23 |= VAR_3;
  FUNC_0(&VAR_21, 2);
  FUNC_1(&VAR_22, 16);
  VAR_25 = FUNC_3(VAR_17, VAR_20);
  VAR_25 |= VAR_1 | VAR_0;
  FUNC_6(VAR_17, VAR_20, VAR_25);
  break;
 }

 VAR_24 |= VAR_5 | VAR_12;
 FUNC_7(VAR_17, VAR_9, VAR_24);
 FUNC_7(VAR_17, VAR_8, VAR_23);
 FUNC_8(VAR_17, VAR_18, VAR_21);
 FUNC_8(VAR_17, VAR_19, VAR_22);
}
