
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct urb {int status; TYPE_1__* dev; TYPE_2__* context; } ;
struct TYPE_7__ {TYPE_3__* netdev; int tx_skb; } ;
typedef TYPE_2__ rtl8150_t ;
struct TYPE_8__ {int name; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(struct urb *VAR_0)
{
 rtl8150_t *VAR_1;
 int VAR_2 = VAR_0->status;

 VAR_1 = VAR_0->context;
 if (!VAR_1)
  return;
 FUNC_1(VAR_1->tx_skb);
 if (!FUNC_2(VAR_1->netdev))
  return;
 if (VAR_2)
  FUNC_0(&VAR_0->dev->dev, "%s: Tx status %d\n",
    VAR_1->netdev->name, VAR_2);
 FUNC_3(VAR_1->netdev);
 FUNC_4(VAR_1->netdev);
}
