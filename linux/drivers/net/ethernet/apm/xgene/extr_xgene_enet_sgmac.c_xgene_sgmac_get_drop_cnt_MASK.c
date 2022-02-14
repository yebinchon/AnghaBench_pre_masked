
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xgene_enet_pdata {scalar_t__ enet_id; int port_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (struct xgene_enet_pdata*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct xgene_enet_pdata *VAR_6,
         u32 *VAR_7, u32 *VAR_8)
{
 u32 VAR_9, VAR_10;

 VAR_9 = (VAR_6->enet_id != VAR_3) ?
  VAR_5 :
  VAR_1 + VAR_6->port_id * VAR_2;
 VAR_10 = FUNC_2(VAR_6, VAR_9);
 *VAR_7 = FUNC_1(VAR_10);
 *VAR_8 = FUNC_0(VAR_10);

 VAR_9 = (VAR_6->enet_id != VAR_3) ?
  VAR_4 :
  VAR_0 + VAR_6->port_id * VAR_2;
 FUNC_2(VAR_6, VAR_9);
}
