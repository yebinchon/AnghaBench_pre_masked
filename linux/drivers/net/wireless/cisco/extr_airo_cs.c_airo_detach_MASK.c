
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {scalar_t__ priv; int dev; } ;
struct local_info {int * eth_dev; } ;


 int FUNC_0 (struct pcmcia_device*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct pcmcia_device *VAR_0)
{
 FUNC_1(&VAR_0->dev, "airo_detach\n");

 FUNC_0(VAR_0);

 if (((struct local_info *)VAR_0->priv)->eth_dev) {
  FUNC_3(((struct local_info *)VAR_0->priv)->eth_dev,
          0);
 }
 ((struct local_info *)VAR_0->priv)->eth_dev = ((void*)0);

 FUNC_2(VAR_0->priv);
}
