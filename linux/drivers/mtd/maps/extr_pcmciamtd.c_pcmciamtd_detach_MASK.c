
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcmciamtd_dev {TYPE_2__* mtd_info; TYPE_1__* p_dev; } ;
struct pcmcia_device {struct pcmciamtd_dev* priv; } ;
struct TYPE_5__ {int index; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct pcmcia_device*) ;
 int FUNC_4 (char*,struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_5(struct pcmcia_device *VAR_0)
{
 struct pcmciamtd_dev *VAR_1 = VAR_0->priv;

 FUNC_4("link=0x%p\n", VAR_0);

 if(VAR_1->mtd_info) {
  FUNC_2(VAR_1->mtd_info);
  FUNC_0(&VAR_1->p_dev->dev, "mtd%d: Removing\n",
    VAR_1->mtd_info->index);
  FUNC_1(VAR_1->mtd_info);
 }

 FUNC_3(VAR_0);
}
