
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int qhead; } ;
struct ks_wlan_private {TYPE_1__ tx_dev; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct ks_wlan_private *VAR_1)
{
 VAR_1->tx_dev.qhead = (VAR_1->tx_dev.qhead + 1) % VAR_0;
}
