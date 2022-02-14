
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pn533_phy_ops {int dummy; } ;
struct pn533_frame_ops {int tx_tail_len; scalar_t__ tx_header_len; } ;
struct pn533 {int protocol_type; int * wq; int nfc_dev; struct pn533_frame_ops* ops; int cmd_queue; int fragment_skb; int resp_q; int listen_timer; int rf_work; int poll_work; int mi_tm_tx_work; int mi_tm_rx_work; int tg_work; int mi_tx_work; int mi_rx_work; int cmd_complete_work; int cmd_work; int cmd_lock; int device_type; struct device* dev; struct pn533_phy_ops* phy_ops; void* phy; } ;
struct device {int dummy; } ;
typedef enum pn533_protocol_type { ____Placeholder_pn533_protocol_type } pn533_protocol_type ;


 int VAR_0 ;
 struct pn533* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ VAR_2 ;
 int * FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pn533*) ;
 struct pn533* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,scalar_t__,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,struct pn533*) ;
 int FUNC_13 (int ,struct device*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct pn533_frame_ops VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,int ) ;

struct pn533 *FUNC_16(u32 VAR_15,
    u32 VAR_16,
    enum pn533_protocol_type VAR_17,
    void *VAR_18,
    struct pn533_phy_ops *VAR_19,
    struct pn533_frame_ops *VAR_20,
    struct device *VAR_21,
    struct device *VAR_22)
{
 struct pn533 *VAR_23;
 int VAR_24 = -VAR_0;

 VAR_23 = FUNC_7(sizeof(*VAR_23), VAR_1);
 if (!VAR_23)
  return FUNC_0(-VAR_0);

 VAR_23->phy = VAR_18;
 VAR_23->phy_ops = VAR_19;
 VAR_23->dev = VAR_21;
 if (VAR_20 != ((void*)0))
  VAR_23->ops = VAR_20;
 else
  VAR_23->ops = &VAR_5;

 VAR_23->protocol_type = VAR_17;
 VAR_23->device_type = VAR_15;

 FUNC_8(&VAR_23->cmd_lock);

 FUNC_3(&VAR_23->cmd_work, VAR_6);
 FUNC_3(&VAR_23->cmd_complete_work, VAR_7);
 FUNC_3(&VAR_23->mi_rx_work, VAR_8);
 FUNC_3(&VAR_23->mi_tx_work, VAR_9);
 FUNC_3(&VAR_23->tg_work, VAR_12);
 FUNC_3(&VAR_23->mi_tm_rx_work, VAR_13);
 FUNC_3(&VAR_23->mi_tm_tx_work, VAR_14);
 FUNC_1(&VAR_23->poll_work, VAR_10);
 FUNC_3(&VAR_23->rf_work, VAR_11);
 VAR_23->wq = FUNC_4("pn533", 0);
 if (VAR_23->wq == ((void*)0))
  goto error;

 FUNC_15(&VAR_23->listen_timer, VAR_3, 0);

 FUNC_14(&VAR_23->resp_q);
 FUNC_14(&VAR_23->fragment_skb);

 FUNC_2(&VAR_23->cmd_queue);

 VAR_23->nfc_dev = FUNC_9(&VAR_4, VAR_16,
        VAR_23->ops->tx_header_len +
        VAR_2,
        VAR_23->ops->tx_tail_len);
 if (!VAR_23->nfc_dev) {
  VAR_24 = -VAR_0;
  goto destroy_wq;
 }

 FUNC_13(VAR_23->nfc_dev, VAR_22);
 FUNC_12(VAR_23->nfc_dev, VAR_23);

 VAR_24 = FUNC_11(VAR_23->nfc_dev);
 if (VAR_24)
  goto free_nfc_dev;

 return VAR_23;

free_nfc_dev:
 FUNC_10(VAR_23->nfc_dev);

destroy_wq:
 FUNC_5(VAR_23->wq);
error:
 FUNC_6(VAR_23);
 return FUNC_0(VAR_24);
}
