
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnt_private {TYPE_1__* pcid; scalar_t__ PortOffset; scalar_t__ ioaddr; int abyCurrentNetAddr; } ;
struct TYPE_2__ {int irq; int dev; } ;


 int FUNC_0 (int *,char*,int ,unsigned long,unsigned long,int ) ;

__attribute__((used)) static void FUNC_1(struct vnt_private *VAR_0)
{
 FUNC_0(&VAR_0->pcid->dev, "MAC=%pM IO=0x%lx Mem=0x%lx IRQ=%d\n",
   VAR_0->abyCurrentNetAddr, (unsigned long)VAR_0->ioaddr,
   (unsigned long)VAR_0->PortOffset, VAR_0->pcid->irq);
}
