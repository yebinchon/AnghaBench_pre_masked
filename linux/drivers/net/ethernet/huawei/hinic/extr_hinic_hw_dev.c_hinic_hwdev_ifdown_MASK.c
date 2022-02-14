
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_cap {int num_qps; } ;
struct hinic_func_to_io {int dummy; } ;
struct hinic_hwdev {struct hinic_cap nic_cap; struct hinic_func_to_io func_to_io; } ;


 int FUNC_0 (struct hinic_hwdev*) ;
 int FUNC_1 (struct hinic_func_to_io*,int ) ;
 int FUNC_2 (struct hinic_func_to_io*) ;

void FUNC_3(struct hinic_hwdev *VAR_0)
{
 struct hinic_func_to_io *VAR_1 = &VAR_0->func_to_io;
 struct hinic_cap *VAR_2 = &VAR_0->nic_cap;

 FUNC_0(VAR_0);

 FUNC_1(VAR_1, VAR_2->num_qps);
 FUNC_2(VAR_1);
}
