
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {struct if_cs_card* priv; } ;
struct if_cs_card {int priv; } ;


 int FUNC_0 (struct if_cs_card*) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (struct if_cs_card*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct pcmcia_device *VAR_0)
{
 struct if_cs_card *VAR_1 = VAR_0->priv;

 FUNC_4(VAR_1->priv);
 FUNC_3(VAR_1->priv);
 FUNC_0(VAR_1);
 FUNC_1(VAR_0);
 FUNC_2(VAR_1);
}
