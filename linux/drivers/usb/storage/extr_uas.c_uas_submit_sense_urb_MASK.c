
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct uas_dev_info {int sense_urbs; } ;
struct scsi_cmnd {TYPE_1__* device; } ;
typedef int gfp_t ;
struct TYPE_2__ {struct uas_dev_info* hostdata; } ;


 struct urb* FUNC_0 (struct uas_dev_info*,int ,struct scsi_cmnd*) ;
 int FUNC_1 (struct scsi_cmnd*,char*,int) ;
 int FUNC_2 (struct urb*,int *) ;
 int FUNC_3 (struct urb*) ;
 int FUNC_4 (struct urb*,int ) ;
 int FUNC_5 (struct urb*) ;

__attribute__((used)) static struct urb *FUNC_6(struct scsi_cmnd *VAR_0, gfp_t VAR_1)
{
 struct uas_dev_info *VAR_2 = VAR_0->device->hostdata;
 struct urb *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_2, VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);
 FUNC_2(VAR_3, &VAR_2->sense_urbs);
 VAR_4 = FUNC_4(VAR_3, VAR_1);
 if (VAR_4) {
  FUNC_5(VAR_3);
  FUNC_1(VAR_0, "sense submit err", VAR_4);
  FUNC_3(VAR_3);
  return ((void*)0);
 }
 return VAR_3;
}
