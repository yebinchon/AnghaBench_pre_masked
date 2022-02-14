
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct property {int length; struct property* value; struct property* name; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device_node*,struct property*) ;
 int FUNC_2 (struct property*) ;
 struct property* FUNC_3 (char const*,int ) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (struct property*,char*,int) ;
 int FUNC_6 (char*,struct device_node*,char const*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct device_node *VAR_2, const char *VAR_3,
      u32 VAR_4, char *VAR_5)
{
 struct property *VAR_6;
 u32 *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->name = FUNC_3(VAR_3, VAR_1);
 if (!VAR_6->name) {
  FUNC_2(VAR_6);
  return -VAR_0;
 }

 VAR_6->length = VAR_4;
 VAR_6->value = FUNC_4(VAR_6->length, VAR_1);
 if (!VAR_6->value) {
  FUNC_2(VAR_6->name);
  FUNC_2(VAR_6);
  return -VAR_0;
 }
 FUNC_5(VAR_6->value, VAR_5, VAR_4);

 VAR_7 = (u32 *)VAR_6->value;
 VAR_8 = FUNC_1(VAR_2, VAR_6);
 FUNC_6("%pOFn: update property (%s, length: %i, value: %#x)\n",
    VAR_2, VAR_3, VAR_4, FUNC_0(*VAR_7));

 if (VAR_8) {
  FUNC_2(VAR_6->name);
  FUNC_2(VAR_6->value);
  FUNC_2(VAR_6);
 }
 return VAR_8;
}
