
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu_work {struct rvu* rvu; } ;
struct otx2_mbox {int rx_start; struct otx2_mbox_dev* dev; } ;
struct mbox_wq_info {struct otx2_mbox mbox_up; struct rvu_work* mbox_wrk_up; } ;
struct rvu {int dev; struct mbox_wq_info afvf_wq_info; struct mbox_wq_info afpf_wq_info; } ;
struct otx2_mbox_dev {int msgs_acked; struct mbox_msghdr* mbase; } ;
struct mbox_msghdr {int num_msgs; int id; scalar_t__ sig; scalar_t__ rc; int next_msgoff; } ;
struct mbox_hdr {int num_msgs; int id; scalar_t__ sig; scalar_t__ rc; int next_msgoff; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;

 int VAR_1 ;
 scalar_t__ VAR_2 ;


 int FUNC_1 (int ,char*,scalar_t__,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct otx2_mbox*,int) ;

__attribute__((used)) static void FUNC_4(struct rvu_work *VAR_3, int VAR_4)
{
 struct rvu *VAR_5 = VAR_3->rvu;
 struct otx2_mbox_dev *VAR_6;
 struct mbox_hdr *VAR_7;
 struct mbox_msghdr *VAR_8;
 struct mbox_wq_info *VAR_9;
 struct otx2_mbox *VAR_10;
 int VAR_11, VAR_12, VAR_13;

 switch (VAR_4) {
 case 129:
  VAR_9 = &VAR_5->afpf_wq_info;
  break;
 case 128:
  VAR_9 = &VAR_5->afvf_wq_info;
  break;
 default:
  return;
 }

 VAR_13 = VAR_3 - VAR_9->mbox_wrk_up;
 VAR_10 = &VAR_9->mbox_up;
 VAR_6 = &VAR_10->dev[VAR_13];

 VAR_7 = VAR_6->mbase + VAR_10->rx_start;
 if (VAR_7->num_msgs == 0) {
  FUNC_2(VAR_5->dev, "mbox up handler: num_msgs = 0\n");
  return;
 }

 VAR_11 = VAR_10->rx_start + FUNC_0(sizeof(*VAR_7), VAR_0);

 for (VAR_12 = 0; VAR_12 < VAR_7->num_msgs; VAR_12++) {
  VAR_8 = VAR_6->mbase + VAR_11;

  if (VAR_8->id >= VAR_1) {
   FUNC_1(VAR_5->dev,
    "Mbox msg with unknown ID 0x%x\n", VAR_8->id);
   goto end;
  }

  if (VAR_8->sig != VAR_2) {
   FUNC_1(VAR_5->dev,
    "Mbox msg with wrong signature %x, ID 0x%x\n",
    VAR_8->sig, VAR_8->id);
   goto end;
  }

  switch (VAR_8->id) {
  case 130:
   break;
  default:
   if (VAR_8->rc)
    FUNC_1(VAR_5->dev,
     "Mbox msg response has err %d, ID 0x%x\n",
     VAR_8->rc, VAR_8->id);
   break;
  }
end:
  VAR_11 = VAR_10->rx_start + VAR_8->next_msgoff;
  VAR_6->msgs_acked++;
 }

 FUNC_3(VAR_10, VAR_13);
}
