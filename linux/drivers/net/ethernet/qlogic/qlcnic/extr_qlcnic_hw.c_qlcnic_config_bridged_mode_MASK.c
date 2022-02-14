
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct qlcnic_nic_req {void** words; void* req_hdr; void* qhdr; } ;
struct qlcnic_adapter {int flags; TYPE_1__* netdev; scalar_t__ portnum; } ;
struct cmd_desc_type0 {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct qlcnic_nic_req*,int ,int) ;
 int FUNC_3 (struct qlcnic_adapter*,struct cmd_desc_type0*,int) ;

int FUNC_4(struct qlcnic_adapter *VAR_3, u32 VAR_4)
{
 struct qlcnic_nic_req VAR_5;
 u64 VAR_6;
 int VAR_7;

 if (!!(VAR_3->flags & VAR_0) == VAR_4)
  return 0;

 FUNC_2(&VAR_5, 0, sizeof(struct qlcnic_nic_req));

 VAR_5.qhdr = FUNC_0(VAR_2 << 23);

 VAR_6 = VAR_1 |
  ((u64)VAR_3->portnum << 16);
 VAR_5.req_hdr = FUNC_0(VAR_6);

 VAR_5.words[0] = FUNC_0(VAR_4);

 VAR_7 = FUNC_3(VAR_3, (struct cmd_desc_type0 *)&VAR_5, 1);
 if (VAR_7 != 0)
  FUNC_1(&VAR_3->netdev->dev,
   "Could not send configure bridge mode request\n");

 VAR_3->flags ^= VAR_0;

 return VAR_7;
}
