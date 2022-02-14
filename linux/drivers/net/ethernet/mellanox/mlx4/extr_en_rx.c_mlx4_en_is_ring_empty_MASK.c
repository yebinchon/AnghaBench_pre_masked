
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_rx_ring {scalar_t__ prod; scalar_t__ cons; } ;



__attribute__((used)) static bool FUNC_0(const struct mlx4_en_rx_ring *VAR_0)
{
 return VAR_0->prod == VAR_0->cons;
}
