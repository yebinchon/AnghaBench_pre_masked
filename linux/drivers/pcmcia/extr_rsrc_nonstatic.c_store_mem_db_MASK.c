
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int ops_mutex; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct pcmcia_socket*,unsigned int,unsigned long,unsigned long) ;
 struct pcmcia_socket* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,char*,unsigned long*,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
       struct device_attribute *VAR_4,
       const char *VAR_5, size_t VAR_6)
{
 struct pcmcia_socket *VAR_7 = FUNC_1(VAR_3);
 unsigned long VAR_8, VAR_9;
 unsigned int VAR_10 = VAR_0;
 ssize_t VAR_11 = 0;

 VAR_11 = FUNC_4(VAR_5, "+ 0x%lx - 0x%lx", &VAR_8, &VAR_9);
 if (VAR_11 != 2) {
  VAR_11 = FUNC_4(VAR_5, "- 0x%lx - 0x%lx", &VAR_8, &VAR_9);
  VAR_10 = VAR_2;
  if (VAR_11 != 2) {
   VAR_11 = FUNC_4(VAR_5, "0x%lx - 0x%lx", &VAR_8,
    &VAR_9);
   VAR_10 = VAR_0;
   if (VAR_11 != 2)
    return -VAR_1;
  }
 }
 if (VAR_9 < VAR_8)
  return -VAR_1;

 FUNC_2(&VAR_7->ops_mutex);
 VAR_11 = FUNC_0(VAR_7, VAR_10, VAR_8, VAR_9);
 FUNC_3(&VAR_7->ops_mutex);

 return VAR_11 ? VAR_11 : VAR_6;
}
