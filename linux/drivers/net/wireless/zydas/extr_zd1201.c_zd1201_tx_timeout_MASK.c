
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zd1201 {int tx_urb; TYPE_1__* usb; } ;
struct TYPE_4__ {int tx_errors; } ;
struct net_device {TYPE_2__ stats; int name; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 struct zd1201* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct zd1201 *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1)
  return;
 FUNC_0(&VAR_1->usb->dev, "%s: TX timeout, shooting down urb\n",
     VAR_0->name);
 FUNC_3(VAR_1->tx_urb);
 VAR_0->stats.tx_errors++;

 FUNC_2(VAR_0);
}
