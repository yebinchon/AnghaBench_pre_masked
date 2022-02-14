
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int domain; int masked; int chip; } ;
struct TYPE_5__ {int domain; } ;
struct mv88e6xxx_chip {int device_irq; TYPE_3__ g2_irq; TYPE_2__ g1_irq; TYPE_1__* dev; } ;
struct TYPE_4__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int ,int *,struct mv88e6xxx_chip*) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct mv88e6xxx_chip*) ;
 int FUNC_6 (int,int *,int ,int ,char*,struct mv88e6xxx_chip*) ;

int FUNC_7(struct mv88e6xxx_chip *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 VAR_6->g2_irq.domain = FUNC_2(
  VAR_6->dev->of_node, 16, 0, &VAR_4, VAR_6);
 if (!VAR_6->g2_irq.domain)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < 16; VAR_8++)
  FUNC_0(VAR_6->g2_irq.domain, VAR_8);

 VAR_6->g2_irq.chip = VAR_3;
 VAR_6->g2_irq.masked = ~0;

 VAR_6->device_irq = FUNC_4(VAR_6->g1_irq.domain,
         VAR_2);
 if (VAR_6->device_irq < 0) {
  VAR_7 = VAR_6->device_irq;
  goto out;
 }

 VAR_7 = FUNC_6(VAR_6->device_irq, ((void*)0),
       VAR_5,
       VAR_1, "mv88e6xxx-g2", VAR_6);
 if (VAR_7)
  goto out;

 return FUNC_5(VAR_6);

out:
 for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
  VAR_9 = FUNC_4(VAR_6->g2_irq.domain, VAR_8);
  FUNC_1(VAR_9);
 }

 FUNC_3(VAR_6->g2_irq.domain);

 return VAR_7;
}
