
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct lmac {scalar_t__ is_sgmii; } ;
struct bgx {struct lmac* lmac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bgx*,int,int ) ;
 int FUNC_1 (struct bgx*,int,int ,int ) ;
 struct bgx* FUNC_2 (int,int) ;

void FUNC_3(int VAR_4, int VAR_5,
    int VAR_6, bool VAR_7)
{
 struct bgx *VAR_8;
 struct lmac *VAR_9;
 u64 VAR_10;

 VAR_8 = FUNC_2(VAR_4, VAR_5);
 if (!VAR_8)
  return;

 VAR_9 = &VAR_8->lmac[VAR_6];
 if (VAR_9->is_sgmii) {
  VAR_10 = FUNC_0(VAR_8, VAR_6, VAR_0);
  if (VAR_7)
   VAR_10 |= VAR_2;
  else
   VAR_10 &= ~VAR_2;
  FUNC_1(VAR_8, VAR_6, VAR_0, VAR_10);
 } else {
  VAR_10 = FUNC_0(VAR_8, VAR_6, VAR_1);
  if (VAR_7)
   VAR_10 |= VAR_3;
  else
   VAR_10 &= ~VAR_3;
  FUNC_1(VAR_8, VAR_6, VAR_1, VAR_10);
 }
}
