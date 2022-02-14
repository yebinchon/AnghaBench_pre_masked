
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct lmac {int last_speed; int link_up; } ;
struct bgx {scalar_t__ is_rgx; struct lmac* lmac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bgx*,int,int ) ;
 int FUNC_1 (struct bgx*,int,int ,int) ;
 struct bgx* FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(int VAR_3, int VAR_4, int VAR_5, bool VAR_6)
{
 struct bgx *VAR_7 = FUNC_2(VAR_3, VAR_4);
 struct lmac *VAR_8;
 u64 VAR_9;

 if (!VAR_7)
  return;
 VAR_8 = &VAR_7->lmac[VAR_5];

 VAR_9 = FUNC_0(VAR_7, VAR_5, VAR_0);
 if (VAR_6)
  VAR_9 |= VAR_1 | VAR_2;
 else
  VAR_9 &= ~(VAR_1 | VAR_2);
 FUNC_1(VAR_7, VAR_5, VAR_0, VAR_9);

 if (VAR_7->is_rgx)
  FUNC_3(VAR_6 ? VAR_8->link_up : 0, VAR_8->last_speed);
}
