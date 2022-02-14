
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfreq_cooling_device {int freq_table_size; unsigned long* freq_table; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static unsigned long
FUNC_0(struct devfreq_cooling_device *VAR_1, unsigned long VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->freq_table_size; VAR_3++) {
  if (VAR_1->freq_table[VAR_3] == VAR_2)
   return VAR_3;
 }

 return VAR_0;
}
