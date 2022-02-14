
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {struct orinoco_private* priv; int dev; } ;
struct orinoco_private {struct orinoco_pccard* card; } ;
struct orinoco_pccard {struct pcmcia_device* p_dev; } ;


 int VAR_0 ;
 struct orinoco_private* FUNC_0 (int,int *,int ,int ) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct pcmcia_device *VAR_3)
{
 struct orinoco_private *VAR_4;
 struct orinoco_pccard *VAR_5;

 VAR_4 = FUNC_0(sizeof(*VAR_5), &VAR_3->dev,
    VAR_1,
    VAR_2);
 if (!VAR_4)
  return -VAR_0;
 VAR_5 = VAR_4->card;


 VAR_5->p_dev = VAR_3;
 VAR_3->priv = VAR_4;

 return FUNC_1(VAR_3);
}
