
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oprofile_cpu_buffer {int sample_lost_overflow; } ;


 int VAR_0 ;
 struct oprofile_cpu_buffer* FUNC_0 (int *) ;

void FUNC_1(void)
{
 struct oprofile_cpu_buffer *VAR_1 = FUNC_0(&VAR_0);

 VAR_1->sample_lost_overflow++;
}
