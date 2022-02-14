
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
 int FUNC_0 (int ,void*,int ,int) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (struct mlx5_core_dev*,void*,int) ;
 int FUNC_5 (struct mlx5_core_dev*) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

int FUNC_6(struct mlx5_core_dev *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_3);
 void *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_6, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_0(VAR_3, VAR_7, VAR_2.affiliation, 1);
 FUNC_0(VAR_3, VAR_7,
   VAR_4.affiliated_vhca_id, 0);
 FUNC_0(VAR_3, VAR_7,
   VAR_4.affiliation_criteria, 0);

 VAR_8 = FUNC_4(VAR_5, VAR_7, VAR_6);
 if (!VAR_8)
  FUNC_5(VAR_5);

 FUNC_2(VAR_7);
 return VAR_8;
}
