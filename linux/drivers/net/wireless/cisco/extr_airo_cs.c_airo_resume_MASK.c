
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {scalar_t__ open; struct local_info* priv; } ;
struct local_info {int eth_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_0)
{
 struct local_info *VAR_1 = VAR_0->priv;

 if (VAR_0->open) {
  FUNC_1(VAR_1->eth_dev);
  FUNC_0(VAR_1->eth_dev);
 }

 return 0;
}
