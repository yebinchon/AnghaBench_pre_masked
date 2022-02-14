
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct bcm63xx_pcmcia_socket {struct resource* reg_res; int io_base; int base; int timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bcm63xx_pcmcia_socket*) ;
 struct bcm63xx_pcmcia_socket* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct resource*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct bcm63xx_pcmcia_socket *VAR_1;
 struct resource *VAR_2;

 VAR_1 = FUNC_3(VAR_0);
 FUNC_0(&VAR_1->timer);
 FUNC_1(VAR_1->base);
 FUNC_1(VAR_1->io_base);
 VAR_2 = VAR_1->reg_res;
 FUNC_4(VAR_2->start, FUNC_5(VAR_2));
 FUNC_2(VAR_1);
 return 0;
}
