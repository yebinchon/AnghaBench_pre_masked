
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_core_dev {int board_id; } ;
struct TYPE_2__ {int vsd_contd_psid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct mlx5_core_dev*,int *,int) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

int FUNC_7(struct mlx5_core_dev *VAR_4)
{
 u32 *VAR_5;
 int VAR_6 = FUNC_2(VAR_2);
 int VAR_7;

 VAR_5 = FUNC_4(VAR_6, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_7 = FUNC_6(VAR_4, VAR_5, VAR_6);
 if (VAR_7)
  goto out;

 FUNC_5(VAR_4->board_id,
        FUNC_0(VAR_2, VAR_5,
       VAR_3.vsd_contd_psid),
        FUNC_1(VAR_2,
     VAR_3.vsd_contd_psid));

out:
 FUNC_3(VAR_5);
 return VAR_7;
}
