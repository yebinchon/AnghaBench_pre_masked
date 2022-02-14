
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int func; scalar_t__ socket; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 struct pcmcia_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct pcmcia_device *VAR_4 = FUNC_1(VAR_1);
 return VAR_4->socket ? FUNC_0(VAR_3, "0x%02x\n", VAR_4->func) : -VAR_0;
}
