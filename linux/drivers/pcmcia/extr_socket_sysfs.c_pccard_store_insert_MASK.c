
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcmcia_socket*,int ) ;
 struct pcmcia_socket* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2, struct device_attribute *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 struct pcmcia_socket *VAR_6 = FUNC_1(VAR_2);

 if (!VAR_5)
  return -VAR_0;

 FUNC_0(VAR_6, VAR_1);

 return VAR_5;
}
