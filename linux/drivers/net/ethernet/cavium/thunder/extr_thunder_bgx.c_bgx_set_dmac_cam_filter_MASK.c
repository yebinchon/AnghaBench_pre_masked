
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct lmac {int mac; } ;
struct bgx {struct lmac* lmac; } ;


 int FUNC_0 (struct lmac*,int ,int ) ;
 int FUNC_1 (int ) ;
 struct bgx* FUNC_2 (int,int) ;

void FUNC_3(int VAR_0, int VAR_1, int VAR_2,
        u64 VAR_3, u8 VAR_4)
{
 struct bgx *VAR_5 = FUNC_2(VAR_0, VAR_1);
 struct lmac *VAR_6 = ((void*)0);

 if (!VAR_5)
  return;

 VAR_6 = &VAR_5->lmac[VAR_2];

 if (!VAR_3)
  VAR_3 = FUNC_1(VAR_6->mac);






 FUNC_0(VAR_6, VAR_3, VAR_4);
}
