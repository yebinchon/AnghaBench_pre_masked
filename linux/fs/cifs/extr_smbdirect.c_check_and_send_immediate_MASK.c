
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbd_connection {scalar_t__ transport_status; int send_immediate; int receive_credit_target; int send_immediate_work; int workqueue; int receive_credits; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct smbd_connection *VAR_1)
{
 if (VAR_1->transport_status != VAR_0)
  return;

 VAR_1->send_immediate = 1;





 if (FUNC_0(&VAR_1->receive_credits) <
  VAR_1->receive_credit_target - 1)
  FUNC_1(
   VAR_1->workqueue, &VAR_1->send_immediate_work, 0);
}
