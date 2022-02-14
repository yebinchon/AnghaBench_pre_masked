
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void*,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,void*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct mlx5_core_dev*,void*,int,void*,int,int ,int ,int ) ;
 int FUNC_6 (struct mlx5_core_dev*,char*,int,int) ;
 int VAR_4 ;

int FUNC_7(struct mlx5_core_dev *VAR_5, u8 *VAR_6)
{
 int VAR_7 = FUNC_2(VAR_4);
 u32 VAR_8;
 void *VAR_9;
 void *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_10 = FUNC_4(VAR_7, VAR_1);
 VAR_9 = FUNC_4(VAR_7, VAR_1);
 if (!VAR_10 || !VAR_9) {
  VAR_12 = -VAR_0;
  goto out;
 }

 FUNC_1(VAR_4, VAR_10, VAR_3, 1);
 VAR_12 = FUNC_5(VAR_5, VAR_10, VAR_7, VAR_9, VAR_7, VAR_2, 0, 0);
 if (VAR_12)
  goto out;

 VAR_8 = FUNC_0(VAR_4, VAR_9, VAR_8);
 for (VAR_11 = 0; VAR_11 < 8; VAR_11++) {
  VAR_6[VAR_11] = (u8)(VAR_8 >> (4 * VAR_11)) & 0xF;
  FUNC_6(VAR_5, "prio %d, buffer %d\n", VAR_11, VAR_6[VAR_11]);
 }
out:
 FUNC_3(VAR_10);
 FUNC_3(VAR_9);
 return VAR_12;
}
