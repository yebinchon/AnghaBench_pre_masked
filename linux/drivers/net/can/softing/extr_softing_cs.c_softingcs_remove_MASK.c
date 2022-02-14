
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct pcmcia_device {struct platform_device* priv; } ;


 int FUNC_0 (struct pcmcia_device*) ;
 int FUNC_1 (struct platform_device*) ;

__attribute__((used)) static void FUNC_2(struct pcmcia_device *VAR_0)
{
 struct platform_device *VAR_1 = VAR_0->priv;


 FUNC_1(VAR_1);

 FUNC_0(VAR_0);
}
