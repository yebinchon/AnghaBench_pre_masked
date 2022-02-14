
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {struct orinoco_private* priv; } ;
struct orinoco_private {struct orinoco_pccard* card; } ;
struct orinoco_pccard {int hard_reset_in_progress; } ;


 int FUNC_0 (struct orinoco_private*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_0)
{
 struct orinoco_private *VAR_1 = VAR_0->priv;
 struct orinoco_pccard *VAR_2 = VAR_1->card;




 if (!FUNC_1(0, &VAR_2->hard_reset_in_progress))
  FUNC_0(VAR_1);

 return 0;
}
