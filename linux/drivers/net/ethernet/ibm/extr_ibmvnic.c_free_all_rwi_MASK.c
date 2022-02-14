
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvnic_rwi {int dummy; } ;
struct ibmvnic_adapter {int dummy; } ;


 struct ibmvnic_rwi* FUNC_0 (struct ibmvnic_adapter*) ;
 int FUNC_1 (struct ibmvnic_rwi*) ;

__attribute__((used)) static void FUNC_2(struct ibmvnic_adapter *VAR_0)
{
 struct ibmvnic_rwi *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 while (VAR_1) {
  FUNC_1(VAR_1);
  VAR_1 = FUNC_0(VAR_0);
 }
}
