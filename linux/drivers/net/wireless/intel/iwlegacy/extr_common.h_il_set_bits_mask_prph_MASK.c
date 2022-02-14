
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct il_priv {int reg_lock; } ;


 int FUNC_0 (struct il_priv*) ;
 int FUNC_1 (struct il_priv*,int) ;
 int FUNC_2 (struct il_priv*) ;
 int FUNC_3 (struct il_priv*,int,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static inline void
FUNC_7(struct il_priv *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 unsigned long VAR_4;

 FUNC_5(&VAR_0->reg_lock, VAR_4);
 if (FUNC_4(FUNC_0(VAR_0))) {
  FUNC_3(VAR_0, VAR_1, ((FUNC_1(VAR_0, VAR_1) & VAR_3) | VAR_2));
  FUNC_2(VAR_0);
 }
 FUNC_6(&VAR_0->reg_lock, VAR_4);
}
