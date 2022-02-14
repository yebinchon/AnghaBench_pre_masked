
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_info {int ndev; int slave; int * line; } ;
struct pcmcia_device {int dev; struct serial_info* priv; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_0)
{
 struct serial_info *VAR_1 = VAR_0->priv;
 int VAR_2;

 FUNC_0(&VAR_0->dev, "serial_release\n");




 for (VAR_2 = 0; VAR_2 < VAR_1->ndev; VAR_2++)
  FUNC_2(VAR_1->line[VAR_2]);

 if (!VAR_1->slave)
  FUNC_1(VAR_0);
}
