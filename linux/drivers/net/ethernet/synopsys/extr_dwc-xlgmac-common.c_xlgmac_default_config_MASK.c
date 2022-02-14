
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_pdata {int tx_pause; int rx_pause; int drv_ver; int drv_name; int sysclk_rate; int phy_speed; int rx_threshold; int tx_threshold; void* rx_pbl; void* tx_pbl; int pblx8; int rx_sf_mode; int tx_sf_mode; int tx_osp_mode; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct xlgmac_pdata *VAR_11)
{
 VAR_11->tx_osp_mode = VAR_0;
 VAR_11->tx_sf_mode = VAR_5;
 VAR_11->rx_sf_mode = VAR_3;
 VAR_11->pblx8 = VAR_2;
 VAR_11->tx_pbl = VAR_1;
 VAR_11->rx_pbl = VAR_1;
 VAR_11->tx_threshold = VAR_6;
 VAR_11->rx_threshold = VAR_4;
 VAR_11->tx_pause = 1;
 VAR_11->rx_pause = 1;
 VAR_11->phy_speed = VAR_7;
 VAR_11->sysclk_rate = VAR_10;

 FUNC_0(VAR_11->drv_name, VAR_8, sizeof(VAR_11->drv_name));
 FUNC_0(VAR_11->drv_ver, VAR_9, sizeof(VAR_11->drv_ver));
}
