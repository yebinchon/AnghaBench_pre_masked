
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcmgenet_rx_ring {unsigned int index; struct bcmgenet_priv* priv; } ;
struct bcmgenet_priv {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bcmgenet_priv*,scalar_t__) ;
 int FUNC_2 (struct bcmgenet_priv*,unsigned int,int,int ) ;
 int FUNC_3 (struct bcmgenet_priv*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct bcmgenet_rx_ring *VAR_3,
         u32 VAR_4, u32 VAR_5)
{
 struct bcmgenet_priv *VAR_6 = VAR_3->priv;
 unsigned int VAR_7 = VAR_3->index;
 u32 VAR_8;

 FUNC_2(VAR_6, VAR_7, VAR_5, VAR_0);

 VAR_8 = FUNC_1(VAR_6, VAR_1 + VAR_7);
 VAR_8 &= ~VAR_2;
 VAR_8 |= FUNC_0(VAR_4 * 1000, 8192);
 FUNC_3(VAR_6, VAR_8, VAR_1 + VAR_7);
}
