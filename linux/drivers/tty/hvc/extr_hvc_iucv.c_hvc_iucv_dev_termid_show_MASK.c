
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvc_iucv_private {int srv_name; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (char*,size_t) ;
 struct hvc_iucv_private* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct hvc_iucv_private *VAR_3 = FUNC_1(VAR_0);
 size_t VAR_4;

 VAR_4 = sizeof(VAR_3->srv_name);
 FUNC_2(VAR_2, VAR_3->srv_name, VAR_4);
 FUNC_0(VAR_2, VAR_4);
 VAR_2[VAR_4++] = '\n';
 return VAR_4;
}
