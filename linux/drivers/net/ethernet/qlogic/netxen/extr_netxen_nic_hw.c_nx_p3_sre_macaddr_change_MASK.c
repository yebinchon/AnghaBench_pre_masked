
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct netxen_adapter {scalar_t__ portnum; } ;
struct cmd_desc_type0 {int dummy; } ;
struct TYPE_4__ {int * words; void* req_hdr; void* qhdr; } ;
typedef TYPE_1__ nx_nic_req_t ;
struct TYPE_5__ {unsigned int op; int mac_addr; } ;
typedef TYPE_2__ nx_mac_req_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (struct netxen_adapter*,struct cmd_desc_type0*,int) ;

__attribute__((used)) static int
FUNC_4(struct netxen_adapter *VAR_3, u8 *VAR_4, unsigned VAR_5)
{
 nx_nic_req_t VAR_6;
 nx_mac_req_t *VAR_7;
 u64 VAR_8;

 FUNC_2(&VAR_6, 0, sizeof(nx_nic_req_t));
 VAR_6.qhdr = FUNC_0(VAR_2 << 23);

 VAR_8 = VAR_1 | ((u64)VAR_3->portnum << 16);
 VAR_6.req_hdr = FUNC_0(VAR_8);

 VAR_7 = (nx_mac_req_t *)&VAR_6.words[0];
 VAR_7->op = VAR_5;
 FUNC_1(VAR_7->mac_addr, VAR_4, VAR_0);

 return FUNC_3(VAR_3, (struct cmd_desc_type0 *)&VAR_6, 1);
}
