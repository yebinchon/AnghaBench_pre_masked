
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct otx2_mbox_dev {struct mbox_hdr* mbase; } ;
struct otx2_mbox {int rx_start; struct otx2_mbox_dev* dev; } ;
struct mbox_wq_info {TYPE_2__* mbox_wrk_up; int mbox_wq; struct otx2_mbox mbox_up; TYPE_1__* mbox_wrk; struct otx2_mbox mbox; } ;
struct mbox_hdr {scalar_t__ num_msgs; } ;
struct TYPE_4__ {int work; } ;
struct TYPE_3__ {int work; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct mbox_wq_info *VAR_0, int VAR_1,
      int VAR_2, u64 VAR_3)
{
 struct otx2_mbox_dev *VAR_4;
 struct otx2_mbox *VAR_5;
 struct mbox_hdr *VAR_6;
 int VAR_7;

 for (VAR_7 = VAR_1; VAR_7 < VAR_2; VAR_7++) {

  if (!(VAR_3 & FUNC_0(VAR_7 - VAR_1)))
   continue;

  VAR_5 = &VAR_0->mbox;
  VAR_4 = &VAR_5->dev[VAR_7];
  VAR_6 = VAR_4->mbase + VAR_5->rx_start;
  if (VAR_6->num_msgs)
   FUNC_1(VAR_0->mbox_wq, &VAR_0->mbox_wrk[VAR_7].work);

  VAR_5 = &VAR_0->mbox_up;
  VAR_4 = &VAR_5->dev[VAR_7];
  VAR_6 = VAR_4->mbase + VAR_5->rx_start;
  if (VAR_6->num_msgs)
   FUNC_1(VAR_0->mbox_wq, &VAR_0->mbox_wrk_up[VAR_7].work);
 }
}
