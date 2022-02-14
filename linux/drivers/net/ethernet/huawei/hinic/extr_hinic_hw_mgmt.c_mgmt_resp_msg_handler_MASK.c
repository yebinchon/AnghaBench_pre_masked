
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_recv_msg {int recv_done; } ;
struct hinic_pf_to_mgmt {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct hinic_pf_to_mgmt *VAR_0,
      struct hinic_recv_msg *VAR_1)
{
 FUNC_1();

 FUNC_0(&VAR_1->recv_done);
}
