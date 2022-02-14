
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct net_device {scalar_t__* dev_addr; int irq; } ;
struct de4x5_private {scalar_t__ chipset; scalar_t__ bus_num; } ;
struct TYPE_2__ {scalar_t__ chipset; scalar_t__ bus; scalar_t__* addr; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct de4x5_private*) ;
 TYPE_1__ VAR_1 ;
 struct de4x5_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_2, int VAR_3)
{
    struct de4x5_private *VAR_4 = FUNC_1(VAR_2);
    int VAR_5, VAR_6;

    for (VAR_6=0,VAR_5=0; VAR_5<VAR_0; VAR_5++) VAR_6 += (u_char)VAR_2->dev_addr[VAR_5];
    if ((VAR_6 == 0) || (VAR_6 == 0x5fa)) {
 if ((VAR_4->chipset == VAR_1.chipset) &&
     (VAR_4->bus_num == VAR_1.bus) && (VAR_4->bus_num > 0)) {
     for (VAR_5=0; VAR_5<VAR_0; VAR_5++) VAR_2->dev_addr[VAR_5] = VAR_1.addr[VAR_5];
     for (VAR_5=VAR_0-1; VAR_5>2; --VAR_5) {
  VAR_2->dev_addr[VAR_5] += 1;
  if (VAR_2->dev_addr[VAR_5] != 0) break;
     }
     for (VAR_5=0; VAR_5<VAR_0; VAR_5++) VAR_1.addr[VAR_5] = VAR_2->dev_addr[VAR_5];
     if (!FUNC_0(VAR_4)) {
  VAR_2->irq = VAR_1.irq;
     }

     VAR_3 = 0;
 }
    } else if (!VAR_3) {
 VAR_1.chipset = VAR_4->chipset;
 VAR_1.bus = VAR_4->bus_num;
 VAR_1.irq = VAR_2->irq;
 for (VAR_5=0; VAR_5<VAR_0; VAR_5++) VAR_1.addr[VAR_5] = VAR_2->dev_addr[VAR_5];
    }

    return VAR_3;
}
