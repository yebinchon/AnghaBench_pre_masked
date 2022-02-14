
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct idt_89hpesx_dev {scalar_t__ eesize; int ee_file; TYPE_1__* client; } ;
struct device {int kobj; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct idt_89hpesx_dev *VAR_0)
{
 struct device *VAR_1 = &VAR_0->client->dev;


 if (VAR_0->eesize == 0)
  return;


 FUNC_0(&VAR_1->kobj, VAR_0->ee_file);
}
