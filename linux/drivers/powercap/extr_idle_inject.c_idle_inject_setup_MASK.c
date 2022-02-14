
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int sched_priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct sched_param*) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_3)
{
 struct sched_param VAR_4 = { .sched_priority = VAR_0 / 2 };

 FUNC_0(VAR_2, VAR_1, &VAR_4);
}
