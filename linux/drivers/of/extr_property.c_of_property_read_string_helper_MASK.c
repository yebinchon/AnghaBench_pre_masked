
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
 int FUNC_1 (char const*,int) ;

int FUNC_2(const struct device_node *VAR_3,
       const char *VAR_4, const char **VAR_5,
       size_t VAR_6, int VAR_7)
{
 const struct property *VAR_8 = FUNC_0(VAR_3, VAR_4, ((void*)0));
 int VAR_9 = 0, VAR_10 = 0;
 const char *VAR_11, *VAR_12;

 if (!VAR_8)
  return -VAR_1;
 if (!VAR_8->value)
  return -VAR_2;
 VAR_11 = VAR_8->value;
 VAR_12 = VAR_11 + VAR_8->length;

 for (VAR_10 = 0; VAR_11 < VAR_12 && (!VAR_5 || VAR_10 < VAR_7 + VAR_6); VAR_10++, VAR_11 += VAR_9) {
  VAR_9 = FUNC_1(VAR_11, VAR_12 - VAR_11) + 1;
  if (VAR_11 + VAR_9 > VAR_12)
   return -VAR_0;
  if (VAR_5 && VAR_10 >= VAR_7)
   *VAR_5++ = VAR_11;
 }
 VAR_10 -= VAR_7;
 return VAR_10 <= 0 ? -VAR_2 : VAR_10;
}
