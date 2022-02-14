
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_core_dev {int dummy; } ;
struct TYPE_4__ {int affiliation; } ;
struct TYPE_3__ {int affiliation_criteria; int affiliated_vhca_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int FUNC_1 (int ,void*,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (struct mlx5_core_dev*,void*,int) ;
 int FUNC_6 (struct mlx5_core_dev*) ;
 int FUNC_7 (struct mlx5_core_dev*) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;

int FUNC_8(struct mlx5_core_dev *VAR_7,
           struct mlx5_core_dev *VAR_8)
{
 int VAR_9 = FUNC_2(VAR_4);
 void *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(VAR_9, VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_7(VAR_8);
 if (VAR_11)
  goto free;

 FUNC_1(VAR_4, VAR_10, VAR_3.affiliation, 1);
 FUNC_1(VAR_4, VAR_10,
   VAR_5.affiliated_vhca_id,
   FUNC_0(VAR_7, VAR_6));
 FUNC_1(VAR_4, VAR_10,
   VAR_5.affiliation_criteria,
   FUNC_0(VAR_8, VAR_2));

 VAR_11 = FUNC_5(VAR_8, VAR_10, VAR_9);
 if (VAR_11)
  FUNC_6(VAR_8);

free:
 FUNC_3(VAR_10);
 return VAR_11;
}
