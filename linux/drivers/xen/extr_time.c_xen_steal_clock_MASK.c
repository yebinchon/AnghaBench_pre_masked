
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vcpu_runstate_info {scalar_t__* time; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct vcpu_runstate_info*,int) ;

u64 FUNC_1(int VAR_2)
{
 struct vcpu_runstate_info VAR_3;

 FUNC_0(&VAR_3, VAR_2);
 return VAR_3.time[VAR_1] + VAR_3.time[VAR_0];
}
