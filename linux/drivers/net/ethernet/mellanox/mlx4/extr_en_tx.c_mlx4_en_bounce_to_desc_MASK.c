
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct mlx4_en_tx_ring {unsigned int size; struct mlx4_en_tx_desc* buf; scalar_t__ bounce_buf; } ;
struct mlx4_en_tx_desc {int dummy; } ;
struct mlx4_en_priv {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static struct mlx4_en_tx_desc *FUNC_1(struct mlx4_en_priv *VAR_2,
            struct mlx4_en_tx_ring *VAR_3,
            u32 VAR_4,
            unsigned int VAR_5)
{
 u32 VAR_6 = (VAR_3->size - VAR_4) << VAR_0;
 int VAR_7;

 for (VAR_7 = VAR_5 - VAR_6 - 4; VAR_7 >= 0; VAR_7 -= 4) {
  if ((VAR_7 & (VAR_1 - 1)) == 0)
   FUNC_0();

  *((u32 *) (VAR_3->buf + VAR_7)) =
   *((u32 *) (VAR_3->bounce_buf + VAR_6 + VAR_7));
 }

 for (VAR_7 = VAR_6 - 4; VAR_7 >= 4 ; VAR_7 -= 4) {
  if ((VAR_7 & (VAR_1 - 1)) == 0)
   FUNC_0();

  *((u32 *)(VAR_3->buf + (VAR_4 << VAR_0) + VAR_7)) =
   *((u32 *) (VAR_3->bounce_buf + VAR_7));
 }


 return VAR_3->buf + (VAR_4 << VAR_0);
}
