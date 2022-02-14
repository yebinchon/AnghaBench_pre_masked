
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {scalar_t__ suspended; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*) ;
 struct pcmcia_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct pcmcia_device *VAR_3 = FUNC_1(VAR_0);

 if (VAR_3->suspended)
  return FUNC_0(VAR_2, "off\n");
 else
  return FUNC_0(VAR_2, "on\n");
}
