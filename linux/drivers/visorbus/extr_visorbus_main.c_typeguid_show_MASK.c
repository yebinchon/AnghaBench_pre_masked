
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visor_device {int visorchannel; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 struct visor_device* FUNC_1 (struct device*) ;
 char* FUNC_2 (int ,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct visor_device *VAR_4 = FUNC_1(VAR_1);
 char VAR_5[VAR_0];

 return FUNC_0(VAR_3, "%s\n",
         FUNC_2(VAR_4->visorchannel, VAR_5));
}
