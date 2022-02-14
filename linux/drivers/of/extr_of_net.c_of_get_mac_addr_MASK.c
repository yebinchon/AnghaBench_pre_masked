
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {scalar_t__ length; void const* value; } ;
struct device_node {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void const*) ;
 struct property* FUNC_1 (struct device_node*,char const*,int *) ;

__attribute__((used)) static const void *FUNC_2(struct device_node *VAR_1, const char *VAR_2)
{
 struct property *VAR_3 = FUNC_1(VAR_1, VAR_2, ((void*)0));

 if (VAR_3 && VAR_3->length == VAR_0 && FUNC_0(VAR_3->value))
  return VAR_3->value;
 return ((void*)0);
}
