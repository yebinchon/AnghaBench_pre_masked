
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_trip {int temperature; int hysteresis; struct device_node* np; int type; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device_node*,char*,int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct device_node*,int *) ;

__attribute__((used)) static int FUNC_4(struct device_node *VAR_0,
        struct thermal_trip *VAR_1)
{
 int VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, "temperature", &VAR_2);
 if (VAR_3 < 0) {
  FUNC_2("missing temperature property\n");
  return VAR_3;
 }
 VAR_1->temperature = VAR_2;

 VAR_3 = FUNC_1(VAR_0, "hysteresis", &VAR_2);
 if (VAR_3 < 0) {
  FUNC_2("missing hysteresis property\n");
  return VAR_3;
 }
 VAR_1->hysteresis = VAR_2;

 VAR_3 = FUNC_3(VAR_0, &VAR_1->type);
 if (VAR_3 < 0) {
  FUNC_2("wrong trip type property\n");
  return VAR_3;
 }


 VAR_1->np = VAR_0;
 FUNC_0(VAR_0);

 return 0;
}
