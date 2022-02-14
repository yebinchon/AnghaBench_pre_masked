
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dynpcc_info {scalar_t__ cnt; void* attempt; void* cur; } ;
struct jme_adapter {int jme_rx; int flags; struct dynpcc_info dpi; } ;
struct ethtool_coalesce {scalar_t__ use_adaptive_rx_coalesce; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct jme_adapter*) ;
 int FUNC_2 (struct jme_adapter*,void*) ;
 struct jme_adapter* FUNC_3 (struct net_device*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_5, struct ethtool_coalesce *VAR_6)
{
 struct jme_adapter *VAR_7 = FUNC_3(VAR_5);
 struct dynpcc_info *VAR_8 = &(VAR_7->dpi);

 if (FUNC_4(VAR_5))
  return -VAR_0;

 if (VAR_6->use_adaptive_rx_coalesce &&
     FUNC_6(VAR_1, &VAR_7->flags)) {
  FUNC_0(VAR_1, &VAR_7->flags);
  VAR_7->jme_rx = VAR_4;
  VAR_8->cur = VAR_2;
  VAR_8->attempt = VAR_2;
  VAR_8->cnt = 0;
  FUNC_2(VAR_7, VAR_2);
  FUNC_1(VAR_7);
 } else if (!(VAR_6->use_adaptive_rx_coalesce) &&
     !(FUNC_6(VAR_1, &VAR_7->flags))) {
  FUNC_5(VAR_1, &VAR_7->flags);
  VAR_7->jme_rx = VAR_3;
  FUNC_1(VAR_7);
 }

 return 0;
}
