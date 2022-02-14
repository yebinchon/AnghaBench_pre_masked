
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_runstate_info {int * time; } ;


 int VAR_0 ;
 scalar_t__* FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (struct vcpu_runstate_info*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct vcpu_runstate_info *VAR_1,
       unsigned int VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_1, VAR_2);

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
  VAR_1->time[VAR_3] += FUNC_0(VAR_0, VAR_2)[VAR_3];
}
