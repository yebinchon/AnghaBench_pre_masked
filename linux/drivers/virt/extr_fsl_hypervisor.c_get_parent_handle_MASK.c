
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 struct device_node* FUNC_1 (struct device_node*) ;
 int* FUNC_2 (struct device_node*,char*,int*) ;
 int FUNC_3 (struct device_node*) ;

__attribute__((used)) static int FUNC_4(struct device_node *VAR_1)
{
 struct device_node *VAR_2;
 const uint32_t *VAR_3;
 uint32_t VAR_4;
 int VAR_5;

 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2)

  return -VAR_0;





 VAR_3 = FUNC_2(VAR_2, "hv-handle", &VAR_5);
 if (!VAR_3)
  VAR_3 = FUNC_2(VAR_2, "reg", &VAR_5);

 if (!VAR_3 || (VAR_5 != sizeof(uint32_t))) {

  FUNC_3(VAR_2);
  return -VAR_0;
 }

 VAR_4 = FUNC_0(VAR_3);
 FUNC_3(VAR_2);

 return VAR_4;
}
