
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_q6v5 {int handover_issued; int (* handover ) (struct qcom_q6v5*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct qcom_q6v5*) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct qcom_q6v5 *VAR_3 = VAR_2;

 if (VAR_3->handover)
  VAR_3->handover(VAR_3);

 VAR_3->handover_issued = 1;

 return VAR_0;
}
