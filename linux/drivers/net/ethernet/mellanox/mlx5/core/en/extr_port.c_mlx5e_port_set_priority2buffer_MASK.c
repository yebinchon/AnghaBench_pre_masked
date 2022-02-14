
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,void*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ) ;
 int VAR_3 ;
 int FUNC_4 (void*,void*,int) ;
 int FUNC_5 (struct mlx5_core_dev*,void*,int,void*,int,int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_6(struct mlx5_core_dev *VAR_6, u8 *VAR_7)
{
 int VAR_8 = FUNC_1(VAR_5);
 u32 VAR_9;
 void *VAR_10;
 void *VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_11 = FUNC_3(VAR_8, VAR_1);
 VAR_10 = FUNC_3(VAR_8, VAR_1);
 if (!VAR_11 || !VAR_10) {
  VAR_13 = -VAR_0;
  goto out;
 }


 FUNC_0(VAR_5, VAR_11, VAR_3, 1);
 VAR_13 = FUNC_5(VAR_6, VAR_11, VAR_8, VAR_10, VAR_8, VAR_2, 0, 0);
 if (VAR_13)
  goto out;

 FUNC_4(VAR_11, VAR_10, VAR_8);
 FUNC_0(VAR_5, VAR_11, VAR_3, 1);


 FUNC_0(VAR_5, VAR_11, VAR_4, 0xFF);

 VAR_9 = 0;
 for (VAR_12 = 0; VAR_12 < 8; VAR_12++)
  VAR_9 |= (VAR_7[VAR_12] << (4 * VAR_12));
 FUNC_0(VAR_5, VAR_11, VAR_9, VAR_9);

 VAR_13 = FUNC_5(VAR_6, VAR_11, VAR_8, VAR_10, VAR_8, VAR_2, 0, 1);

out:
 FUNC_2(VAR_11);
 FUNC_2(VAR_10);
 return VAR_13;
}
