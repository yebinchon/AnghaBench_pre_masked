
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otx2_mbox_dev {int mbox_lock; scalar_t__ rsp_size; scalar_t__ msg_size; struct mbox_hdr* mbase; } ;
struct otx2_mbox {int tx_start; int rx_start; struct otx2_mbox_dev* dev; } ;
struct mbox_hdr {scalar_t__ num_msgs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct otx2_mbox *VAR_0, int VAR_1)
{
 struct otx2_mbox_dev *VAR_2 = &VAR_0->dev[VAR_1];
 struct mbox_hdr *VAR_3, *VAR_4;

 VAR_3 = VAR_2->mbase + VAR_0->tx_start;
 VAR_4 = VAR_2->mbase + VAR_0->rx_start;

 FUNC_0(&VAR_2->mbox_lock);
 VAR_2->msg_size = 0;
 VAR_2->rsp_size = 0;
 VAR_3->num_msgs = 0;
 VAR_4->num_msgs = 0;
 FUNC_1(&VAR_2->mbox_lock);
}
