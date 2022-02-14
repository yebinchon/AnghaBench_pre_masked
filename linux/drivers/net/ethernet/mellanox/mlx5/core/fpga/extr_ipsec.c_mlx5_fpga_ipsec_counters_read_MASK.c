
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mlx5_fpga_device {TYPE_1__* ipsec; } ;
struct mlx5_core_dev {struct mlx5_fpga_device* fpga; } ;
typedef int __be32 ;
struct TYPE_2__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mlx5_fpga_device*,char*,int) ;
 int FUNC_5 (struct mlx5_core_dev*) ;
 int FUNC_6 (struct mlx5_fpga_device*,int,int,int *,int ) ;
 scalar_t__ FUNC_7 (int ) ;

int FUNC_8(struct mlx5_core_dev *VAR_6, u64 *VAR_7,
      unsigned int VAR_8)
{
 struct mlx5_fpga_device *VAR_9 = VAR_6->fpga;
 unsigned int VAR_10;
 __be32 *VAR_11;
 u32 VAR_12;
 u64 VAR_13;
 int VAR_14;

 if (!VAR_9 || !VAR_9->ipsec)
  return 0;

 VAR_13 = (u64)FUNC_0(VAR_5, VAR_9->ipsec->caps,
        VAR_4) +
        ((u64)FUNC_0(VAR_5, VAR_9->ipsec->caps,
        VAR_3) << 32);

 VAR_12 = FUNC_5(VAR_6);

 VAR_11 = FUNC_3(FUNC_1(sizeof(*VAR_11), VAR_12, 2), VAR_1);
 if (!VAR_11) {
  VAR_14 = -VAR_0;
  goto out;
 }

 VAR_14 = FUNC_6(VAR_9, VAR_12 * sizeof(u64), VAR_13, VAR_11,
     VAR_2);
 if (VAR_14 < 0) {
  FUNC_4(VAR_9, "Failed to read IPSec counters from HW: %d\n",
         VAR_14);
  goto out;
 }
 VAR_14 = 0;

 if (VAR_12 > VAR_8)
  VAR_12 = VAR_8;


 for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++)
  VAR_7[VAR_10] = (u64)FUNC_7(VAR_11[VAR_10 * 2]) |
         ((u64)FUNC_7(VAR_11[VAR_10 * 2 + 1]) << 32);

out:
 FUNC_2(VAR_11);
 return VAR_14;
}
