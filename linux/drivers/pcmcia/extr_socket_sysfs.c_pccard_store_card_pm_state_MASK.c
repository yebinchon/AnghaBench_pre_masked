
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
 int VAR_2 ;
 int FUNC_0 (struct pcmcia_socket*,int ) ;
 int FUNC_1 (char const*,char*,int) ;
 struct pcmcia_socket* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
       struct device_attribute *VAR_4,
       const char *VAR_5, size_t VAR_6)
{
 struct pcmcia_socket *VAR_7 = FUNC_2(VAR_3);
 ssize_t VAR_8 = VAR_6;

 if (!VAR_6)
  return -VAR_0;

 if (!FUNC_1(VAR_5, "off", 3))
  FUNC_0(VAR_7, VAR_2);
 else {
  if (!FUNC_1(VAR_5, "on", 2))
   FUNC_0(VAR_7, VAR_1);
  else
   VAR_8 = -VAR_0;
 }

 return VAR_8;
}
