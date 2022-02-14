
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (struct device_node*,char*,int*) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 () ;

unsigned int FUNC_3(void)
{
 struct device_node *VAR_3;
 int VAR_4;
 const u32 *VAR_5;
 unsigned int VAR_6;

 if (VAR_2)
  return VAR_2;

 VAR_3 = FUNC_2();
 if (!VAR_3)
  return VAR_2;

 VAR_5 = FUNC_0(VAR_3, "brg-frequency", &VAR_4);
 if (VAR_5 && VAR_4 == sizeof(*VAR_5))
  VAR_2 = *VAR_5;

 FUNC_1(VAR_3);


 VAR_6 = VAR_2 % VAR_0;
 if (VAR_6) {
  if (VAR_6 < VAR_1)
   VAR_2 -= VAR_6;
  else if (VAR_6 > (VAR_0 - VAR_1))
   VAR_2 += VAR_0 - VAR_6;
 }

 return VAR_2;
}
