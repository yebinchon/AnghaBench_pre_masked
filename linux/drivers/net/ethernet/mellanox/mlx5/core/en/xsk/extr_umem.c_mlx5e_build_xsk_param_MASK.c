
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_umem {scalar_t__ headroom; scalar_t__ chunk_size_nohr; } ;
struct mlx5e_xsk_param {scalar_t__ chunk_size; scalar_t__ headroom; } ;



void FUNC_0(struct xdp_umem *VAR_0, struct mlx5e_xsk_param *VAR_1)
{
 VAR_1->headroom = VAR_0->headroom;
 VAR_1->chunk_size = VAR_0->chunk_size_nohr + VAR_0->headroom;
}
