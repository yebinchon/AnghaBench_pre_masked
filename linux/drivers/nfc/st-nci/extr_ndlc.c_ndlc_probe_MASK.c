
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_nci_se_status {int dummy; } ;
struct nfc_phy_ops {int dummy; } ;
struct llt_ndlc {int sm_work; int ack_pending_q; int send_q; int rcv_q; int t2_timer; int t1_timer; scalar_t__ powered; struct device* dev; void* phy_id; struct nfc_phy_ops* ops; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct llt_ndlc* FUNC_1 (struct device*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct llt_ndlc*,int,int,struct st_nci_se_status*) ;
 int FUNC_4 (int *,int ,int ) ;

int FUNC_5(void *VAR_5, struct nfc_phy_ops *VAR_6, struct device *VAR_7,
        int VAR_8, int VAR_9, struct llt_ndlc **VAR_10,
        struct st_nci_se_status *VAR_11)
{
 struct llt_ndlc *VAR_12;

 VAR_12 = FUNC_1(VAR_7, sizeof(struct llt_ndlc), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->ops = VAR_6;
 VAR_12->phy_id = VAR_5;
 VAR_12->dev = VAR_7;
 VAR_12->powered = 0;

 *VAR_10 = VAR_12;


 FUNC_4(&VAR_12->t1_timer, VAR_3, 0);
 FUNC_4(&VAR_12->t2_timer, VAR_4, 0);

 FUNC_2(&VAR_12->rcv_q);
 FUNC_2(&VAR_12->send_q);
 FUNC_2(&VAR_12->ack_pending_q);

 FUNC_0(&VAR_12->sm_work, VAR_2);

 return FUNC_3(VAR_12, VAR_8, VAR_9, VAR_11);
}
