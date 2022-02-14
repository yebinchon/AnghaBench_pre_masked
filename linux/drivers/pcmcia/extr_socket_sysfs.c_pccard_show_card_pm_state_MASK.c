
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 struct pcmcia_socket* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct pcmcia_socket *VAR_4 = FUNC_1(VAR_1);
 return FUNC_0(VAR_3, "%s\n", VAR_4->state & VAR_0 ? "off" : "on");
}
