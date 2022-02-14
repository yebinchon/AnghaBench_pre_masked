
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {char* name; } ;


 scalar_t__ FUNC_0 (struct device_node*,char*,char const**) ;

__attribute__((used)) static const char *FUNC_1(struct device_node *VAR_0)
{
 const char *VAR_1;

 if (FUNC_0(VAR_0, "label", &VAR_1) < 0)
  VAR_1 = VAR_0->name;
 if (!VAR_1)
  VAR_1 = "unknown";
 return VAR_1;
}
