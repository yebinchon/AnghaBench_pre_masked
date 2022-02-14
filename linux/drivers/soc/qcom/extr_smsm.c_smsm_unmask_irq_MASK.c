
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smsm_entry {scalar_t__ subscription; int irq_enabled; struct qcom_smsm* smsm; } ;
struct qcom_smsm {scalar_t__ local_host; } ;
struct irq_data {int dummy; } ;
typedef int irq_hw_number_t ;


 int FUNC_0 (int ) ;
 struct smsm_entry* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_0)
{
 struct smsm_entry *VAR_1 = FUNC_1(VAR_0);
 irq_hw_number_t VAR_2 = FUNC_2(VAR_0);
 struct qcom_smsm *VAR_3 = VAR_1->smsm;
 u32 VAR_4;

 FUNC_4(VAR_2, VAR_1->irq_enabled);

 if (VAR_1->subscription) {
  VAR_4 = FUNC_3(VAR_1->subscription + VAR_3->local_host);
  VAR_4 |= FUNC_0(VAR_2);
  FUNC_5(VAR_4, VAR_1->subscription + VAR_3->local_host);
 }
}
