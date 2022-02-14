
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {struct orinoco_private* priv; int dev; } ;
struct orinoco_private {struct orinoco_pccard* card; } ;
struct orinoco_pccard {struct pcmcia_device* p_dev; } ;


 int VAR_0 ;
 struct orinoco_private* FUNC_0 (int,int *,int ,int *) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct pcmcia_device *VAR_2)
{
 struct orinoco_private *VAR_3;
 struct orinoco_pccard *VAR_4;

 VAR_3 = FUNC_0(sizeof(*VAR_4), &VAR_2->dev,
    VAR_1, ((void*)0));
 if (!VAR_3)
  return -VAR_0;
 VAR_4 = VAR_3->card;


 VAR_4->p_dev = VAR_2;
 VAR_2->priv = VAR_3;

 return FUNC_1(VAR_2);
}
