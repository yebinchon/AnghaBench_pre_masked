
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvnic_sub_crq_queue {struct ibmvnic_adapter* adapter; } ;
struct ibmvnic_adapter {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct ibmvnic_adapter*,struct ibmvnic_sub_crq_queue*) ;
 int FUNC_1 (struct ibmvnic_adapter*,struct ibmvnic_sub_crq_queue*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct ibmvnic_sub_crq_queue *VAR_3 = VAR_2;
 struct ibmvnic_adapter *VAR_4 = VAR_3->adapter;

 FUNC_0(VAR_4, VAR_3);
 FUNC_1(VAR_4, VAR_3);

 return VAR_0;
}
