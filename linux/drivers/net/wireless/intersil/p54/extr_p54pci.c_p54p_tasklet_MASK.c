
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p54p_ring_control {int rx_data; int rx_mgmt; int tx_data; int tx_mgmt; } ;
struct p54p_priv {int rx_buf_data; int rx_idx_data; int rx_buf_mgmt; int rx_idx_mgmt; int tx_buf_data; int tx_idx_data; int tx_buf_mgmt; int tx_idx_mgmt; struct p54p_ring_control* ring_control; } ;
struct ieee80211_hw {struct p54p_priv* priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct ieee80211_hw*,int *,int,int ,int ,int ) ;
 int FUNC_4 (struct ieee80211_hw*,int *,int,int ,int ,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_2)
{
 struct ieee80211_hw *VAR_3 = (struct ieee80211_hw *)VAR_2;
 struct p54p_priv *VAR_4 = VAR_3->priv;
 struct p54p_ring_control *VAR_5 = VAR_4->ring_control;

 FUNC_4(VAR_3, &VAR_4->tx_idx_mgmt, 3, VAR_5->tx_mgmt,
      FUNC_0(VAR_5->tx_mgmt),
      VAR_4->tx_buf_mgmt);

 FUNC_4(VAR_3, &VAR_4->tx_idx_data, 1, VAR_5->tx_data,
      FUNC_0(VAR_5->tx_data),
      VAR_4->tx_buf_data);

 FUNC_3(VAR_3, &VAR_4->rx_idx_mgmt, 2, VAR_5->rx_mgmt,
  FUNC_0(VAR_5->rx_mgmt), VAR_4->rx_buf_mgmt);

 FUNC_3(VAR_3, &VAR_4->rx_idx_data, 0, VAR_5->rx_data,
  FUNC_0(VAR_5->rx_data), VAR_4->rx_buf_data);

 FUNC_5();
 FUNC_1(VAR_1, FUNC_2(VAR_0));
}
