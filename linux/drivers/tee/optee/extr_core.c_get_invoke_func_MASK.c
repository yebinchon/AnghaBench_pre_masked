
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef int optee_invoke_fn ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct device_node*,char*,char const**) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static optee_invoke_fn *FUNC_5(struct device_node *VAR_4)
{
 const char *VAR_5;

 FUNC_2("probing for conduit method from DT.\n");

 if (FUNC_1(VAR_4, "method", &VAR_5)) {
  FUNC_3("missing \"method\" property\n");
  return FUNC_0(-VAR_1);
 }

 if (!FUNC_4("hvc", VAR_5))
  return VAR_2;
 else if (!FUNC_4("smc", VAR_5))
  return VAR_3;

 FUNC_3("invalid \"method\" property: %s\n", VAR_5);
 return FUNC_0(-VAR_0);
}
