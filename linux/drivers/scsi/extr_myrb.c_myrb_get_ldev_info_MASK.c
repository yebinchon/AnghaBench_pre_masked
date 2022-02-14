
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {struct myrb_ldev_info* hostdata; } ;
struct myrb_ldev_info {scalar_t__ state; scalar_t__ wb_enabled; } ;
struct myrb_hba {struct myrb_ldev_info* ldev_info_buf; int ldev_info_addr; struct Scsi_Host* host; TYPE_1__* enquiry; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int ldev_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned short VAR_3 ;
 int FUNC_0 (struct myrb_ldev_info*,struct myrb_ldev_info*,int) ;
 int FUNC_1 (scalar_t__) ;
 unsigned short FUNC_2 (struct myrb_hba*,int ,int ) ;
 int FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (struct Scsi_Host*,int ,int,int ) ;
 struct scsi_device* FUNC_5 (struct Scsi_Host*,int ,int,int ) ;
 int FUNC_6 (struct scsi_device*) ;
 int FUNC_7 (int ,struct scsi_device*,char*,char*) ;
 int FUNC_8 (int ,struct Scsi_Host*,char*,int,int ) ;

__attribute__((used)) static unsigned short FUNC_9(struct myrb_hba *VAR_4)
{
 unsigned short VAR_5;
 int VAR_6, VAR_7 = VAR_4->enquiry->ldev_count;
 struct Scsi_Host *VAR_8 = VAR_4->host;

 VAR_5 = FUNC_2(VAR_4, VAR_1,
     VAR_4->ldev_info_addr);
 if (VAR_5 != VAR_3)
  return VAR_5;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  struct myrb_ldev_info *VAR_9 = ((void*)0);
  struct myrb_ldev_info *VAR_10 = VAR_4->ldev_info_buf + VAR_6;
  struct scsi_device *VAR_11;

  VAR_11 = FUNC_5(VAR_8, FUNC_3(VAR_8),
       VAR_6, 0);
  if (!VAR_11) {
   if (VAR_10->state == VAR_2)
    continue;
   FUNC_8(VAR_0, VAR_8,
         "Adding Logical Drive %d in state %s\n",
         VAR_6, FUNC_1(VAR_10->state));
   FUNC_4(VAR_8, FUNC_3(VAR_8),
     VAR_6, 0);
   continue;
  }
  VAR_9 = VAR_11->hostdata;
  if (VAR_10->state != VAR_9->state)
   FUNC_8(VAR_0, VAR_8,
         "Logical Drive %d is now %s\n",
         VAR_6, FUNC_1(VAR_10->state));
  if (VAR_10->wb_enabled != VAR_9->wb_enabled)
   FUNC_7(VAR_0, VAR_11,
        "Logical Drive is now WRITE %s\n",
        (VAR_10->wb_enabled ? "BACK" : "THRU"));
  FUNC_0(VAR_9, VAR_10, sizeof(*VAR_10));
  FUNC_6(VAR_11);
 }
 return VAR_5;
}
