
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
struct mlx5_fpga_device {int mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,scalar_t__*,int) ;
 int FUNC_2 (struct mlx5_fpga_device*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct mlx5_fpga_device *VAR_3, size_t VAR_4,
      u64 VAR_5, u8 *VAR_6)
{
 size_t VAR_7 = VAR_2;
 size_t VAR_8 = 0;
 u8 VAR_9;
 int VAR_10;

 if (!VAR_4)
  return -VAR_0;

 if (!VAR_3->mdev)
  return -VAR_1;

 while (VAR_8 < VAR_4) {
  VAR_9 = FUNC_0(VAR_7, (VAR_4 - VAR_8));

  VAR_10 = FUNC_1(VAR_3->mdev, VAR_9,
        VAR_5 + VAR_8,
        VAR_6 + VAR_8, 0);
  if (VAR_10) {
   FUNC_2(VAR_3, "Failed to read over I2C: %d\n",
          VAR_10);
   break;
  }

  VAR_8 += VAR_9;
 }

 return VAR_10;
}
