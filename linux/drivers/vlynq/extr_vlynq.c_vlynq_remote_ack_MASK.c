
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vlynq_device {TYPE_1__* remote; int dev; } ;
struct irq_data {int dummy; } ;
struct TYPE_2__ {int status; } ;


 int FUNC_0 (int *) ;
 struct vlynq_device* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_0)
{
 struct vlynq_device *VAR_1 = FUNC_1(VAR_0);
 u32 VAR_2 = FUNC_3(&VAR_1->remote->status);

 FUNC_2("%s: remote status: 0x%08x\n",
         FUNC_0(&VAR_1->dev), VAR_2);
 FUNC_4(VAR_2, &VAR_1->remote->status);
}
