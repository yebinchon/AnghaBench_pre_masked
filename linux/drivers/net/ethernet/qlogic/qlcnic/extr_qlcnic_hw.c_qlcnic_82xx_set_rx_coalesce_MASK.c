
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct qlcnic_nic_req {void** words; void* req_hdr; void* qhdr; } ;
struct qlcnic_adapter {TYPE_3__* netdev; TYPE_2__* ahw; scalar_t__ portnum; } ;
struct cmd_desc_type0 {int dummy; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int rx_packets; int timer_out; scalar_t__ sts_ring_mask; scalar_t__ type; scalar_t__ rx_time_us; scalar_t__ flag; } ;
struct TYPE_5__ {TYPE_1__ coal; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct qlcnic_nic_req*,int ,int) ;
 int FUNC_3 (struct qlcnic_adapter*,struct cmd_desc_type0*,int) ;

int FUNC_4(struct qlcnic_adapter *VAR_2)
{
 struct qlcnic_nic_req VAR_3;
 int VAR_4;

 FUNC_2(&VAR_3, 0, sizeof(struct qlcnic_nic_req));

 VAR_3.qhdr = FUNC_0(VAR_1 << 23);

 VAR_3.req_hdr = FUNC_0(VAR_0 |
  ((u64) VAR_2->portnum << 16));

 VAR_3.words[0] = FUNC_0(((u64) VAR_2->ahw->coal.flag) << 32);
 VAR_3.words[2] = FUNC_0(VAR_2->ahw->coal.rx_packets |
   ((u64) VAR_2->ahw->coal.rx_time_us) << 16);
 VAR_3.words[5] = FUNC_0(VAR_2->ahw->coal.timer_out |
   ((u64) VAR_2->ahw->coal.type) << 32 |
   ((u64) VAR_2->ahw->coal.sts_ring_mask) << 40);
 VAR_4 = FUNC_3(VAR_2, (struct cmd_desc_type0 *)&VAR_3, 1);
 if (VAR_4 != 0)
  FUNC_1(&VAR_2->netdev->dev,
   "Could not send interrupt coalescing parameters\n");

 return VAR_4;
}
