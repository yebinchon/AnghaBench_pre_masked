
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_enet_pdata {scalar_t__ enet_id; int port_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct xgene_enet_pdata*,int) ;
 int FUNC_1 (struct xgene_enet_pdata*,int,int) ;

__attribute__((used)) static void FUNC_2(struct xgene_enet_pdata *VAR_6, bool VAR_7)
{
 u32 VAR_8, VAR_9;

 if (VAR_6->enet_id == VAR_4) {
  VAR_9 = (!(VAR_6->port_id % 2)) ? VAR_0 :
    VAR_1;
 } else {
  VAR_9 = VAR_5;
 }

 VAR_8 = FUNC_0(VAR_6, VAR_9);
 if (VAR_7)
  VAR_8 |= VAR_2 | VAR_3;
 else
  VAR_8 &= ~(VAR_2 | VAR_3);
 FUNC_1(VAR_6, VAR_9, VAR_8);
}
