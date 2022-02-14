
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct qlcnic_hardware_context {int num_msix; TYPE_3__* intr_tbl; } ;
struct TYPE_5__ {int* arg; } ;
struct TYPE_4__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ rsp; TYPE_1__ req; } ;
struct qlcnic_adapter {struct net_device* netdev; struct qlcnic_hardware_context* ahw; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int type; int id; int enabled; int src; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct net_device*,char*,char*,int) ;
 int FUNC_3 (struct net_device*,char*,int) ;
 int FUNC_4 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_5 (struct qlcnic_cmd_args*) ;
 int FUNC_6 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

int FUNC_7(struct qlcnic_adapter *VAR_4, u8 VAR_5)
{
 struct qlcnic_hardware_context *VAR_6 = VAR_4->ahw;
 struct net_device *VAR_7 = VAR_4->netdev;
 struct qlcnic_cmd_args VAR_8;
 u32 VAR_9, VAR_10;
 int VAR_11, VAR_12 = 0;

 for (VAR_11 = 0; VAR_11 < VAR_6->num_msix; VAR_11++) {
  VAR_12 = FUNC_4(&VAR_8, VAR_4,
         VAR_0);
  if (VAR_12)
   return VAR_12;
  VAR_9 = VAR_5 ? VAR_1 : VAR_2;
  VAR_10 = VAR_9 | (VAR_6->intr_tbl[VAR_11].type << 4);
  if (VAR_6->intr_tbl[VAR_11].type == VAR_3)
   VAR_10 |= (VAR_6->intr_tbl[VAR_11].id << 16);
  VAR_8.req.arg[1] = VAR_10;
  VAR_12 = FUNC_6(VAR_4, &VAR_8);
  if (VAR_12) {
   FUNC_2(VAR_7, "Failed to %s interrupts %d\n",
       VAR_5 == VAR_1 ? "Add" :
       "Delete", VAR_12);
   FUNC_5(&VAR_8);
   return VAR_12;
  }
  VAR_10 = VAR_8.rsp.arg[1];
  if (FUNC_0(VAR_10)) {
   FUNC_3(VAR_7,
        "failed to configure interrupt for %d\n",
        VAR_6->intr_tbl[VAR_11].id);
   continue;
  }
  if (VAR_5) {
   VAR_6->intr_tbl[VAR_11].id = FUNC_1(VAR_10);
   VAR_6->intr_tbl[VAR_11].enabled = 1;
   VAR_6->intr_tbl[VAR_11].src = VAR_8.rsp.arg[2];
  } else {
   VAR_6->intr_tbl[VAR_11].id = VAR_11;
   VAR_6->intr_tbl[VAR_11].enabled = 0;
   VAR_6->intr_tbl[VAR_11].src = 0;
  }
  FUNC_5(&VAR_8);
 }

 return VAR_12;
}
