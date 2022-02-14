
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_bandgap_data {int adc_start_val; int adc_end_val; int* conv_table; } ;
struct ti_bandgap {struct ti_bandgap_data* conf; } ;


 int VAR_0 ;

__attribute__((used)) static
int FUNC_0(struct ti_bandgap *VAR_1, int VAR_2, int *VAR_3)
{
 const struct ti_bandgap_data *VAR_4 = VAR_1->conf;


 if (VAR_2 < VAR_4->adc_start_val || VAR_2 > VAR_4->adc_end_val)
  return -VAR_0;

 *VAR_3 = VAR_1->conf->conv_table[VAR_2 - VAR_4->adc_start_val];
 return 0;
}
