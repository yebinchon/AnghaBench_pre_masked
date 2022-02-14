
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_cap {int num_qps; } ;
struct hinic_hwdev {struct hinic_cap nic_cap; } ;



int FUNC_0(struct hinic_hwdev *VAR_0)
{
 struct hinic_cap *VAR_1 = &VAR_0->nic_cap;

 return VAR_1->num_qps;
}
