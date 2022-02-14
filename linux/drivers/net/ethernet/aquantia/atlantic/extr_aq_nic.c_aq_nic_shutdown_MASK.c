
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_nic_s {int ndev; } ;


 int FUNC_0 (struct aq_nic_s*) ;
 int FUNC_1 (struct aq_nic_s*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(struct aq_nic_s *VAR_0)
{
 int VAR_1 = 0;

 if (!VAR_0->ndev)
  return;

 FUNC_4();

 FUNC_2(VAR_0->ndev);

 if (FUNC_3(VAR_0->ndev)) {
  VAR_1 = FUNC_1(VAR_0);
  if (VAR_1 < 0)
   goto err_exit;
 }
 FUNC_0(VAR_0);

err_exit:
 FUNC_5();
}
