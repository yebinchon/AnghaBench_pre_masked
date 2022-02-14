
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arc_emac_priv {int dummy; } ;


 unsigned int FUNC_0 (struct arc_emac_priv*,int) ;
 int FUNC_1 (struct arc_emac_priv*,int,unsigned int) ;

__attribute__((used)) static inline void FUNC_2(struct arc_emac_priv *VAR_0, int VAR_1, int VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_0, VAR_1);

 FUNC_1(VAR_0, VAR_1, VAR_3 & ~VAR_2);
}
