
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pfc {scalar_t__ fc_tx; scalar_t__ fc_rx; } ;
struct lmac {scalar_t__ is_sgmii; } ;
struct bgx {struct lmac* lmac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bgx*,int,int ) ;
 int FUNC_1 (struct bgx*,int,int ,int) ;
 struct bgx* FUNC_2 (int,int) ;

void FUNC_3(int VAR_3, int VAR_4, int VAR_5, void *VAR_6)
{
 struct pfc *VAR_7 = (struct pfc *)VAR_6;
 struct bgx *VAR_8 = FUNC_2(VAR_3, VAR_4);
 struct lmac *VAR_9;
 u64 VAR_10;

 if (!VAR_8)
  return;
 VAR_9 = &VAR_8->lmac[VAR_5];
 if (VAR_9->is_sgmii)
  return;

 VAR_10 = FUNC_0(VAR_8, VAR_5, VAR_0);
 VAR_10 &= ~(VAR_1 | VAR_2);
 VAR_10 |= (VAR_7->fc_rx ? VAR_1 : 0x00);
 VAR_10 |= (VAR_7->fc_tx ? VAR_2 : 0x00);
 FUNC_1(VAR_8, VAR_5, VAR_0, VAR_10);
}
