
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct qlcnic_nic_req {void** words; void* req_hdr; void* qhdr; } ;
struct qlcnic_adapter {scalar_t__ portnum; } ;
struct cmd_desc_type0 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct qlcnic_nic_req*,int ,int) ;
 int FUNC_2 (struct qlcnic_adapter*,struct cmd_desc_type0*,int) ;

int FUNC_3(struct qlcnic_adapter *VAR_2, u32 VAR_3)
{
 struct qlcnic_nic_req VAR_4;
 u64 VAR_5;

 FUNC_1(&VAR_4, 0, sizeof(struct qlcnic_nic_req));

 VAR_4.qhdr = FUNC_0(VAR_1 << 23);

 VAR_5 = VAR_0 |
   ((u64)VAR_2->portnum << 16);
 VAR_4.req_hdr = FUNC_0(VAR_5);

 VAR_4.words[0] = FUNC_0(VAR_3);

 return FUNC_2(VAR_2,
    (struct cmd_desc_type0 *)&VAR_4, 1);
}
