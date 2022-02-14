
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_6__ {int* arg; } ;
struct TYPE_4__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_3__ rsp; TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_2__* pdev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,char*,int,int) ;
 scalar_t__ FUNC_1 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_cmd_args*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 int FUNC_4 (struct qlcnic_adapter*,int) ;
 int FUNC_5 (struct qlcnic_adapter*,int) ;
 int FUNC_6 (struct qlcnic_adapter*,int,int) ;

__attribute__((used)) static int FUNC_7(struct qlcnic_adapter *VAR_3,
     u8 VAR_4, u16 VAR_5)
{
 struct qlcnic_cmd_args VAR_6;
 int VAR_7;
 int VAR_8;

 if (FUNC_1(&VAR_6, VAR_3, VAR_2))
  return -VAR_1;

 if (VAR_4) {
  VAR_6.req.arg[3] = VAR_5 << 8;
 } else {
  VAR_8 = FUNC_4(VAR_3, VAR_5);
  if (VAR_8 < 0) {
   VAR_7 = -VAR_0;
   goto out;
  }
  VAR_6.req.arg[3] = ((VAR_8 & 0xffff) << 8) | 1;
 }

 VAR_7 = FUNC_3(VAR_3, &VAR_6);
 if (VAR_7) {
  FUNC_0(&VAR_3->pdev->dev,
   "Failed %s vport, err %d for func 0x%x\n",
   (VAR_4 ? "enable" : "disable"), VAR_7, VAR_5);
  goto out;
 }

 if (VAR_4) {
  VAR_8 = VAR_6.rsp.arg[2] & 0xffff;
  FUNC_6(VAR_3, VAR_8, VAR_5);
 } else {
  FUNC_5(VAR_3, VAR_5);
 }

out:
 FUNC_2(&VAR_6);
 return VAR_7;
}
