
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct aac_dev {int max_msix; int vector_cap; int msi_enabled; scalar_t__ comm_interface; TYPE_1__* scsi_host_ptr; scalar_t__ sa_firmware; TYPE_2__* pdev; scalar_t__ sync_mode; } ;
struct TYPE_5__ {scalar_t__ device; int dev; } ;
struct TYPE_4__ {int can_queue; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int,unsigned int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,int,int,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;

void FUNC_5(struct aac_dev *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;

 VAR_9 = VAR_8 = 0;

 if (VAR_7->max_msix == 0 ||
     VAR_7->pdev->device == VAR_6 ||
     VAR_7->sync_mode) {
  VAR_7->max_msix = 1;
  VAR_7->vector_cap =
   VAR_7->scsi_host_ptr->can_queue +
   VAR_2;
  return;
 }


 VAR_9 = FUNC_1(VAR_7->max_msix,
  (unsigned int)FUNC_2());

 VAR_7->max_msix = VAR_9;

 if (VAR_9 > VAR_1)
  VAR_9 = VAR_1;

 if (VAR_9 > 1 &&
     FUNC_4(VAR_7->pdev, VAR_3)) {
  VAR_10 = 2;
  VAR_8 = FUNC_3(VAR_7->pdev,
       VAR_10, VAR_9,
       VAR_5 | VAR_4);
  if (VAR_8 > 0) {
   VAR_7->msi_enabled = 1;
   VAR_9 = VAR_8;
  } else {
   VAR_7->msi_enabled = 0;
   FUNC_0(&VAR_7->pdev->dev,
   "MSIX not supported!! Will try INTX 0x%x.\n", VAR_8);
  }
 }

 if (!VAR_7->msi_enabled)
  VAR_7->max_msix = VAR_9 = 1;
 else {
  if (VAR_7->max_msix > VAR_9)
   VAR_7->max_msix = VAR_9;
 }
 if (VAR_7->comm_interface == VAR_0 && VAR_7->sa_firmware)
  VAR_7->vector_cap = VAR_7->scsi_host_ptr->can_queue +
    VAR_2;
 else
  VAR_7->vector_cap = (VAR_7->scsi_host_ptr->can_queue +
    VAR_2) / VAR_9;

}
