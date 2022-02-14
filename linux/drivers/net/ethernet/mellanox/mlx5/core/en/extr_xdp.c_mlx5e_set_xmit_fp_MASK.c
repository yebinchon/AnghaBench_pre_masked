
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_xdpsq {int xmit_xdp_frame; int xmit_xdp_frame_check; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct mlx5e_xdpsq *VAR_4, bool VAR_5)
{
 VAR_4->xmit_xdp_frame_check = VAR_5 ?
  VAR_2 : VAR_1;
 VAR_4->xmit_xdp_frame = VAR_5 ?
  VAR_3 : VAR_0;
}
