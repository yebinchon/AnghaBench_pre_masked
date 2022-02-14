
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct qlcnic_nic_req {void** words; void* req_hdr; void* qhdr; } ;
struct qlcnic_ipaddr {int ipv4; } ;
struct qlcnic_adapter {TYPE_1__* netdev; scalar_t__ portnum; } ;
struct cmd_desc_type0 {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,char*,char*,int ) ;
 int FUNC_2 (struct qlcnic_nic_req*,int ,int) ;
 int FUNC_3 (struct qlcnic_adapter*,struct cmd_desc_type0*,int) ;

void FUNC_4(struct qlcnic_adapter *VAR_3,
          __be32 VAR_4, int VAR_5)
{
 struct qlcnic_nic_req VAR_6;
 struct qlcnic_ipaddr *VAR_7;
 u64 VAR_8;
 int VAR_9;

 FUNC_2(&VAR_6, 0, sizeof(struct qlcnic_nic_req));
 VAR_6.qhdr = FUNC_0(VAR_1 << 23);

 VAR_8 = VAR_0 | ((u64)VAR_3->portnum << 16);
 VAR_6.req_hdr = FUNC_0(VAR_8);

 VAR_6.words[0] = FUNC_0(VAR_5);
 VAR_7 = (struct qlcnic_ipaddr *)&VAR_6.words[1];
 VAR_7->ipv4 = VAR_4;

 VAR_9 = FUNC_3(VAR_3, (struct cmd_desc_type0 *)&VAR_6, 1);
 if (VAR_9 != 0)
  FUNC_1(&VAR_3->netdev->dev,
    "could not notify %s IP 0x%x request\n",
    (VAR_5 == VAR_2) ? "Add" : "Remove", VAR_4);
}
