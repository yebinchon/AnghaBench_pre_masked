
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {char* value; scalar_t__ length; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct property* FUNC_0 (struct device_node const*,char const*,int *) ;
 scalar_t__ FUNC_1 (char*,scalar_t__) ;

int FUNC_2(const struct device_node *VAR_3, const char *VAR_4,
    const char **VAR_5)
{
 const struct property *VAR_6 = FUNC_0(VAR_3, VAR_4, ((void*)0));
 if (!VAR_6)
  return -VAR_1;
 if (!VAR_6->value)
  return -VAR_2;
 if (FUNC_1(VAR_6->value, VAR_6->length) >= VAR_6->length)
  return -VAR_0;
 *VAR_5 = VAR_6->value;
 return 0;
}
