
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct otx2_mbox_dev {scalar_t__ num_msgs; scalar_t__ msgs_acked; struct mbox_msghdr* mbase; } ;
struct otx2_mbox {unsigned long tx_start; unsigned long rx_start; struct otx2_mbox_dev* dev; } ;
struct mbox_msghdr {scalar_t__ id; unsigned long next_msgoff; } ;


 int VAR_0 ;
 struct mbox_msghdr* FUNC_0 (int ) ;
 unsigned long VAR_1 ;

struct mbox_msghdr *FUNC_1(struct otx2_mbox *VAR_2, int VAR_3,
          struct mbox_msghdr *VAR_4)
{
 unsigned long VAR_5 = VAR_2->tx_start + VAR_1;
 unsigned long VAR_6 = VAR_2->rx_start + VAR_1;
 struct otx2_mbox_dev *VAR_7 = &VAR_2->dev[VAR_3];
 u16 VAR_8;

 if (VAR_7->num_msgs != VAR_7->msgs_acked)
  return FUNC_0(-VAR_0);

 for (VAR_8 = 0; VAR_8 < VAR_7->msgs_acked; VAR_8++) {
  struct mbox_msghdr *VAR_9 = VAR_7->mbase + VAR_5;
  struct mbox_msghdr *VAR_10 = VAR_7->mbase + VAR_6;

  if (VAR_4 == VAR_9) {
   if (VAR_9->id != VAR_10->id)
    return FUNC_0(-VAR_0);
   return VAR_10;
  }

  VAR_5 = VAR_9->next_msgoff;
  VAR_6 = VAR_10->next_msgoff;
 }

 return FUNC_0(-VAR_0);
}
