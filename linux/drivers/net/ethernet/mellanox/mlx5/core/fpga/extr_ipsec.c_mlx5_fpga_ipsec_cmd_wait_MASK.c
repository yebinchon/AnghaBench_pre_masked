
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fpga_ipsec_cmd_context {scalar_t__ status; int status_code; int dev; int complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(void *VAR_4)
{
 struct mlx5_fpga_ipsec_cmd_context *VAR_5 = VAR_4;
 unsigned long VAR_6 =
  FUNC_1(VAR_2);
 int VAR_7;

 VAR_7 = FUNC_2(&VAR_5->complete, VAR_6);
 if (!VAR_7) {
  FUNC_0(VAR_5->dev, "Failure waiting for IPSec command response\n");
  return -VAR_1;
 }

 if (VAR_5->status == VAR_3)
  VAR_7 = VAR_5->status_code;
 else
  VAR_7 = -VAR_0;

 return VAR_7;
}
