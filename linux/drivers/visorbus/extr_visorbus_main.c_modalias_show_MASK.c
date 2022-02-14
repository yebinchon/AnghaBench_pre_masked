
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visor_device {int visorchannel; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int guid_t ;


 int FUNC_0 (char*,char*,int const*) ;
 struct visor_device* FUNC_1 (struct device*) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct visor_device *VAR_3;
 const guid_t *VAR_4;

 VAR_3 = FUNC_1(VAR_0);
 VAR_4 = FUNC_2(VAR_3->visorchannel);
 return FUNC_0(VAR_2, "visorbus:%pUl\n", VAR_4);
}
