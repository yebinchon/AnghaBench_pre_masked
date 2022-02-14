
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u32 ;
struct mlx5_core_qp {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,void*,void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void*,void*,int ,int) ;
 int FUNC_2 (void*) ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (struct mlx5_core_dev*,struct mlx5_core_qp*,void*,int) ;
 int FUNC_6 (struct mlx5_core_dev*,char*,int) ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

int FUNC_7(struct mlx5_core_dev *VAR_13, struct mlx5_core_qp *VAR_14)
{
 u32 *VAR_15 = ((void*)0);
 void *VAR_16;
 int VAR_17 = 0;
 int VAR_18;
 void *VAR_19;

 VAR_18 = FUNC_2(VAR_6);
 VAR_15 = FUNC_4(VAR_18, VAR_1);
 if (!VAR_15)
  return -VAR_0;

 VAR_19 = FUNC_0(VAR_6, VAR_15, VAR_19);
 FUNC_1(VAR_19, VAR_19, VAR_10, VAR_4);
 FUNC_1(VAR_19, VAR_19, VAR_8, VAR_3);
 FUNC_1(VAR_19, VAR_19, VAR_11,
   VAR_2);

 VAR_16 = FUNC_0(VAR_19, VAR_19, VAR_9);
 FUNC_1(VAR_5, VAR_16, VAR_12, 1);
 FUNC_1(VAR_5, VAR_16, VAR_7, 1);

 VAR_17 = FUNC_5(VAR_13, VAR_14, VAR_15, VAR_18);
 if (VAR_17) {
  FUNC_6(VAR_13, "Failed creating IPoIB QP err : %d\n", VAR_17);
  goto out;
 }

out:
 FUNC_3(VAR_15);
 return VAR_17;
}
