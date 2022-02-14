
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct device_node {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (struct device_node*,int ) ;
 int FUNC_2 (struct device_node*,char*) ;
 int * FUNC_3 (struct device_node*,char*,int *) ;
 struct device_node* VAR_1 ;
 int FUNC_4 (char*,struct device_node*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_5(void)
{
 struct device_node *VAR_4 = VAR_1;
 const uint32_t *VAR_5;





 if (!VAR_4 || !FUNC_2(VAR_4, "epapr,hv-byte-channel"))
  return 0;

 VAR_3 = FUNC_1(VAR_4, 0);
 if (VAR_3 == VAR_0) {
  FUNC_4("ehv-bc: no 'interrupts' property in %pOF node\n", VAR_4);
  return 0;
 }




 VAR_5 = FUNC_3(VAR_4, "hv-handle", ((void*)0));
 if (!VAR_5) {
  FUNC_4("ehv-bc: no 'hv-handle' property in %pOFn node\n",
         VAR_4);
  return 0;
 }
 VAR_2 = FUNC_0(*VAR_5);
 return 1;
}
