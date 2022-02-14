
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_info {scalar_t__ multi; } ;
struct pcmcia_device {int config_flags; struct serial_info* priv; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct pcmcia_device *VAR_1)
{
 struct serial_info *VAR_2 = VAR_1->priv;

 if (VAR_2->multi)
  VAR_1->config_flags |= VAR_0;
}
