
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_dev {int dummy; } ;
struct cpu_rmap {int dummy; } ;
struct TYPE_4__ {TYPE_1__* port; } ;
struct TYPE_3__ {struct cpu_rmap* rmap; } ;


 TYPE_2__* FUNC_0 (struct mlx4_dev*) ;

struct cpu_rmap *FUNC_1(struct mlx4_dev *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0)->port[VAR_1].rmap;
}
