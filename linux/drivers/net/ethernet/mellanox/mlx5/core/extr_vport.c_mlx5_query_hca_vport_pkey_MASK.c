
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int*,void*,int*) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int VAR_4 ;
 int FUNC_2 (int*,void*,int*) ;
 int FUNC_3 (int*,void*,int,int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (struct mlx5_core_dev*,void*,int,void*,int) ;
 int FUNC_8 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

int FUNC_9(struct mlx5_core_dev *VAR_12, u8 VAR_13,
         u8 VAR_14, u16 VAR_15, u16 VAR_16,
         u16 *VAR_17)
{
 int VAR_18 = FUNC_4(VAR_8);
 int VAR_19 = FUNC_4(VAR_9);
 int VAR_20;
 void *VAR_21 = ((void*)0);
 void *VAR_22 = ((void*)0);
 void *VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;

 VAR_20 = FUNC_1(VAR_12, VAR_10);

 VAR_25 = FUNC_8(FUNC_1(VAR_12, VAR_7));
 if (VAR_16 > VAR_25 && VAR_16 != 0xffff)
  return -VAR_0;

 if (VAR_16 == 0xffff)
  VAR_24 = VAR_25;
 else
  VAR_24 = 1;

 VAR_19 += VAR_24 * FUNC_4(VAR_17);

 VAR_22 = FUNC_6(VAR_18, VAR_3);
 VAR_21 = FUNC_6(VAR_19, VAR_3);
 if (!VAR_22 || !VAR_21) {
  VAR_26 = -VAR_1;
  goto out;
 }

 FUNC_3(VAR_8, VAR_22, VAR_6, VAR_4);
 if (VAR_13) {
  if (VAR_20) {
   FUNC_3(VAR_8, VAR_22, VAR_11, VAR_15);
   FUNC_3(VAR_8, VAR_22, VAR_13, 1);
  } else {
   VAR_26 = -VAR_2;
   goto out;
  }
 }
 FUNC_3(VAR_8, VAR_22, VAR_16, VAR_16);

 if (FUNC_1(VAR_12, VAR_5) == 2)
  FUNC_3(VAR_8, VAR_22, VAR_14, VAR_14);

 VAR_26 = FUNC_7(VAR_12, VAR_22, VAR_18, VAR_21, VAR_19);
 if (VAR_26)
  goto out;

 VAR_23 = FUNC_0(VAR_9, VAR_21, VAR_17);
 for (VAR_27 = 0; VAR_27 < VAR_24; VAR_27++, VAR_17++, VAR_23 += FUNC_4(VAR_17))
  *VAR_17 = FUNC_2(VAR_17, VAR_23, VAR_17);

out:
 FUNC_5(VAR_22);
 FUNC_5(VAR_21);
 return VAR_26;
}
