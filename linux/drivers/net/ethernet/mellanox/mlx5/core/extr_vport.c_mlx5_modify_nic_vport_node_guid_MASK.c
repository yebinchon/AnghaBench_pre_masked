
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {int node_guid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,void*,void*) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (int ,void*,int ,int) ;
 int FUNC_3 (void*,void*,int ,int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (struct mlx5_core_dev*,void*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_8(struct mlx5_core_dev *VAR_9,
        u16 VAR_10, u64 VAR_11)
{
 int VAR_12 = FUNC_4(VAR_5);
 void *VAR_13;
 void *VAR_14;
 int VAR_15;

 if (!VAR_10)
  return -VAR_1;
 if (!FUNC_1(VAR_9, VAR_7))
  return -VAR_0;

 VAR_14 = FUNC_6(VAR_12, VAR_3);
 if (!VAR_14)
  return -VAR_2;

 FUNC_2(VAR_5, VAR_14,
   VAR_4.node_guid, 1);
 FUNC_2(VAR_5, VAR_14, VAR_8, VAR_10);
 FUNC_2(VAR_5, VAR_14, VAR_6, 1);

 VAR_13 = FUNC_0(VAR_5,
      VAR_14, VAR_13);
 FUNC_3(VAR_13, VAR_13, VAR_11, VAR_11);

 VAR_15 = FUNC_7(VAR_9, VAR_14, VAR_12);

 FUNC_5(VAR_14);

 return VAR_15;
}
