
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otx2_mbox_dev {scalar_t__ msg_size; scalar_t__ rsp_size; int mbox_lock; struct mbox_msghdr* mbase; scalar_t__ num_msgs; } ;
struct otx2_mbox {scalar_t__ tx_size; scalar_t__ rx_size; int tx_start; struct otx2_mbox_dev* dev; } ;
struct mbox_msghdr {scalar_t__ next_msgoff; int ver; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mbox_msghdr*,int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct mbox_msghdr *FUNC_4(struct otx2_mbox *VAR_3, int VAR_4,
         int VAR_5, int VAR_6)
{
 struct otx2_mbox_dev *VAR_7 = &VAR_3->dev[VAR_4];
 struct mbox_msghdr *VAR_8 = ((void*)0);

 FUNC_2(&VAR_7->mbox_lock);
 VAR_5 = FUNC_0(VAR_5, VAR_0);
 VAR_6 = FUNC_0(VAR_6, VAR_0);

 if ((VAR_7->msg_size + VAR_5) > VAR_3->tx_size - VAR_2)
  goto exit;
 if ((VAR_7->rsp_size + VAR_6) > VAR_3->rx_size - VAR_2)
  goto exit;

 if (VAR_7->msg_size == 0)
  VAR_7->num_msgs = 0;
 VAR_7->num_msgs++;

 VAR_8 = VAR_7->mbase + VAR_3->tx_start + VAR_2 + VAR_7->msg_size;


 FUNC_1(VAR_8, 0, sizeof(*VAR_8) + VAR_5);

 VAR_8->ver = VAR_1;
 VAR_7->msg_size += VAR_5;
 VAR_7->rsp_size += VAR_6;
 VAR_8->next_msgoff = VAR_7->msg_size + VAR_2;
exit:
 FUNC_3(&VAR_7->mbox_lock);

 return VAR_8;
}
