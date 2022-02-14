
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_pctl_data {unsigned int* output_delays; int noutput_delays; unsigned int* input_delays; int ninput_delays; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (char*,unsigned int,unsigned int const) ;

__attribute__((used)) static unsigned long FUNC_3(unsigned int VAR_1,
 const struct st_pctl_data *VAR_2, unsigned long VAR_3)
{
 const unsigned int *VAR_4;
 int VAR_5, VAR_6, VAR_7 = -1;
 unsigned int VAR_8 = VAR_0;

 if (FUNC_0(VAR_3)) {
  VAR_4 = VAR_2->output_delays;
  VAR_5 = VAR_2->noutput_delays;
 } else {
  VAR_4 = VAR_2->input_delays;
  VAR_5 = VAR_2->ninput_delays;
 }

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  unsigned int VAR_9 = FUNC_1(VAR_1 - VAR_4[VAR_6]);

  if (VAR_9 == 0)
   return VAR_6;

  if (VAR_9 < VAR_8) {
   VAR_8 = VAR_9;
   VAR_7 = VAR_6;
  }
 }

 FUNC_2("Attempt to set delay %d, closest available %d\n",
      VAR_1, VAR_4[VAR_7]);

 return VAR_7;
}
