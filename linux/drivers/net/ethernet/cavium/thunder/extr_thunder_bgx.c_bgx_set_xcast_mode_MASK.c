
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct lmac {int dmacs_cfg; TYPE_1__* dmacs; } ;
struct bgx {struct lmac* lmac; } ;
struct TYPE_2__ {int dmac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct bgx*,int,int ) ;
 int FUNC_2 (struct bgx*,int,int ,int) ;
 int FUNC_3 (struct bgx*,int,int ,int) ;
 struct bgx* FUNC_4 (int,int) ;

void FUNC_5(int VAR_9, int VAR_10, int VAR_11, u8 VAR_12)
{
 struct bgx *VAR_13 = FUNC_4(VAR_9, VAR_10);
 struct lmac *VAR_14 = ((void*)0);
 u64 VAR_15 = 0;
 u8 VAR_16 = 0;

 if (!VAR_13)
  return;

 VAR_14 = &VAR_13->lmac[VAR_11];

 VAR_15 = FUNC_1(VAR_13, VAR_11, VAR_1);
 if (VAR_12 & VAR_2)
  VAR_15 |= VAR_0;
 else
  VAR_15 &= ~VAR_0;


 VAR_15 &= ~(VAR_5 | FUNC_0(VAR_8));


 if (VAR_12 & (VAR_3)) {
  VAR_15 |= (FUNC_0(VAR_6));
 } else if (VAR_12 & VAR_4) {
  VAR_15 |= (FUNC_0(VAR_7) | VAR_5);
  for (VAR_16 = 0; VAR_16 < VAR_14->dmacs_cfg; VAR_16++)
   FUNC_3(VAR_13, VAR_11,
          VAR_14->dmacs[VAR_16].dmac, VAR_16);
 }
 FUNC_2(VAR_13, VAR_11, VAR_1, VAR_15);
}
