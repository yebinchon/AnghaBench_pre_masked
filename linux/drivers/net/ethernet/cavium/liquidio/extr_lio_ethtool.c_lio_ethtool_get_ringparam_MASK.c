
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct octeon_device {TYPE_2__** instr_queue; TYPE_1__** droq; } ;
struct octeon_config {int dummy; } ;
struct net_device {int dummy; } ;
struct lio {int ifidx; struct octeon_device* oct_dev; } ;
struct ethtool_ringparam {scalar_t__ rx_jumbo_max_pending; scalar_t__ rx_mini_max_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; void* rx_max_pending; void* rx_pending; void* tx_max_pending; void* tx_pending; } ;
struct TYPE_4__ {void* max_count; } ;
struct TYPE_3__ {void* max_count; } ;


 void* FUNC_0 (struct octeon_config*,int ) ;
 void* FUNC_1 (struct octeon_config*,int ) ;
 struct octeon_config* FUNC_2 (struct octeon_device*,int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 struct lio* FUNC_3 (struct net_device*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct octeon_device*) ;
 scalar_t__ FUNC_5 (struct octeon_device*) ;
 scalar_t__ FUNC_6 (struct octeon_device*) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (struct lio*,int ) ;

__attribute__((used)) static void
FUNC_8(struct net_device *VAR_6,
     struct ethtool_ringparam *VAR_7)
{
 struct lio *VAR_8 = FUNC_3(VAR_6);
 struct octeon_device *VAR_9 = VAR_8->oct_dev;
 u32 VAR_10 = 0, VAR_11 = 0, VAR_12 = 0,
     VAR_13 = 0;

 if (FUNC_7(VAR_8, VAR_4))
  return;

 if (FUNC_6(VAR_9)) {
  struct octeon_config *VAR_14 = FUNC_2(VAR_9, VAR_5);

  VAR_10 = VAR_2;
  VAR_11 = VAR_3;
  VAR_13 = FUNC_0(VAR_14, VAR_8->ifidx);
  VAR_12 = FUNC_1(VAR_14, VAR_8->ifidx);
 } else if (FUNC_4(VAR_9) || FUNC_5(VAR_9)) {
  VAR_10 = VAR_0;
  VAR_11 = VAR_1;
  VAR_13 = VAR_9->droq[0]->max_count;
  VAR_12 = VAR_9->instr_queue[0]->max_count;
 }

 VAR_7->tx_pending = VAR_12;
 VAR_7->tx_max_pending = VAR_10;
 VAR_7->rx_pending = VAR_13;
 VAR_7->rx_max_pending = VAR_11;
 VAR_7->rx_mini_pending = 0;
 VAR_7->rx_jumbo_pending = 0;
 VAR_7->rx_mini_max_pending = 0;
 VAR_7->rx_jumbo_max_pending = 0;
}
