
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_tx_ring {scalar_t__ prod; scalar_t__ cons; scalar_t__ full_size; } ;



__attribute__((used)) static inline bool FUNC_0(struct mlx4_en_tx_ring *VAR_0)
{
 return VAR_0->prod - VAR_0->cons > VAR_0->full_size;
}
