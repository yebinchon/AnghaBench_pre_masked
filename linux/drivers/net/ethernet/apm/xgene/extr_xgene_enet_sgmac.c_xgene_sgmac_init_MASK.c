
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_enet_pdata {scalar_t__ enet_id; int port_id; int rx_pause; int tx_pause; scalar_t__ mdio_driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*,int) ;
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
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (struct xgene_enet_pdata*,int) ;
 int FUNC_2 (struct xgene_enet_pdata*,int ) ;
 int FUNC_3 (struct xgene_enet_pdata*,int) ;
 int FUNC_4 (struct xgene_enet_pdata*,int,int) ;
 int FUNC_5 (struct xgene_enet_pdata*,int ,int) ;
 int FUNC_6 (struct xgene_enet_pdata*,int,int) ;
 int FUNC_7 (struct xgene_enet_pdata*,int ) ;
 int FUNC_8 (struct xgene_enet_pdata*,int ) ;
 int FUNC_9 (struct xgene_enet_pdata*) ;
 int FUNC_10 (struct xgene_enet_pdata*) ;
 int FUNC_11 (struct xgene_enet_pdata*) ;
 int FUNC_12 (struct xgene_enet_pdata*) ;

__attribute__((used)) static void FUNC_13(struct xgene_enet_pdata *VAR_27)
{
 u32 VAR_28, VAR_29;
 u32 VAR_30, VAR_31;
 u32 VAR_32, VAR_33;
 u32 VAR_34, VAR_35, VAR_36, VAR_37;
 u32 VAR_38;

 if (!(VAR_27->enet_id == VAR_18 && VAR_27->mdio_driver))
  FUNC_9(VAR_27);

 FUNC_12(VAR_27);
 FUNC_11(VAR_27);
 FUNC_10(VAR_27);

 if (VAR_27->enet_id == VAR_17) {
  VAR_30 = VAR_6;
  VAR_31 = VAR_13;
  VAR_32 = VAR_0;
  VAR_37 = VAR_27->port_id * VAR_10;
  VAR_33 = VAR_16 + VAR_37;
 } else {
  VAR_30 = VAR_21;
  VAR_31 = VAR_25;
  VAR_32 = VAR_19;
  VAR_33 = VAR_24;
 }

 VAR_34 = FUNC_1(VAR_27, VAR_30);
 VAR_34 |= VAR_8;
 FUNC_4(VAR_27, VAR_30, VAR_34);


 VAR_34 = FUNC_2(VAR_27, VAR_7);
 FUNC_0(&VAR_34, 7);
 FUNC_5(VAR_27, VAR_7, VAR_34);


 VAR_34 = FUNC_1(VAR_27, VAR_31);
 VAR_34 |= VAR_1;
 FUNC_4(VAR_27, VAR_31, VAR_34);


 VAR_38 = (VAR_27->enet_id == VAR_17) ? VAR_2 :
    VAR_22;
 VAR_34 = FUNC_3(VAR_27, VAR_38);
 VAR_34 = (VAR_5 << 16) | (VAR_34 & 0xffff);
 FUNC_6(VAR_27, VAR_38, VAR_34);

 if (VAR_27->enet_id != VAR_17) {
  VAR_34 = FUNC_3(VAR_27, VAR_23);
  VAR_34 = (VAR_9 << 16) | (VAR_34 & 0xFFFF);
  FUNC_6(VAR_27, VAR_23, VAR_34);
 }

 VAR_28 = (VAR_27->enet_id == VAR_17) ? VAR_15 :
      VAR_26;
 VAR_29 = (VAR_27->enet_id == VAR_17) ?
          VAR_14 : 0;

 if (VAR_27->enet_id == VAR_17) {
  VAR_35 = FUNC_1(VAR_27, VAR_28);
  VAR_36 = FUNC_1(VAR_27, VAR_29);

  if (!(VAR_27->port_id % 2)) {
   VAR_35 = (VAR_35 & 0xffff0000) | VAR_4;
   VAR_36 = (VAR_36 & 0xffff0000) | VAR_3;
  } else {
   VAR_35 = (VAR_35 & 0xffff) | (VAR_4 << 16);
   VAR_36 = (VAR_36 & 0xffff) | (VAR_3 << 16);
  }

  FUNC_4(VAR_27, VAR_28, VAR_35);
  FUNC_4(VAR_27, VAR_29, VAR_36);
 } else {
  VAR_34 = (VAR_3 << 16) | VAR_4;
  FUNC_4(VAR_27, VAR_28, VAR_34);
 }

 FUNC_8(VAR_27, VAR_27->tx_pause);
 FUNC_7(VAR_27, VAR_27->rx_pause);


 FUNC_4(VAR_27, VAR_20, 0x84);
 FUNC_4(VAR_27, VAR_32, VAR_12);
 FUNC_6(VAR_27, VAR_33, VAR_11);
}
