
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_fpga_device {TYPE_1__* ipsec; } ;
struct mlx5_core_dev {struct mlx5_fpga_device* fpga; } ;
struct TYPE_2__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*) ;
 int VAR_13 ;

u32 FUNC_2(struct mlx5_core_dev *VAR_14)
{
 struct mlx5_fpga_device *VAR_15 = VAR_14->fpga;
 u32 VAR_16 = 0;

 if (FUNC_1(VAR_14)) {
  VAR_16 |= VAR_0;
  VAR_16 |= VAR_5;
 } else {
  return VAR_16;
 }

 if (!VAR_15->ipsec)
  return VAR_16;

 if (FUNC_0(VAR_10, VAR_15->ipsec->caps, VAR_9))
  VAR_16 |= VAR_2;

 if (FUNC_0(VAR_10, VAR_15->ipsec->caps, VAR_11))
  VAR_16 |= VAR_3;

 if (FUNC_0(VAR_10, VAR_15->ipsec->caps, VAR_12))
  VAR_16 |= VAR_4;

 if (FUNC_0(VAR_10, VAR_15->ipsec->caps, VAR_13))
  VAR_16 |= VAR_6;

 if (FUNC_0(VAR_10, VAR_15->ipsec->caps, VAR_8)) {
  VAR_16 |= VAR_1;
  VAR_16 |= VAR_7;
 }

 return VAR_16;
}
