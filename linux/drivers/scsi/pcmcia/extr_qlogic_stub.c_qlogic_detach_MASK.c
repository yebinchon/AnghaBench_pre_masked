
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int priv; int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_0)
{
 FUNC_0(&VAR_0->dev, "qlogic_detach\n");

 FUNC_2(VAR_0);
 FUNC_1(VAR_0->priv);

}
