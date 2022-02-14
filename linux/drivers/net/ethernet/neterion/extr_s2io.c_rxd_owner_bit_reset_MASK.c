
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int dummy; } ;
struct mac_info {struct ring_info* rings; } ;
struct config_param {int rx_ring_num; struct rx_ring_config* rx_cfg; } ;
struct s2io_nic {size_t rxd_mode; struct net_device* dev; struct mac_info mac_control; struct config_param config; } ;
struct rx_ring_config {int num_rxd; } ;
struct ring_info {struct buffAdd** ba; TYPE_2__* rx_blocks; } ;
struct net_device {int mtu; } ;
struct buffAdd {int dummy; } ;
struct RxD_t {int Control_1; } ;
struct TYPE_4__ {TYPE_1__* rxds; } ;
struct TYPE_3__ {struct RxD_t* virt_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int* VAR_10 ;
 int FUNC_1 (struct s2io_nic*,struct RxD_t*,struct buffAdd*,struct sk_buff**,int *,int *,int *,int) ;
 int FUNC_2 (struct s2io_nic*,struct RxD_t*,int) ;

__attribute__((used)) static int FUNC_3(struct s2io_nic *VAR_11)
{
 int VAR_12, VAR_13, VAR_14, VAR_15 = 0, VAR_16;
 struct config_param *VAR_17 = &VAR_11->config;
 struct mac_info *VAR_18 = &VAR_11->mac_control;
 struct net_device *VAR_19 = VAR_11->dev;
 struct RxD_t *VAR_20 = ((void*)0);
 struct sk_buff *VAR_21 = ((void*)0);
 struct buffAdd *VAR_22 = ((void*)0);
 u64 VAR_23 = 0, VAR_24 = 0, VAR_25 = 0;


 VAR_16 = VAR_19->mtu + VAR_4 +
  VAR_3 + VAR_5;
 if (VAR_11->rxd_mode == VAR_7)
  VAR_16 += VAR_6;
 else if (VAR_11->rxd_mode == VAR_8)
  VAR_16 = VAR_19->mtu + VAR_0 + VAR_1 + 4;

 for (VAR_12 = 0; VAR_12 < VAR_17->rx_ring_num; VAR_12++) {
  struct rx_ring_config *VAR_26 = &VAR_17->rx_cfg[VAR_12];
  struct ring_info *VAR_27 = &VAR_18->rings[VAR_12];

  VAR_15 = VAR_26->num_rxd / (VAR_10[VAR_11->rxd_mode] + 1);

  for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
   for (VAR_14 = 0; VAR_14 < VAR_10[VAR_11->rxd_mode]; VAR_14++) {
    VAR_20 = VAR_27->rx_blocks[VAR_13].rxds[VAR_14].virt_addr;
    if (VAR_11->rxd_mode == VAR_8)
     VAR_22 = &VAR_27->ba[VAR_13][VAR_14];
    if (FUNC_1(VAR_11, VAR_20, VAR_22, &VAR_21,
          &VAR_23,
          &VAR_24,
          &VAR_25,
          VAR_16) == -VAR_2) {
     return 0;
    }

    FUNC_2(VAR_11, VAR_20, VAR_16);
    FUNC_0();

    VAR_20->Control_1 |= VAR_9;
   }
  }
 }
 return 0;

}
