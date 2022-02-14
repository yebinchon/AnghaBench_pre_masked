
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct TYPE_3__ {scalar_t__ sriov_enabled; } ;
struct octeon_device {void* num_iqs; TYPE_1__ sriov_info; } ;
struct octeon_config {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {void* num_txpciq; } ;
struct lio {TYPE_2__ linfo; int ifidx; struct octeon_device* oct_dev; } ;
struct ethtool_channels {void* combined_count; void* tx_count; void* rx_count; void* max_combined; void* max_tx; void* max_rx; } ;


 void* FUNC_0 (struct octeon_config*) ;
 void* FUNC_1 (struct octeon_config*,int ) ;
 void* FUNC_2 (struct octeon_config*,int ) ;
 void* FUNC_3 (struct octeon_config*) ;
 struct octeon_config* FUNC_4 (struct octeon_device*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 struct lio* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct octeon_device*) ;
 scalar_t__ FUNC_8 (struct octeon_device*) ;
 scalar_t__ FUNC_9 (struct octeon_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (struct octeon_device*,int) ;

__attribute__((used)) static void
FUNC_11(struct net_device *VAR_4,
    struct ethtool_channels *VAR_5)
{
 struct lio *VAR_6 = FUNC_6(VAR_4);
 struct octeon_device *VAR_7 = VAR_6->oct_dev;
 u32 VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 u32 VAR_12 = 0, VAR_13 = 0;

 if (FUNC_9(VAR_7)) {
  struct octeon_config *VAR_14 = FUNC_4(VAR_7, VAR_3);

  VAR_8 = FUNC_3(VAR_14);
  VAR_9 = FUNC_0(VAR_14);
  VAR_11 = FUNC_1(VAR_14, VAR_6->ifidx);
  VAR_10 = FUNC_2(VAR_14, VAR_6->ifidx);
 } else if (FUNC_7(VAR_7)) {
  if (VAR_7->sriov_info.sriov_enabled) {
   VAR_13 = VAR_6->linfo.num_txpciq;
  } else {
   struct octeon_config *VAR_15 =
    FUNC_4(VAR_7, VAR_2);

   VAR_13 = FUNC_0(VAR_15);
  }
  VAR_12 = VAR_7->num_iqs;
 } else if (FUNC_8(VAR_7)) {
  u64 VAR_16 = 0ULL;
  u64 VAR_17 = FUNC_5(0);

  VAR_16 = FUNC_10(VAR_7, VAR_17);
  VAR_16 = VAR_16 >> VAR_1;
  VAR_13 = VAR_16 & VAR_0;
  VAR_12 = VAR_7->num_iqs;
 }

 VAR_5->max_rx = VAR_8;
 VAR_5->max_tx = VAR_9;
 VAR_5->max_combined = VAR_13;
 VAR_5->rx_count = VAR_11;
 VAR_5->tx_count = VAR_10;
 VAR_5->combined_count = VAR_12;
}
