
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pcmcia_device {int dummy; } ;


 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (struct pcmcia_device*,int ,int) ;
 struct pcmcia_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0, int VAR_1)
{
 struct pcmcia_device *VAR_2 = FUNC_2(VAR_0->dev.parent);

 FUNC_0(&VAR_0->dev, "pcmcia config [0] %02x\n", VAR_1 ? 0x60 : 0);
 return FUNC_1(VAR_2, 0, VAR_1 ? 0x60 : 0);
}
