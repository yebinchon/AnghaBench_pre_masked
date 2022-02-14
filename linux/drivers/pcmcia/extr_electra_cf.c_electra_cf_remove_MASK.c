
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct electra_cf_socket {int io_size; int io_base; int mem_size; int mem_phys; int gpio_base; int mem_base; int io_virt; int timer; int irq; int socket; scalar_t__ active; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 struct electra_cf_socket* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,struct electra_cf_socket*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct electra_cf_socket*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct electra_cf_socket *VAR_2;

 VAR_2 = FUNC_2(VAR_1);

 VAR_2->active = 0;
 FUNC_6(&VAR_2->socket);
 FUNC_3(VAR_2->irq, VAR_2);
 FUNC_1(&VAR_2->timer);

 FUNC_0(VAR_2->io_virt, VAR_2->io_size);
 FUNC_4(VAR_2->mem_base);
 FUNC_4(VAR_2->gpio_base);
 FUNC_7(VAR_2->mem_phys, VAR_2->mem_size);
 FUNC_8(VAR_2->io_base, VAR_2->io_size);

 FUNC_5(VAR_2);

 return 0;
}
