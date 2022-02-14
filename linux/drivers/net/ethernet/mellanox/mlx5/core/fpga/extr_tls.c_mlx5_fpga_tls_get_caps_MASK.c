
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_fpga_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ) ;
 int VAR_13 ;
 int FUNC_4 (struct mlx5_fpga_device*,int,void*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_5(struct mlx5_fpga_device *VAR_19,
      u32 *VAR_20)
{
 int VAR_21, VAR_22 = FUNC_1(VAR_15);
 u32 VAR_23 = 0;
 void *VAR_24;

 VAR_24 = FUNC_3(VAR_22, VAR_1);
 if (!VAR_24)
  return -VAR_0;

 VAR_21 = FUNC_4(VAR_19, VAR_22, VAR_24);
 if (VAR_21)
  goto out;

 if (FUNC_0(VAR_15, VAR_24, VAR_18))
  VAR_23 |= VAR_7;
 if (FUNC_0(VAR_15, VAR_24, VAR_14))
  VAR_23 |= VAR_6;
 if (FUNC_0(VAR_15, VAR_24, VAR_16))
  VAR_23 |= VAR_8;
 if (FUNC_0(VAR_15, VAR_24, VAR_17))
  VAR_23 |= VAR_9;
 if (FUNC_0(VAR_15, VAR_24, VAR_13))
  VAR_23 |= VAR_5;
 if (FUNC_0(VAR_15, VAR_24, VAR_12))
  VAR_23 |= VAR_4;

 if (FUNC_0(VAR_15, VAR_24, VAR_10))
  VAR_23 |= VAR_2;
 if (FUNC_0(VAR_15, VAR_24, VAR_11))
  VAR_23 |= VAR_3;

 *VAR_20 = VAR_23;
 VAR_21 = 0;
out:
 FUNC_2(VAR_24);
 return VAR_21;
}
