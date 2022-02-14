
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int flags; } ;
struct bnad {TYPE_1__* rx_info; int cfg_flags; int bna; struct net_device* netdev; } ;
typedef enum bna_cb_status { ____Placeholder_bna_cb_status } bna_cb_status ;
struct TYPE_4__ {int num_mcmac; } ;
struct TYPE_3__ {int rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int *) ;
 int * VAR_5 ;
 int FUNC_3 (struct net_device*,int *) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;

__attribute__((used)) static void
FUNC_9(struct bnad *VAR_6)
{
 struct net_device *VAR_7 = VAR_6->netdev;
 int VAR_8 = FUNC_7(VAR_7);
 enum bna_cb_status VAR_9;
 u8 *VAR_10;

 if (VAR_7->flags & VAR_4)
  goto mode_allmulti;

 if (FUNC_8(VAR_7))
  return;

 if (VAR_8 > FUNC_0(&VAR_6->bna)->num_mcmac)
  goto mode_allmulti;

 VAR_10 = FUNC_5(VAR_8 + 1, VAR_2, VAR_3);

 if (VAR_10 == ((void*)0))
  goto mode_allmulti;

 FUNC_4(&VAR_10[0], &VAR_5[0]);


 FUNC_3(VAR_7, VAR_10);
 VAR_9 = FUNC_2(VAR_6->rx_info[0].rx, VAR_8 + 1, VAR_10);
 FUNC_6(VAR_10);

 if (VAR_9 != VAR_1)
  goto mode_allmulti;

 return;

mode_allmulti:
 VAR_6->cfg_flags |= VAR_0;
 FUNC_1(VAR_6->rx_info[0].rx);
}
