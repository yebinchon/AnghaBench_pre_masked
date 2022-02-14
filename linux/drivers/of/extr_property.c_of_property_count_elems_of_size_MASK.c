
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int length; int value; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct property* FUNC_0 (struct device_node const*,char const*,int *) ;
 int FUNC_1 (char*,char const*,struct device_node const*,int) ;

int FUNC_2(const struct device_node *VAR_2,
    const char *VAR_3, int VAR_4)
{
 struct property *VAR_5 = FUNC_0(VAR_2, VAR_3, ((void*)0));

 if (!VAR_5)
  return -VAR_0;
 if (!VAR_5->value)
  return -VAR_1;

 if (VAR_5->length % VAR_4 != 0) {
  FUNC_1("size of %s in node %pOF is not a multiple of %d\n",
         VAR_3, VAR_2, VAR_4);
  return -VAR_0;
 }

 return VAR_5->length / VAR_4;
}
