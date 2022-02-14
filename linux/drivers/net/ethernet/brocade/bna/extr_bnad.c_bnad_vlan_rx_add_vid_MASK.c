
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct bnad {int conf_mutex; int bna_lock; int active_vlans; TYPE_1__* rx_info; } ;
typedef int __be16 ;
struct TYPE_2__ {int rx; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct bnad* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_0, __be16 VAR_1, u16 VAR_2)
{
 struct bnad *VAR_3 = FUNC_3(VAR_0);
 unsigned long VAR_4;

 if (!VAR_3->rx_info[0].rx)
  return 0;

 FUNC_1(&VAR_3->conf_mutex);

 FUNC_5(&VAR_3->bna_lock, VAR_4);
 FUNC_0(VAR_3->rx_info[0].rx, VAR_2);
 FUNC_4(VAR_2, VAR_3->active_vlans);
 FUNC_6(&VAR_3->bna_lock, VAR_4);

 FUNC_2(&VAR_3->conf_mutex);

 return 0;
}
