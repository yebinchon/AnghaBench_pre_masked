
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_host_sds_ring {int napi; struct qlcnic_adapter* adapter; } ;
struct qlcnic_adapter {int dummy; } ;
typedef scalar_t__ irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct qlcnic_host_sds_ring *VAR_4 = VAR_3;
 struct qlcnic_adapter *VAR_5 = VAR_4->adapter;

 if (FUNC_1(VAR_5) == VAR_1)
  return VAR_1;

 FUNC_0(&VAR_4->napi);

 return VAR_0;
}
