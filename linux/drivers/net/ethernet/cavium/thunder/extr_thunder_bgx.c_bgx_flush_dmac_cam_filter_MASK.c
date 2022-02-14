
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct lmac {int dmacs_count; } ;
struct bgx {struct lmac* lmac; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bgx*,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct bgx *VAR_1, int VAR_2)
{
 struct lmac *VAR_3 = ((void*)0);
 u8 VAR_4 = 0;

 VAR_3 = &VAR_1->lmac[VAR_2];

 for (VAR_4 = 0; VAR_4 < VAR_3->dmacs_count; VAR_4++)
  FUNC_0(VAR_1, 0, VAR_0 +
         ((VAR_2 * VAR_3->dmacs_count) + VAR_4) *
         sizeof(u64), 0);
}
