
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_en_rx_ring {int actual_size; int prod; int cons; int size_mask; } ;
struct mlx4_en_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mlx4_en_priv*,struct mlx4_en_rx_ring*,int,int) ;
 int FUNC_2 (struct mlx4_en_rx_ring*) ;

__attribute__((used)) static void FUNC_3(struct mlx4_en_priv *VAR_2,
          struct mlx4_en_rx_ring *VAR_3)
{
 u32 VAR_4 = VAR_3->actual_size - (VAR_3->prod - VAR_3->cons);


 if (VAR_4 < 8)
  return;
 do {
  if (FUNC_1(VAR_2, VAR_3,
         VAR_3->prod & VAR_3->size_mask,
         VAR_0 | VAR_1))
   break;
  VAR_3->prod++;
 } while (FUNC_0(--VAR_4));

 FUNC_2(VAR_3);
}
