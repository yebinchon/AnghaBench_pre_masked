
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 char* FUNC_1 (struct device*,int ,char*,int ,char const*) ;
 int FUNC_2 (struct device*,unsigned int,int ,int ,char const*,void*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, unsigned int VAR_3,
       irq_handler_t VAR_4, const char *VAR_5,
       void *VAR_6)
{
 const char *VAR_7 = FUNC_1(VAR_2, VAR_1, "%s:%s",
       FUNC_0(VAR_2), VAR_5);
 if (!VAR_7)
  return -VAR_0;

 return FUNC_2(VAR_2, VAR_3, VAR_4, 0, VAR_7, VAR_6);
}
