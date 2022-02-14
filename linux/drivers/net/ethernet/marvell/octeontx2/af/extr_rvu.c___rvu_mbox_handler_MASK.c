
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu_work {struct rvu* rvu; } ;
struct otx2_mbox {int rx_start; struct otx2_mbox_dev* dev; } ;
struct mbox_wq_info {struct otx2_mbox mbox; struct rvu_work* mbox_wrk; } ;
struct rvu {int dev; struct mbox_wq_info afvf_wq_info; struct mbox_wq_info afpf_wq_info; } ;
struct otx2_mbox_dev {struct mbox_msghdr* mbase; } ;
struct mbox_msghdr {int num_msgs; int pcifunc; int next_msgoff; int id; } ;
struct mbox_hdr {int num_msgs; int pcifunc; int next_msgoff; int id; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_1 (int ,char*,int,int ,int ,int,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct otx2_mbox*,int) ;
 int FUNC_4 (struct otx2_mbox*,int,struct mbox_msghdr*) ;

__attribute__((used)) static void FUNC_5(struct rvu_work *VAR_5, int VAR_6)
{
 struct rvu *VAR_7 = VAR_5->rvu;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 struct otx2_mbox_dev *VAR_12;
 struct mbox_hdr *VAR_13;
 struct mbox_msghdr *VAR_14;
 struct mbox_wq_info *VAR_15;
 struct otx2_mbox *VAR_16;

 switch (VAR_6) {
 case 129:
  VAR_15 = &VAR_7->afpf_wq_info;
  break;
 case 128:
  VAR_15 = &VAR_7->afvf_wq_info;
  break;
 default:
  return;
 }

 VAR_11 = VAR_5 - VAR_15->mbox_wrk;
 VAR_16 = &VAR_15->mbox;
 VAR_12 = &VAR_16->dev[VAR_11];


 VAR_13 = VAR_12->mbase + VAR_16->rx_start;
 if (VAR_13->num_msgs == 0)
  return;

 VAR_8 = VAR_16->rx_start + FUNC_0(sizeof(*VAR_13), VAR_0);

 for (VAR_10 = 0; VAR_10 < VAR_13->num_msgs; VAR_10++) {
  VAR_14 = VAR_12->mbase + VAR_8;


  switch (VAR_6) {
  case 129:
   VAR_14->pcifunc &=
    ~(VAR_3 << VAR_4);
   VAR_14->pcifunc |= (VAR_11 << VAR_4);
   break;
  case 128:
   VAR_14->pcifunc &=
    ~(VAR_1 << VAR_2);
   VAR_14->pcifunc |= (VAR_11 << VAR_2) + 1;
   break;
  }

  VAR_9 = FUNC_4(VAR_16, VAR_11, VAR_14);
  if (!VAR_9) {
   VAR_8 = VAR_16->rx_start + VAR_14->next_msgoff;
   continue;
  }

  if (VAR_14->pcifunc & VAR_1)
   FUNC_1(VAR_7->dev, "Error %d when processing message %s (0x%x) from PF%d:VF%d\n",
     VAR_9, FUNC_2(VAR_14->id),
     VAR_14->id, VAR_11,
     (VAR_14->pcifunc & VAR_1) - 1);
  else
   FUNC_1(VAR_7->dev, "Error %d when processing message %s (0x%x) from PF%d\n",
     VAR_9, FUNC_2(VAR_14->id),
     VAR_14->id, VAR_11);
 }


 FUNC_3(VAR_16, VAR_11);
}
