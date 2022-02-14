
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct uas_dev_info {int cmd_urbs; int data_urbs; int lock; } ;
struct uas_cmd_info {int state; int * cmd_urb; int * data_out_urb; int * data_in_urb; } ;
struct scsi_cmnd {int SCp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (struct uas_dev_info*,int ,struct scsi_cmnd*) ;
 void* FUNC_2 (struct uas_dev_info*,int ,struct scsi_cmnd*,int ) ;
 int FUNC_3 (struct scsi_cmnd*,char*,int) ;
 struct urb* FUNC_4 (struct scsi_cmnd*,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct scsi_cmnd *VAR_14,
      struct uas_dev_info *VAR_15)
{
 struct uas_cmd_info *VAR_16 = (void *)&VAR_14->SCp;
 struct urb *VAR_17;
 int VAR_18;

 FUNC_0(&VAR_15->lock);
 if (VAR_16->state & VAR_13) {
  VAR_17 = FUNC_4(VAR_14, VAR_8);
  if (!VAR_17)
   return VAR_9;
  VAR_16->state &= ~VAR_13;
 }

 if (VAR_16->state & VAR_1) {
  VAR_16->data_in_urb = FUNC_2(VAR_15, VAR_8,
       VAR_14, VAR_6);
  if (!VAR_16->data_in_urb)
   return VAR_9;
  VAR_16->state &= ~VAR_1;
 }

 if (VAR_16->state & VAR_11) {
  FUNC_5(VAR_16->data_in_urb, &VAR_15->data_urbs);
  VAR_18 = FUNC_6(VAR_16->data_in_urb, VAR_8);
  if (VAR_18) {
   FUNC_7(VAR_16->data_in_urb);
   FUNC_3(VAR_14, "data in submit err", VAR_18);
   return VAR_9;
  }
  VAR_16->state &= ~VAR_11;
  VAR_16->state |= VAR_4;
 }

 if (VAR_16->state & VAR_2) {
  VAR_16->data_out_urb = FUNC_2(VAR_15, VAR_8,
       VAR_14, VAR_7);
  if (!VAR_16->data_out_urb)
   return VAR_9;
  VAR_16->state &= ~VAR_2;
 }

 if (VAR_16->state & VAR_12) {
  FUNC_5(VAR_16->data_out_urb, &VAR_15->data_urbs);
  VAR_18 = FUNC_6(VAR_16->data_out_urb, VAR_8);
  if (VAR_18) {
   FUNC_7(VAR_16->data_out_urb);
   FUNC_3(VAR_14, "data out submit err", VAR_18);
   return VAR_9;
  }
  VAR_16->state &= ~VAR_12;
  VAR_16->state |= VAR_5;
 }

 if (VAR_16->state & VAR_0) {
  VAR_16->cmd_urb = FUNC_1(VAR_15, VAR_8, VAR_14);
  if (!VAR_16->cmd_urb)
   return VAR_9;
  VAR_16->state &= ~VAR_0;
 }

 if (VAR_16->state & VAR_10) {
  FUNC_5(VAR_16->cmd_urb, &VAR_15->cmd_urbs);
  VAR_18 = FUNC_6(VAR_16->cmd_urb, VAR_8);
  if (VAR_18) {
   FUNC_7(VAR_16->cmd_urb);
   FUNC_3(VAR_14, "cmd submit err", VAR_18);
   return VAR_9;
  }
  VAR_16->cmd_urb = ((void*)0);
  VAR_16->state &= ~VAR_10;
  VAR_16->state |= VAR_3;
 }

 return 0;
}
