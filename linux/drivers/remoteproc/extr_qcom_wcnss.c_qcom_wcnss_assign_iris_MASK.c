
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_wcnss {int use_48mhz_xo; int iris_lock; struct qcom_iris* iris; } ;
struct qcom_iris {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct qcom_wcnss *VAR_0,
       struct qcom_iris *VAR_1,
       bool VAR_2)
{
 FUNC_0(&VAR_0->iris_lock);

 VAR_0->iris = VAR_1;
 VAR_0->use_48mhz_xo = VAR_2;

 FUNC_1(&VAR_0->iris_lock);
}
