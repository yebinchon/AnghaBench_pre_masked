
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;
typedef int out ;
struct TYPE_2__ {int addresses_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,void*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int,int ) ;
 int VAR_9 ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (struct mlx5_core_dev*,void*,int,int *,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

int FUNC_9(struct mlx5_core_dev *VAR_16,
    u16 VAR_17[],
    int VAR_18)
{
 u32 VAR_19[FUNC_4(VAR_11)];
 void *VAR_20;
 int VAR_21;
 int VAR_22;
 void *VAR_23;
 int VAR_24;
 int VAR_25;

 VAR_21 = 1 << FUNC_1(VAR_16, VAR_9);

 if (VAR_18 > VAR_21)
  return -VAR_1;

 VAR_22 = FUNC_3(VAR_10) +
  VAR_18 * FUNC_3(VAR_15);

 FUNC_7(VAR_19, 0, sizeof(VAR_19));
 VAR_23 = FUNC_6(VAR_22, VAR_2);
 if (!VAR_23)
  return -VAR_0;

 FUNC_2(VAR_10, VAR_23, VAR_13,
   VAR_3);
 FUNC_2(VAR_10, VAR_23,
   VAR_8.addresses_list, 1);

 VAR_20 = FUNC_0(VAR_10, VAR_23,
         VAR_12);

 FUNC_2(VAR_12, VAR_20,
   VAR_6, VAR_4);
 FUNC_2(VAR_12, VAR_20,
   VAR_5, VAR_18);

 for (VAR_25 = 0; VAR_25 < VAR_18; VAR_25++) {
  void *VAR_26 = FUNC_0(VAR_12,
            VAR_20,
            VAR_7[VAR_25]);
  FUNC_2(VAR_15, VAR_26, VAR_14, VAR_17[VAR_25]);
 }

 VAR_24 = FUNC_8(VAR_16, VAR_23, VAR_22, VAR_19, sizeof(VAR_19));
 FUNC_5(VAR_23);
 return VAR_24;
}
