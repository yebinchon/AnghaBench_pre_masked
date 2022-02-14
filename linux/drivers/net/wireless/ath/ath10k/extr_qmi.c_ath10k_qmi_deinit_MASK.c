
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_snoc {struct ath10k_qmi* qmi; } ;
struct ath10k_qmi {int event_wq; int event_work; int qmi_hdl; } ;
struct ath10k {int dummy; } ;


 struct ath10k_snoc* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ath10k_qmi*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct ath10k *VAR_0)
{
 struct ath10k_snoc *VAR_1 = FUNC_0(VAR_0);
 struct ath10k_qmi *VAR_2 = VAR_1->qmi;

 FUNC_4(&VAR_2->qmi_hdl);
 FUNC_1(&VAR_2->event_work);
 FUNC_2(VAR_2->event_wq);
 FUNC_3(VAR_2);
 VAR_1->qmi = ((void*)0);

 return 0;
}
