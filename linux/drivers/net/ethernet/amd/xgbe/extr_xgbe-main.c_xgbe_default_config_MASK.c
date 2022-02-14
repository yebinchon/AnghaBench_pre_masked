
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int aal; int rd_osr_limit; int wr_osr_limit; int pause_autoneg; int tx_pause; int rx_pause; scalar_t__ power_down; int phy_speed; int rx_threshold; int rx_sf_mode; int tx_osp_mode; int tx_threshold; int tx_sf_mode; int pbl; int blen; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_8)
{
 FUNC_0("-->xgbe_default_config\n");

 VAR_8->blen = VAR_2;
 VAR_8->pbl = VAR_1;
 VAR_8->aal = 1;
 VAR_8->rd_osr_limit = 8;
 VAR_8->wr_osr_limit = 8;
 VAR_8->tx_sf_mode = VAR_5;
 VAR_8->tx_threshold = VAR_6;
 VAR_8->tx_osp_mode = VAR_0;
 VAR_8->rx_sf_mode = VAR_3;
 VAR_8->rx_threshold = VAR_4;
 VAR_8->pause_autoneg = 1;
 VAR_8->tx_pause = 1;
 VAR_8->rx_pause = 1;
 VAR_8->phy_speed = VAR_7;
 VAR_8->power_down = 0;

 FUNC_0("<--xgbe_default_config\n");
}
