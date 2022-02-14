
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int flags; } ;
struct ionic_lif {int uc_overflow; int mc_overflow; unsigned int rx_mode; TYPE_1__* ionic; } ;
struct TYPE_5__ {int max_mcast_filters; int max_ucast_filters; } ;
struct TYPE_6__ {TYPE_2__ eth; } ;
struct ionic_identity {TYPE_3__ lif; } ;
struct TYPE_4__ {struct ionic_identity ident; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (struct net_device*,int ,int ) ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 int FUNC_2 (struct ionic_lif*,unsigned int) ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (struct net_device*) ;
 struct ionic_lif* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_11)
{
 struct ionic_lif *VAR_12 = FUNC_5(VAR_11);
 struct ionic_identity *VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;

 VAR_13 = &VAR_12->ionic->ident;

 VAR_15 = VAR_8;
 VAR_15 |= (VAR_11->flags & VAR_2) ? VAR_6 : 0;
 VAR_15 |= (VAR_11->flags & VAR_1) ? VAR_5 : 0;
 VAR_15 |= (VAR_11->flags & VAR_3) ? VAR_7 : 0;
 VAR_15 |= (VAR_11->flags & VAR_0) ? VAR_4 : 0;
 FUNC_1(VAR_11, VAR_9, VAR_10);
 VAR_14 = FUNC_3(VAR_13->lif.eth.max_ucast_filters);
 if (FUNC_6(VAR_11) + 1 > VAR_14) {
  VAR_15 |= VAR_7;
  VAR_12->uc_overflow = 1;
 } else if (VAR_12->uc_overflow) {
  VAR_12->uc_overflow = 0;
  if (!(VAR_11->flags & VAR_3))
   VAR_15 &= ~VAR_7;
 }


 FUNC_0(VAR_11, VAR_9, VAR_10);
 VAR_14 = FUNC_3(VAR_13->lif.eth.max_mcast_filters);
 if (FUNC_4(VAR_11) > VAR_14) {
  VAR_15 |= VAR_4;
  VAR_12->mc_overflow = 1;
 } else if (VAR_12->mc_overflow) {
  VAR_12->mc_overflow = 0;
  if (!(VAR_11->flags & VAR_0))
   VAR_15 &= ~VAR_4;
 }

 if (VAR_12->rx_mode != VAR_15)
  FUNC_2(VAR_12, VAR_15);
}
