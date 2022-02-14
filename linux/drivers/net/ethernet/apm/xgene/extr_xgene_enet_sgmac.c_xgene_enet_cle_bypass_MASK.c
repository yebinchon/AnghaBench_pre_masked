
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct xgene_enet_pdata {int port_id; scalar_t__ enet_id; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct xgene_enet_pdata*,int,int) ;

__attribute__((used)) static void FUNC_5(struct xgene_enet_pdata *VAR_7,
      u32 VAR_8, u16 VAR_9,
      u16 VAR_10)
{
 u32 VAR_11, VAR_12;
 u32 VAR_13 = VAR_7->port_id * VAR_3;
 u32 VAR_14, VAR_15, VAR_16;

 if (VAR_7->enet_id == VAR_6) {
  VAR_11 = VAR_1;
  VAR_12 = VAR_2;
 } else {
  VAR_11 = VAR_4;
  VAR_12 = VAR_5;
 }

 VAR_14 = VAR_0;
 FUNC_4(VAR_7, VAR_11 + VAR_13, VAR_14);

 VAR_15 = FUNC_3(VAR_9);
 VAR_16 = FUNC_3(VAR_10);
 VAR_14 = FUNC_0(VAR_8) | FUNC_1(VAR_15) |
        FUNC_2(VAR_16);
 FUNC_4(VAR_7, VAR_12 + VAR_13, VAR_14);
}
