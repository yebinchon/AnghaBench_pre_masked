
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct p54p_ring_control {struct p54p_desc* tx_mgmt; struct p54p_desc* tx_data; struct p54p_desc* rx_mgmt; struct p54p_desc* rx_data; } ;
struct TYPE_3__ {scalar_t__ rx_mtu; } ;
struct p54p_priv {int ** tx_buf_mgmt; TYPE_2__* pdev; int ** tx_buf_data; int ** rx_buf_mgmt; TYPE_1__ common; int ** rx_buf_data; int tasklet; struct p54p_ring_control* ring_control; } ;
struct p54p_desc {int len; scalar_t__ host_addr; } ;
struct ieee80211_hw {struct p54p_priv* priv; } ;
struct TYPE_4__ {int irq; } ;


 unsigned int FUNC_0 (int **) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,struct ieee80211_hw*) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct p54p_ring_control*,int ,int) ;
 int FUNC_9 (struct ieee80211_hw*,int *) ;
 int FUNC_10 (TYPE_2__*,int ,scalar_t__,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct ieee80211_hw *VAR_5)
{
 struct p54p_priv *VAR_6 = VAR_5->priv;
 struct p54p_ring_control *VAR_7 = VAR_6->ring_control;
 unsigned int VAR_8;
 struct p54p_desc *VAR_9;

 FUNC_2(VAR_4, FUNC_3(0));
 FUNC_1(VAR_4);
 FUNC_12(10);

 FUNC_4(VAR_6->pdev->irq, VAR_5);

 FUNC_11(&VAR_6->tasklet);

 FUNC_2(VAR_3, FUNC_3(VAR_0));

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6->rx_buf_data); VAR_8++) {
  VAR_9 = &VAR_7->rx_data[VAR_8];
  if (VAR_9->host_addr)
   FUNC_10(VAR_6->pdev,
      FUNC_7(VAR_9->host_addr),
      VAR_6->common.rx_mtu + 32,
      VAR_1);
  FUNC_5(VAR_6->rx_buf_data[VAR_8]);
  VAR_6->rx_buf_data[VAR_8] = ((void*)0);
 }

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6->rx_buf_mgmt); VAR_8++) {
  VAR_9 = &VAR_7->rx_mgmt[VAR_8];
  if (VAR_9->host_addr)
   FUNC_10(VAR_6->pdev,
      FUNC_7(VAR_9->host_addr),
      VAR_6->common.rx_mtu + 32,
      VAR_1);
  FUNC_5(VAR_6->rx_buf_mgmt[VAR_8]);
  VAR_6->rx_buf_mgmt[VAR_8] = ((void*)0);
 }

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6->tx_buf_data); VAR_8++) {
  VAR_9 = &VAR_7->tx_data[VAR_8];
  if (VAR_9->host_addr)
   FUNC_10(VAR_6->pdev,
      FUNC_7(VAR_9->host_addr),
      FUNC_6(VAR_9->len),
      VAR_2);

  FUNC_9(VAR_5, VAR_6->tx_buf_data[VAR_8]);
  VAR_6->tx_buf_data[VAR_8] = ((void*)0);
 }

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6->tx_buf_mgmt); VAR_8++) {
  VAR_9 = &VAR_7->tx_mgmt[VAR_8];
  if (VAR_9->host_addr)
   FUNC_10(VAR_6->pdev,
      FUNC_7(VAR_9->host_addr),
      FUNC_6(VAR_9->len),
      VAR_2);

  FUNC_9(VAR_5, VAR_6->tx_buf_mgmt[VAR_8]);
  VAR_6->tx_buf_mgmt[VAR_8] = ((void*)0);
 }

 FUNC_8(VAR_7, 0, sizeof(*VAR_7));
}
