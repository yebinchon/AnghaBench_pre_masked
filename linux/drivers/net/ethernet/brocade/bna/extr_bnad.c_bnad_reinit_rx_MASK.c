
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct net_device {int dev_addr; int mtu; } ;
struct TYPE_3__ {int enet; } ;
struct bnad {size_t num_rx; int bna_lock; TYPE_2__* rx_info; struct net_device* netdev; TYPE_1__ bna; } ;
struct TYPE_4__ {scalar_t__ rx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (struct bnad*,size_t) ;
 int FUNC_3 (struct bnad*) ;
 int FUNC_4 (struct bnad*,int ) ;
 int FUNC_5 (struct bnad*,int ) ;
 int FUNC_6 (struct net_device*) ;
 size_t FUNC_7 (struct bnad*,size_t) ;
 int FUNC_8 (struct net_device*,char*,size_t) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static u32
FUNC_11(struct bnad *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;
 u32 VAR_2 = 0, VAR_3 = 0;
 u32 VAR_4 = 0, VAR_5 = 0;
 unsigned long VAR_6;


 for (VAR_4 = 0; VAR_4 < VAR_0->num_rx; VAR_4++) {
  if (!VAR_0->rx_info[VAR_4].rx)
   continue;
  FUNC_2(VAR_0, VAR_4);
 }

 FUNC_9(&VAR_0->bna_lock, VAR_6);
 FUNC_1(&VAR_0->bna.enet,
    FUNC_0(VAR_0->netdev->mtu), ((void*)0));
 FUNC_10(&VAR_0->bna_lock, VAR_6);

 for (VAR_4 = 0; VAR_4 < VAR_0->num_rx; VAR_4++) {
  VAR_5++;
  VAR_3 = FUNC_7(VAR_0, VAR_4);
  if (VAR_3 && !VAR_2) {
   VAR_2 = VAR_3;
   FUNC_8(VAR_1, "RXQ:%u setup failed\n", VAR_4);
  }
 }


 if (VAR_0->rx_info[0].rx && !VAR_2) {
  FUNC_5(VAR_0, 0);
  FUNC_3(VAR_0);
  FUNC_9(&VAR_0->bna_lock, VAR_6);
  FUNC_4(VAR_0, VAR_1->dev_addr);
  FUNC_10(&VAR_0->bna_lock, VAR_6);
  FUNC_6(VAR_1);
 }

 return VAR_5;
}
