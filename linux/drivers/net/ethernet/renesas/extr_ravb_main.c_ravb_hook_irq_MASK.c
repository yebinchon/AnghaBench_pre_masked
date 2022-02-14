
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct device {int dummy; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct device*,int ,char*,int ,char const*) ;
 int FUNC_1 (struct net_device*,char*,char*) ;
 int FUNC_2 (unsigned int,int ,int ,char*,struct net_device*) ;

__attribute__((used)) static inline int FUNC_3(unsigned int VAR_2, irq_handler_t VAR_3,
    struct net_device *VAR_4, struct device *VAR_5,
    const char *VAR_6)
{
 char *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_5, VAR_1, "%s:%s", VAR_4->name, VAR_6);
 if (!VAR_7)
  return -VAR_0;
 VAR_8 = FUNC_2(VAR_2, VAR_3, 0, VAR_7, VAR_4);
 if (VAR_8)
  FUNC_1(VAR_4, "cannot request IRQ %s\n", VAR_7);

 return VAR_8;
}
