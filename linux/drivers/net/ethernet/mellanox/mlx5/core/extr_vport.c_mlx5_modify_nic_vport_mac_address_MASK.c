
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {int permanent_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (int ,void*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (struct mlx5_core_dev*,void*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_7(struct mlx5_core_dev *VAR_8,
          u16 VAR_9, u8 *VAR_10)
{
 void *VAR_11;
 int VAR_12 = FUNC_2(VAR_3);
 int VAR_13;
 void *VAR_14;
 u8 *VAR_15;

 VAR_11 = FUNC_5(VAR_12, VAR_1);
 if (!VAR_11)
  return -VAR_0;

 FUNC_1(VAR_3, VAR_11,
   VAR_2.permanent_address, 1);
 FUNC_1(VAR_3, VAR_11, VAR_7, VAR_9);
 FUNC_1(VAR_3, VAR_11, VAR_5, 1);

 VAR_14 = FUNC_0(VAR_3,
         VAR_11, VAR_4);
 VAR_15 = FUNC_0(VAR_4, VAR_14,
    VAR_6);

 FUNC_3(&VAR_15[2], VAR_10);

 VAR_13 = FUNC_6(VAR_8, VAR_11, VAR_12);

 FUNC_4(VAR_11);

 return VAR_13;
}
