
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_ethqos {unsigned int speed; } ;


 int FUNC_0 (struct qcom_ethqos*) ;
 int FUNC_1 (struct qcom_ethqos*,unsigned int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, unsigned int VAR_1)
{
 struct qcom_ethqos *VAR_2 = VAR_0;

 VAR_2->speed = VAR_1;
 FUNC_1(VAR_2, VAR_1);
 FUNC_0(VAR_2);
}
