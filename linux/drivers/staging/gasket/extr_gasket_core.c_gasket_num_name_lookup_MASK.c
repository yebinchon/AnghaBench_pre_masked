
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
struct gasket_num_name {char const* snn_name; size_t snn_num; } ;



const char *FUNC_0(uint VAR_0,
       const struct gasket_num_name *VAR_1)
{
 uint VAR_2 = 0;

 while (VAR_1[VAR_2].snn_name) {
  if (VAR_0 == VAR_1[VAR_2].snn_num)
   break;
  ++VAR_2;
 }

 return VAR_1[VAR_2].snn_name;
}
