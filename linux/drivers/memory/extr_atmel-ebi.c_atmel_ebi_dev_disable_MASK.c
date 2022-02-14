
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int length; void* value; void* name; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct atmel_ebi {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct device*,char*,int ) ;
 struct property* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct device_node*,struct property*) ;

__attribute__((used)) static int FUNC_3(struct atmel_ebi *VAR_2, struct device_node *VAR_3)
{
 struct device *VAR_4 = VAR_2->dev;
 struct property *VAR_5;

 VAR_5 = FUNC_1(VAR_4, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->name = FUNC_0(VAR_4, "status", VAR_1);
 if (!VAR_5->name)
  return -VAR_0;

 VAR_5->value = FUNC_0(VAR_4, "disabled", VAR_1);
 if (!VAR_5->value)
  return -VAR_0;

 VAR_5->length = sizeof("disabled");

 return FUNC_2(VAR_3, VAR_5);
}
