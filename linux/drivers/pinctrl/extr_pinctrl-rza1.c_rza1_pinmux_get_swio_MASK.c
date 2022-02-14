
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rza1_swio_pin {unsigned int port; unsigned int pin; unsigned int func; int input; } ;
struct rza1_swio_entry {unsigned int npins; struct rza1_swio_pin* pins; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(unsigned int VAR_1,
           unsigned int VAR_2,
           unsigned int VAR_3,
           const struct rza1_swio_entry *VAR_4)
{
 const struct rza1_swio_pin *VAR_5;
 unsigned int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_4->npins; ++VAR_6) {
  VAR_5 = &VAR_4->pins[VAR_6];
  if (VAR_5->port == VAR_1 && VAR_5->pin == VAR_2 &&
      VAR_5->func == VAR_3)
   return VAR_5->input;
 }

 return -VAR_0;
}
