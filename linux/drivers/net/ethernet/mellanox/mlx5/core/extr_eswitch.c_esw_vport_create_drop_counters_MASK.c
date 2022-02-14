
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * drop_counter; } ;
struct TYPE_4__ {int * drop_counter; } ;
struct mlx5_vport {TYPE_1__ egress; int vport; TYPE_2__ ingress; struct mlx5_core_dev* dev; } ;
struct mlx5_core_dev {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*,int ) ;
 scalar_t__ FUNC_2 (struct mlx5_core_dev*,int ) ;
 int FUNC_3 (struct mlx5_core_dev*,char*,int ) ;
 int VAR_0 ;
 void* FUNC_4 (struct mlx5_core_dev*,int) ;

__attribute__((used)) static void FUNC_5(struct mlx5_vport *VAR_1)
{
 struct mlx5_core_dev *VAR_2 = VAR_1->dev;

 if (FUNC_2(VAR_2, VAR_0)) {
  VAR_1->ingress.drop_counter = FUNC_4(VAR_2, 0);
  if (FUNC_0(VAR_1->ingress.drop_counter)) {
   FUNC_3(VAR_2,
     "vport[%d] configure ingress drop rule counter failed\n",
     VAR_1->vport);
   VAR_1->ingress.drop_counter = ((void*)0);
  }
 }

 if (FUNC_1(VAR_2, VAR_0)) {
  VAR_1->egress.drop_counter = FUNC_4(VAR_2, 0);
  if (FUNC_0(VAR_1->egress.drop_counter)) {
   FUNC_3(VAR_2,
     "vport[%d] configure egress drop rule counter failed\n",
     VAR_1->vport);
   VAR_1->egress.drop_counter = ((void*)0);
  }
 }
}
