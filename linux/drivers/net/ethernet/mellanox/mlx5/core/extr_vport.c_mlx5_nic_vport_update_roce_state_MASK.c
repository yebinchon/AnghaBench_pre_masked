
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_core_dev {int dummy; } ;
typedef enum mlx5_vport_roce_state { ____Placeholder_mlx5_vport_roce_state } mlx5_vport_roce_state ;
struct TYPE_4__ {int roce_en; } ;
struct TYPE_3__ {int roce_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void*,int ,int) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (struct mlx5_core_dev*,void*,int) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_5(struct mlx5_core_dev *VAR_5,
         enum mlx5_vport_roce_state VAR_6)
{
 void *VAR_7;
 int VAR_8 = FUNC_1(VAR_3);
 int VAR_9;

 VAR_7 = FUNC_3(VAR_8, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_0(VAR_3, VAR_7, VAR_2.roce_en, 1);
 FUNC_0(VAR_3, VAR_7, VAR_4.roce_en,
   VAR_6);

 VAR_9 = FUNC_4(VAR_5, VAR_7, VAR_8);

 FUNC_2(VAR_7);

 return VAR_9;
}
