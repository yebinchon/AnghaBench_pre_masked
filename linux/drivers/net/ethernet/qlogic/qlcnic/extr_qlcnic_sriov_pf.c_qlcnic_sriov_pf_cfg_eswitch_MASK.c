
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_cmd_args*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

__attribute__((used)) static int FUNC_4(struct qlcnic_adapter *VAR_7,
           u8 VAR_8, u8 VAR_9)
{
 struct qlcnic_cmd_args VAR_10;
 int VAR_11 = -VAR_3;

 if (FUNC_1(&VAR_10, VAR_7, VAR_5))
  return -VAR_4;

 VAR_10.req.arg[0] |= (3 << 29);
 VAR_10.req.arg[1] = ((VAR_8 & 0xf) << 2) | VAR_2 | VAR_1;
 if (VAR_9)
  VAR_10.req.arg[1] |= VAR_0;

 VAR_11 = FUNC_3(VAR_7, &VAR_10);

 if (VAR_11 != VAR_6) {
  FUNC_0(&VAR_7->pdev->dev,
   "Failed to enable sriov eswitch%d\n", VAR_11);
  VAR_11 = -VAR_3;
 }

 FUNC_2(&VAR_10);
 return VAR_11;
}
