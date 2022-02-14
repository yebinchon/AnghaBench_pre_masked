
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_rport {scalar_t__ state; int dev_loss_work; int fast_io_fail_work; int reconnect_work; int mutex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct srp_rport*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct srp_rport*,int ) ;

void FUNC_5(struct srp_rport *VAR_2)
{
 FUNC_2(&VAR_2->mutex);
 if (VAR_2->state == VAR_0)
  FUNC_0(VAR_2);
 FUNC_4(VAR_2, VAR_1);
 FUNC_3(&VAR_2->mutex);

 FUNC_1(&VAR_2->reconnect_work);
 FUNC_1(&VAR_2->fast_io_fail_work);
 FUNC_1(&VAR_2->dev_loss_work);
}
