
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ channel; int no_uld_attach; scalar_t__ lun; int tagged_supported; struct myrb_ldev_info* hostdata; int host; } ;
struct myrb_ldev_info {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct scsi_device*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct scsi_device *VAR_3)
{
 struct myrb_ldev_info *VAR_4;

 if (VAR_3->channel > FUNC_1(VAR_3->host))
  return -VAR_0;

 if (VAR_3->channel < FUNC_1(VAR_3->host)) {
  VAR_3->no_uld_attach = 1;
  return 0;
 }
 if (VAR_3->lun != 0)
  return -VAR_0;

 VAR_4 = VAR_3->hostdata;
 if (!VAR_4)
  return -VAR_0;
 if (VAR_4->state != VAR_2)
  FUNC_2(VAR_1, VAR_3,
       "Logical drive is %s\n",
       FUNC_0(VAR_4->state));

 VAR_3->tagged_supported = 1;
 return 0;
}
