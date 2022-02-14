
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcmcia_socket {int ops_mutex; int irq_mask; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,char*,int *) ;
 struct pcmcia_socket* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5;
 struct pcmcia_socket *VAR_6 = FUNC_3(VAR_1);
 u32 VAR_7;

 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_3, "0x%x\n", &VAR_7);

 if (VAR_5 == 1) {
  FUNC_0(&VAR_6->ops_mutex);
  VAR_6->irq_mask &= VAR_7;
  FUNC_1(&VAR_6->ops_mutex);
  VAR_5 = 0;
 }

 return VAR_5 ? VAR_5 : VAR_4;
}
