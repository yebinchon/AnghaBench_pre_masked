
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct qlcnic_nic_req {void** words; void* req_hdr; void* qhdr; } ;
struct qlcnic_adapter {TYPE_2__* netdev; TYPE_1__* ahw; scalar_t__ portnum; int state; } ;
struct cmd_desc_type0 {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int* extra_capability; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct qlcnic_nic_req*,int ,int) ;
 int FUNC_3 (struct qlcnic_adapter*,struct cmd_desc_type0*,int) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct qlcnic_adapter *VAR_6, int VAR_7)
{
 struct qlcnic_nic_req VAR_8;
 u64 VAR_9;
 int VAR_10;

 if (!FUNC_4(VAR_5, &VAR_6->state))
  return 0;

 FUNC_2(&VAR_8, 0, sizeof(struct qlcnic_nic_req));

 VAR_8.qhdr = FUNC_0(VAR_4 << 23);

 VAR_9 = VAR_3 | ((u64)VAR_6->portnum << 16);
 VAR_8.req_hdr = FUNC_0(VAR_9);

 VAR_9 = 0;
 if (VAR_7) {
  VAR_9 = VAR_0;
  if (VAR_6->ahw->extra_capability[0] &
      VAR_2)
   VAR_9 |= VAR_1;
 }

 VAR_8.words[0] = FUNC_0(VAR_9);

 VAR_10 = FUNC_3(VAR_6, (struct cmd_desc_type0 *)&VAR_8, 1);
 if (VAR_10 != 0)
  FUNC_1(&VAR_6->netdev->dev,
   "Could not send configure hw lro request\n");

 return VAR_10;
}
