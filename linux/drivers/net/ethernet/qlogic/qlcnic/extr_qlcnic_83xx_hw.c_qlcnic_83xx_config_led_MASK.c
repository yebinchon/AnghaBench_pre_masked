
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_6__ {void** arg; } ;
struct TYPE_5__ {void** arg; } ;
struct qlcnic_cmd_args {TYPE_2__ req; TYPE_1__ rsp; } ;
struct qlcnic_adapter {TYPE_4__* pdev; TYPE_3__* ahw; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {void** mbox_reg; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_3 (struct qlcnic_cmd_args*) ;
 int FUNC_4 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

int FUNC_5(struct qlcnic_adapter *VAR_4, u32 VAR_5,
      u32 VAR_6)
{
 struct qlcnic_cmd_args VAR_7;
 u32 VAR_8;
 int VAR_9, VAR_10 = 0;

 if (VAR_5) {

  VAR_10 = FUNC_2(&VAR_7, VAR_4,
            VAR_0);
  if (VAR_10)
   return VAR_10;

  VAR_10 = FUNC_4(VAR_4, &VAR_7);
  if (VAR_10) {
   FUNC_1(&VAR_4->pdev->dev,
    "Get led config failed.\n");
   goto mbx_err;
  } else {
   for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
    VAR_4->ahw->mbox_reg[VAR_9] = VAR_7.rsp.arg[VAR_9+1];
  }
  FUNC_3(&VAR_7);

  VAR_8 = (FUNC_0(VAR_3) << 16) |
     FUNC_0(VAR_3);
  VAR_10 = FUNC_2(&VAR_7, VAR_4,
            VAR_1);
  if (VAR_10)
   return VAR_10;

  VAR_7.req.arg[1] = VAR_8;
  VAR_7.req.arg[2] = VAR_8;
  VAR_7.req.arg[3] = VAR_8;
  if (VAR_6)
   VAR_7.req.arg[4] = VAR_2;
  VAR_10 = FUNC_4(VAR_4, &VAR_7);
  if (VAR_10) {
   FUNC_1(&VAR_4->pdev->dev,
    "Set led config failed.\n");
  }
mbx_err:
  FUNC_3(&VAR_7);
  return VAR_10;

 } else {

  VAR_10 = FUNC_2(&VAR_7, VAR_4,
            VAR_1);
  if (VAR_10)
   return VAR_10;

  VAR_7.req.arg[1] = VAR_4->ahw->mbox_reg[0];
  VAR_7.req.arg[2] = VAR_4->ahw->mbox_reg[1];
  VAR_7.req.arg[3] = VAR_4->ahw->mbox_reg[2];
  if (VAR_6)
   VAR_7.req.arg[4] = VAR_4->ahw->mbox_reg[3];
  VAR_10 = FUNC_4(VAR_4, &VAR_7);
  if (VAR_10)
   FUNC_1(&VAR_4->pdev->dev,
    "Restoring led config failed.\n");
  FUNC_3(&VAR_7);
  return VAR_10;
 }
}
