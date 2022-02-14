
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int coreid; } ;
struct ssb_device {unsigned int irq; TYPE_2__ id; int dev; struct ssb_bus* bus; } ;
struct TYPE_3__ {struct ssb_device* dev; } ;
struct ssb_bus {TYPE_1__ mipscore; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ssb_bus*,unsigned int) ;
 int FUNC_2 (int ,char*,int ,unsigned int,unsigned int) ;
 struct ssb_device* FUNC_3 (struct ssb_device*,int) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_4 (struct ssb_device*) ;
 unsigned int FUNC_5 (struct ssb_device*) ;
 int FUNC_6 (struct ssb_device*,int ) ;
 int FUNC_7 (struct ssb_device*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct ssb_device *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6 = FUNC_5(VAR_4);
 struct ssb_bus *VAR_7 = VAR_4->bus;
 struct ssb_device *VAR_8 = VAR_7->mipscore.dev;
 u32 VAR_9 = FUNC_4(VAR_4);

 FUNC_0(VAR_6 == 6);

 VAR_4->irq = VAR_5 + 2;


 if (VAR_6 == 0)
  FUNC_7(VAR_8, VAR_0, (~(1 << VAR_9) & FUNC_6(VAR_8, VAR_0)));
 else if (VAR_6 != 5)
  FUNC_1(VAR_7, VAR_6);


 if (VAR_5 == 0) {
  FUNC_7(VAR_8, VAR_0, ((1 << VAR_9) | FUNC_6(VAR_8, VAR_0)));
 } else {
  u32 VAR_10 = FUNC_6(VAR_8, VAR_1);
  if ((VAR_10 & VAR_2[VAR_5]) != VAR_2[VAR_5]) {
   u32 VAR_11 = (VAR_10 & VAR_2[VAR_5]) >> VAR_3[VAR_5];
   struct ssb_device *VAR_12 = FUNC_3(VAR_4, VAR_11);
   if (VAR_12)
    FUNC_8(VAR_12, 0);
  }
  VAR_9 <<= VAR_3[VAR_5];
  VAR_9 |= (VAR_10 & ~VAR_2[VAR_5]);
  FUNC_7(VAR_8, VAR_1, VAR_9);
 }
 FUNC_2(VAR_4->dev, "set_irq: core 0x%04x, irq %d => %d\n",
  VAR_4->id.coreid, VAR_6+2, VAR_5+2);
}
