
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct lmac {scalar_t__ lmac_type; } ;
struct bgx {struct lmac* lmac; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bgx*,int,int ) ;
 int FUNC_1 (struct bgx*,int,int ,int ) ;
 struct bgx* FUNC_2 (int,int) ;

void FUNC_3(int VAR_6, int VAR_7, int VAR_8, bool VAR_9)
{
 struct bgx *VAR_10 = FUNC_2(VAR_6, VAR_7);
 struct lmac *VAR_11;
 u64 VAR_12, VAR_13;

 if (!VAR_10)
  return;

 VAR_11 = &VAR_10->lmac[VAR_8];

 if (VAR_11->lmac_type == VAR_3 ||
     VAR_11->lmac_type == VAR_1 ||
     VAR_11->lmac_type == VAR_2)
  VAR_12 = VAR_0;
 else
  VAR_12 = VAR_5;

 VAR_13 = FUNC_0(VAR_10, VAR_8, VAR_12);

 if (VAR_9)
  VAR_13 |= VAR_4;
 else
  VAR_13 &= ~VAR_4;
 FUNC_1(VAR_10, VAR_8, VAR_12, VAR_13);
}
