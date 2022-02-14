
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {char* value; int length; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct property* FUNC_0 (struct device_node const*,char const*,int *) ;
 int FUNC_1 (char*,char const*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*,int) ;

int FUNC_4(const struct device_node *VAR_3, const char *VAR_4,
        const char *VAR_5)
{
 const struct property *VAR_6 = FUNC_0(VAR_3, VAR_4, ((void*)0));
 size_t VAR_7;
 int VAR_8;
 const char *VAR_9, *VAR_10;

 if (!VAR_6)
  return -VAR_1;
 if (!VAR_6->value)
  return -VAR_2;

 VAR_9 = VAR_6->value;
 VAR_10 = VAR_9 + VAR_6->length;

 for (VAR_8 = 0; VAR_9 < VAR_10; VAR_8++, VAR_9 += VAR_7) {
  VAR_7 = FUNC_3(VAR_9, VAR_10 - VAR_9) + 1;
  if (VAR_9 + VAR_7 > VAR_10)
   return -VAR_0;
  FUNC_1("comparing %s with %s\n", VAR_5, VAR_9);
  if (FUNC_2(VAR_5, VAR_9) == 0)
   return VAR_8;
 }
 return -VAR_2;
}
