
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_irq {int dummy; } ;
struct mbus_device {int dummy; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int FUNC_0 (struct mbus_device*) ;
 struct mic_irq* FUNC_1 (int ,int ,int ,char const*,void*,int,int ) ;

__attribute__((used)) static struct mic_irq *
FUNC_2(struct mbus_device *VAR_1,
     irq_handler_t VAR_2, irq_handler_t VAR_3,
     const char *VAR_4, void *VAR_5, int VAR_6)
{
 return FUNC_1(FUNC_0(VAR_1), VAR_2,
     VAR_3, VAR_4, VAR_5,
     VAR_6, VAR_0);
}
