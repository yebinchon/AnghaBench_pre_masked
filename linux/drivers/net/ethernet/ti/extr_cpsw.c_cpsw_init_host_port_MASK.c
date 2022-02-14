
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct cpsw_priv {TYPE_4__* ndev; int mac_addr; struct cpsw_common* cpsw; } ;
struct TYPE_7__ {scalar_t__ dual_emac; } ;
struct cpsw_common {int ale; TYPE_3__ data; TYPE_2__* host_port_regs; TYPE_1__* regs; } ;
struct TYPE_8__ {int broadcast; } ;
struct TYPE_6__ {int cpdma_rx_chan_map; int cpdma_tx_pri_map; int tx_in_ctl; } ;
struct TYPE_5__ {int control; int soft_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct cpsw_priv *VAR_12)
{
 u32 VAR_13;
 u32 VAR_14;
 struct cpsw_common *VAR_15 = VAR_12->cpsw;


 FUNC_5("cpsw", &VAR_15->regs->soft_reset);
 FUNC_3(VAR_15->ale);


 FUNC_2(VAR_15->ale, VAR_11, VAR_4,
        VAR_6);
 VAR_14 = FUNC_4(&VAR_15->regs->control);
 VAR_14 |= VAR_10 | VAR_9;
 FUNC_6(VAR_14, &VAR_15->regs->control);
 VAR_13 = (VAR_15->data.dual_emac) ? VAR_7 :
       VAR_8;
 FUNC_6(VAR_13, &VAR_15->host_port_regs->tx_in_ctl);


 FUNC_7(VAR_5,
         &VAR_15->host_port_regs->cpdma_tx_pri_map);
 FUNC_7(0, &VAR_15->host_port_regs->cpdma_rx_chan_map);

 FUNC_2(VAR_15->ale, VAR_11,
        VAR_2, VAR_3);

 if (!VAR_15->data.dual_emac) {
  FUNC_1(VAR_15->ale, VAR_12->mac_addr, VAR_11,
       0, 0);
  FUNC_0(VAR_15->ale, VAR_12->ndev->broadcast,
       VAR_1, 0, 0, VAR_0);
 }
}
