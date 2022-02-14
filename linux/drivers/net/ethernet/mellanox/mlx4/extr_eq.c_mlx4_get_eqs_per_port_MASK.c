
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef unsigned int u32 ;
struct TYPE_8__ {TYPE_3__* eq; } ;
struct mlx4_priv {TYPE_4__ eq_table; } ;
struct TYPE_5__ {int num_comp_vectors; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct TYPE_6__ {int ports; } ;
struct TYPE_7__ {TYPE_2__ actv_ports; } ;


 struct mlx4_priv* FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (scalar_t__,int ) ;

u32 FUNC_2(struct mlx4_dev *VAR_0, u8 VAR_1)
{
 struct mlx4_priv *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3;
 unsigned int VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0->caps.num_comp_vectors + 1; VAR_3++)
  VAR_4 += !!FUNC_1(VAR_1 - 1,
      VAR_2->eq_table.eq[VAR_3].actv_ports.ports);

 return VAR_4;
}
