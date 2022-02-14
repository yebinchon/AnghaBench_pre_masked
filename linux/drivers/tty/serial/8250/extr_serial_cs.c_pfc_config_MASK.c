
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serial_info {int slave; scalar_t__ manfid; } ;
struct pcmcia_device {int dev; int irq; TYPE_1__** resource; struct serial_info* priv; } ;
struct TYPE_2__ {scalar_t__ end; unsigned int start; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct pcmcia_device*,struct serial_info*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_2)
{
 unsigned int VAR_3 = 0;
 struct serial_info *VAR_4 = VAR_2->priv;

 if ((VAR_2->resource[1]->end != 0) &&
  (FUNC_1(VAR_2->resource[1]) == 8)) {
  VAR_3 = VAR_2->resource[1]->start;
  VAR_4->slave = 1;
 } else if ((VAR_4->manfid == VAR_1) &&
  (FUNC_1(VAR_2->resource[0]) == 0x40)) {
  VAR_3 = VAR_2->resource[0]->start + 0x28;
  VAR_4->slave = 1;
 }
 if (VAR_4->slave)
  return FUNC_2(VAR_2, VAR_4, VAR_3, VAR_2->irq);

 FUNC_0(&VAR_2->dev, "no usable port range found, giving up\n");
 return -VAR_0;
}
