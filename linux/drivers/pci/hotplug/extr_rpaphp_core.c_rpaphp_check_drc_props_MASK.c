
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int* FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (struct device_node*,char*,char*,unsigned int const) ;
 int FUNC_3 (struct device_node*,char*,char*,unsigned int const) ;

int FUNC_4(struct device_node *VAR_2, char *VAR_3,
   char *VAR_4)
{
 const unsigned int *VAR_5;

 VAR_5 = FUNC_1(VAR_2, "ibm,my-drc-index", ((void*)0));
 if (!VAR_5) {

  return -VAR_0;
 }

 if (FUNC_0(VAR_1))
  return FUNC_3(VAR_2, VAR_3, VAR_4,
      *VAR_5);
 else
  return FUNC_2(VAR_2, VAR_3, VAR_4,
      *VAR_5);
}
