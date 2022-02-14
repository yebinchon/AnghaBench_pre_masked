
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rza1_bidir_pin {unsigned int pin; unsigned int func; } ;
struct rza1_bidir_entry {unsigned int npins; struct rza1_bidir_pin* pins; } ;



__attribute__((used)) static inline bool FUNC_0(unsigned int VAR_0,
      unsigned int VAR_1,
      unsigned int VAR_2,
      const struct rza1_bidir_entry *VAR_3)
{
 const struct rza1_bidir_entry *VAR_4 = &VAR_3[VAR_0];
 const struct rza1_bidir_pin *VAR_5;
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4->npins; ++VAR_6) {
  VAR_5 = &VAR_4->pins[VAR_6];
  if (VAR_5->pin == VAR_1 && VAR_5->func == VAR_2)
   return 1;
 }

 return 0;
}
