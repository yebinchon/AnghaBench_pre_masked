
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {struct bcm63xx_pcmcia_socket* driver_data; } ;
struct bcm63xx_pcmcia_socket {int lock; } ;


 unsigned int FUNC_0 (struct bcm63xx_pcmcia_socket*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_socket *VAR_0,
         unsigned int *VAR_1)
{
 struct bcm63xx_pcmcia_socket *VAR_2;

 VAR_2 = VAR_0->driver_data;

 FUNC_1(&VAR_2->lock);
 *VAR_1 = FUNC_0(VAR_2);
 FUNC_2(&VAR_2->lock);

 return 0;
}
