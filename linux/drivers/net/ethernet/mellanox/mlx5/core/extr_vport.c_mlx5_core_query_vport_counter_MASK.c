
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,void*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (struct mlx5_core_dev*,void*,int,void*,size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_6(struct mlx5_core_dev *VAR_9, u8 VAR_10,
      int VAR_11, u8 VAR_12, void *VAR_13,
      size_t VAR_14)
{
 int VAR_15 = FUNC_2(VAR_6);
 int VAR_16;
 void *VAR_17;
 int VAR_18;

 VAR_16 = FUNC_0(VAR_9, VAR_7);
 VAR_17 = FUNC_4(VAR_15, VAR_2);
 if (!VAR_17) {
  VAR_18 = -VAR_0;
  return VAR_18;
 }

 FUNC_1(VAR_6, VAR_17, VAR_5,
   VAR_3);
 if (VAR_10) {
  if (VAR_16) {
   FUNC_1(VAR_6, VAR_17, VAR_10, 1);
   FUNC_1(VAR_6, VAR_17, VAR_8, VAR_11 + 1);
  } else {
   VAR_18 = -VAR_1;
   goto free;
  }
 }
 if (FUNC_0(VAR_9, VAR_4) == 2)
  FUNC_1(VAR_6, VAR_17, VAR_12, VAR_12);

 VAR_18 = FUNC_5(VAR_9, VAR_17, VAR_15, VAR_13, VAR_14);
free:
 FUNC_3(VAR_17);
 return VAR_18;
}
