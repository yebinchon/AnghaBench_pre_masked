
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct uas_dev_info {int resetting; int data_urbs; int sense_urbs; int cmd_urbs; int work; int lock; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct uas_dev_info*) ;
 int FUNC_6 (struct uas_dev_info*,int ) ;
 struct Scsi_Host* FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct usb_interface *VAR_1)
{
 struct Scsi_Host *VAR_2 = FUNC_7(VAR_1);
 struct uas_dev_info *VAR_3 = (struct uas_dev_info *)VAR_2->hostdata;
 unsigned long VAR_4;

 FUNC_3(&VAR_3->lock, VAR_4);
 VAR_3->resetting = 1;
 FUNC_4(&VAR_3->lock, VAR_4);

 FUNC_0(&VAR_3->work);
 FUNC_8(&VAR_3->cmd_urbs);
 FUNC_8(&VAR_3->sense_urbs);
 FUNC_8(&VAR_3->data_urbs);
 FUNC_6(VAR_3, VAR_0);

 FUNC_2(VAR_2);
 FUNC_5(VAR_3);
 FUNC_1(VAR_2);
}
