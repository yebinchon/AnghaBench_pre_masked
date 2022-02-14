
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bbc_cpu_temperature {int sample_tick; scalar_t__ curr_cpu_temp; void* avg_cpu_temp; scalar_t__ curr_amb_temp; void* avg_amb_temp; } ;
typedef void* s8 ;


 int FUNC_0 (struct bbc_cpu_temperature*,unsigned long*,int ) ;
 int FUNC_1 (struct bbc_cpu_temperature*,unsigned long*,int ) ;

__attribute__((used)) static void FUNC_2(struct bbc_cpu_temperature *VAR_0, unsigned long *VAR_1)
{
 VAR_0->avg_amb_temp = (s8)((int)((int)VAR_0->avg_amb_temp + (int)VAR_0->curr_amb_temp) / 2);
 VAR_0->avg_cpu_temp = (s8)((int)((int)VAR_0->avg_cpu_temp + (int)VAR_0->curr_cpu_temp) / 2);

 FUNC_0(VAR_0, VAR_1, VAR_0->sample_tick);
 FUNC_1(VAR_0, VAR_1, VAR_0->sample_tick);

 VAR_0->sample_tick++;
}
