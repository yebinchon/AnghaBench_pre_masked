
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct aq_nic_s {int ndev; int power_state; } ;
struct TYPE_3__ {int event; } ;
typedef TYPE_1__ pm_message_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aq_nic_s*) ;
 int FUNC_1 (struct aq_nic_s*) ;
 int FUNC_2 (struct aq_nic_s*) ;
 int FUNC_3 (struct aq_nic_s*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

int FUNC_11(struct aq_nic_s *VAR_3, pm_message_t *VAR_4)
{
 int VAR_5 = 0;

 if (!FUNC_6(VAR_3->ndev)) {
  VAR_5 = 0;
  goto out;
 }
 FUNC_9();
 if (VAR_4->event & VAR_2 || VAR_4->event & VAR_1) {
  VAR_3->power_state = VAR_0;
  FUNC_5(VAR_3->ndev);
  FUNC_8(VAR_3->ndev);

  VAR_5 = FUNC_3(VAR_3);
  if (VAR_5 < 0)
   goto err_exit;

  FUNC_0(VAR_3);
 } else {
  VAR_5 = FUNC_1(VAR_3);
  if (VAR_5 < 0)
   goto err_exit;

  VAR_5 = FUNC_2(VAR_3);
  if (VAR_5 < 0)
   goto err_exit;

  FUNC_4(VAR_3->ndev);
  FUNC_7(VAR_3->ndev);
 }

err_exit:
 FUNC_10();
out:
 return VAR_5;
}
