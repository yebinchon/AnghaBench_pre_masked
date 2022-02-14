
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct lmac {int dmacs_count; } ;
struct bgx {struct lmac* lmac; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bgx*,int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct bgx *VAR_3, int VAR_4,
           u64 VAR_5, u8 VAR_6)
{
 struct lmac *VAR_7 = ((void*)0);
 u64 VAR_8 = 0;


 if (!VAR_5 || !VAR_3)
  return -1;

 VAR_7 = &VAR_3->lmac[VAR_4];


 VAR_8 = FUNC_0(VAR_4 & VAR_1) |
  VAR_2 | VAR_5;
 FUNC_1(VAR_3, 0, VAR_0 +
        ((VAR_4 * VAR_7->dmacs_count) + VAR_6) * sizeof(u64), VAR_8);
 return 0;
}
