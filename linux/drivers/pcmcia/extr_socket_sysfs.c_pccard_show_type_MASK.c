
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 struct pcmcia_socket* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3, struct device_attribute *VAR_4,
    char *VAR_5)
{
 struct pcmcia_socket *VAR_6 = FUNC_1(VAR_3);

 if (!(VAR_6->state & VAR_2))
  return -VAR_0;
 if (VAR_6->state & VAR_1)
  return FUNC_0(VAR_5, "32-bit\n");
 return FUNC_0(VAR_5, "16-bit\n");
}
