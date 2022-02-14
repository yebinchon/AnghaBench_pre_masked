
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc13xxx {int dev; int irq_data; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int *,int ,int ,char const*,void*) ;
 int FUNC_1 (int ,int) ;

int FUNC_2(struct mc13xxx *VAR_1, int VAR_2,
  irq_handler_t VAR_3, const char *VAR_4, void *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_1->irq_data, VAR_2);

 return FUNC_0(VAR_1->dev, VAR_6, ((void*)0), VAR_3,
      VAR_0, VAR_4, VAR_5);
}
