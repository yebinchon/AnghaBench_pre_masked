
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_pctl_data {unsigned int* output_delays; int noutput_delays; unsigned int* input_delays; int ninput_delays; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static unsigned long FUNC_1(unsigned int VAR_0,
 const struct st_pctl_data *VAR_1, unsigned long VAR_2)
{
 const unsigned int *VAR_3;
 int VAR_4;

 if (VAR_2) {
  VAR_3 = VAR_1->output_delays;
  VAR_4 = VAR_1->noutput_delays;
 } else {
  VAR_3 = VAR_1->input_delays;
  VAR_4 = VAR_1->ninput_delays;
 }

 if (VAR_0 < VAR_4) {
  return VAR_3[VAR_0];
 } else {
  FUNC_0("Delay not found in/out delay list\n");
  return 0;
 }
}
