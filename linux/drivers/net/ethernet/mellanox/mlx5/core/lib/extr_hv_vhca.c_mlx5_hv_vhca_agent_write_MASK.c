
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_hv_vhca_data_block {int member_0; } ;
struct mlx5_hv_vhca_agent {int type; TYPE_1__* hv_vhca; } ;
typedef int data_block ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_hv_vhca_agent*) ;
 int FUNC_1 (struct mlx5_hv_vhca_agent*,struct mlx5_hv_vhca_data_block*,void*,int,int*) ;
 int FUNC_2 (int ,struct mlx5_hv_vhca_data_block*,int,int) ;

int FUNC_3(struct mlx5_hv_vhca_agent *VAR_2,
        void *VAR_3, int VAR_4)
{
 int VAR_5 = VAR_2->type * VAR_1;
 int VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8;

 while (VAR_4) {
  struct mlx5_hv_vhca_data_block VAR_9 = {0};
  int VAR_10;

  VAR_10 = FUNC_1(VAR_2, &VAR_9,
       VAR_3 + VAR_7,
       VAR_4, &VAR_6);
  if (!VAR_10)
   return -VAR_0;

  VAR_8 = FUNC_2(VAR_2->hv_vhca->dev, &VAR_9,
        sizeof(VAR_9), VAR_5);
  if (VAR_8)
   return VAR_8;

  VAR_7 += VAR_10;
  VAR_4 -= VAR_10;
 }

 FUNC_0(VAR_2);

 return 0;
}
