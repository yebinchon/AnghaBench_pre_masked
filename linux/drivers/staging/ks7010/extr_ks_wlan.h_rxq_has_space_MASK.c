
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int qtail; int qhead; } ;
struct ks_wlan_private {TYPE_1__ rx_dev; } ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_1(struct ks_wlan_private *VAR_1)
{
 return (FUNC_0(VAR_1->rx_dev.qhead, VAR_1->rx_dev.qtail,
      VAR_0) > 0);
}
