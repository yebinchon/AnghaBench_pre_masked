
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcmgenet_priv {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bcmgenet_priv*,unsigned char,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct bcmgenet_priv *VAR_1,
      unsigned char *VAR_2,
      int *VAR_3)
{
 FUNC_0(VAR_1, VAR_2[0] << 8 | VAR_2[1],
        VAR_0 + (*VAR_3 * 4));
 FUNC_0(VAR_1, VAR_2[2] << 24 | VAR_2[3] << 16 |
        VAR_2[4] << 8 | VAR_2[5],
        VAR_0 + ((*VAR_3 + 1) * 4));
 *VAR_3 += 2;
}
