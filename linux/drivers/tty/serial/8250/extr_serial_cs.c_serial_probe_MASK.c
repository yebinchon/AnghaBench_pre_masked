
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_info {struct pcmcia_device* p_dev; } ;
struct pcmcia_device {int config_flags; struct serial_info* priv; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ VAR_5 ;
 struct serial_info* FUNC_1 (int,int ) ;
 int FUNC_2 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_6)
{
 struct serial_info *VAR_7;

 FUNC_0(&VAR_6->dev, "serial_attach()\n");


 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_4);
 if (!VAR_7)
  return -VAR_3;
 VAR_7->p_dev = VAR_6;
 VAR_6->priv = VAR_7;

 VAR_6->config_flags |= VAR_1 | VAR_0;
 if (VAR_5)
  VAR_6->config_flags |= VAR_2;

 return FUNC_2(VAR_6);
}
