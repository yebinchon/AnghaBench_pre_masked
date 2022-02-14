
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct netxen_adapter {scalar_t__ portnum; } ;
struct cmd_desc_type0 {int dummy; } ;
struct TYPE_3__ {void** words; void* req_hdr; void* qhdr; } ;
typedef TYPE_1__ nx_nic_req_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (struct netxen_adapter*,struct cmd_desc_type0*,int) ;

__attribute__((used)) static int FUNC_3(struct netxen_adapter *VAR_2, u32 VAR_3)
{
 nx_nic_req_t VAR_4;
 u64 VAR_5;

 FUNC_1(&VAR_4, 0, sizeof(nx_nic_req_t));

 VAR_4.qhdr = FUNC_0(VAR_0 << 23);

 VAR_5 = VAR_1 |
   ((u64)VAR_2->portnum << 16);
 VAR_4.req_hdr = FUNC_0(VAR_5);

 VAR_4.words[0] = FUNC_0(VAR_3);

 return FUNC_2(VAR_2,
    (struct cmd_desc_type0 *)&VAR_4, 1);
}
