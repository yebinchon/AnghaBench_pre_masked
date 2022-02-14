
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int* arg; } ;
struct TYPE_4__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ rsp; TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_3__* pdev; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_cmd_args*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

int FUNC_4(struct qlcnic_adapter *VAR_4, u8 *VAR_5,
    u8 VAR_6)
{
 int VAR_7, VAR_8;
 struct qlcnic_cmd_args VAR_9;
 u32 VAR_10, VAR_11;

 VAR_7 = FUNC_1(&VAR_9, VAR_4, VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_9.req.arg[1] = VAR_6 | VAR_0;
 VAR_7 = FUNC_3(VAR_4, &VAR_9);

 if (VAR_7 == VAR_3) {
  VAR_10 = VAR_9.rsp.arg[1];
  VAR_11 = VAR_9.rsp.arg[2];

  for (VAR_8 = 0; VAR_8 < 2; VAR_8++)
   VAR_5[VAR_8] = (u8) (VAR_11 >> ((1 - VAR_8) * 8));
  for (VAR_8 = 2; VAR_8 < 6; VAR_8++)
   VAR_5[VAR_8] = (u8) (VAR_10 >> ((5 - VAR_8) * 8));
 } else {
  FUNC_0(&VAR_4->pdev->dev,
   "Failed to get mac address%d\n", VAR_7);
  VAR_7 = -VAR_1;
 }
 FUNC_2(&VAR_9);
 return VAR_7;
}
