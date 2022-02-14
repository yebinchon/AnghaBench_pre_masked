
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct hinic_recv_msg {int dummy; } ;
struct hinic_pf_to_mgmt {struct hinic_recv_msg recv_resp_msg_from_mgmt; struct hinic_recv_msg recv_msg_from_mgmt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct hinic_pf_to_mgmt*,int *,struct hinic_recv_msg*) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, void *VAR_3, u8 VAR_4)
{
 struct hinic_pf_to_mgmt *VAR_5 = VAR_2;
 struct hinic_recv_msg *VAR_6;
 u64 *VAR_7 = (u64 *)VAR_3;

 VAR_6 = FUNC_0(*VAR_7, VAR_0) ==
     VAR_1 ?
     &VAR_5->recv_msg_from_mgmt :
     &VAR_5->recv_resp_msg_from_mgmt;

 FUNC_1(VAR_5, VAR_7, VAR_6);
}
