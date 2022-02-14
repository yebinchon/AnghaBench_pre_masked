
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ever_used; } ;
struct mlx5e_priv {int max_nch; int max_opened_tc; TYPE_1__ xsk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(struct mlx5e_priv *VAR_7)
{
 int VAR_8 = VAR_7->max_nch;

 return (VAR_1 * VAR_8) +
        (VAR_0 * VAR_8) +
        (VAR_3 * VAR_8 * VAR_7->max_opened_tc) +
        (VAR_2 * VAR_8) +
        (VAR_4 * VAR_8) +
        (VAR_5 * VAR_8 * VAR_7->xsk.ever_used) +
        (VAR_6 * VAR_8 * VAR_7->xsk.ever_used);
}
