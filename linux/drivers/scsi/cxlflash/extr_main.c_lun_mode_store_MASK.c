
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cxlflash_cfg {int host; int num_fc_ports; struct afu* afu; } ;
struct afu {int internal_lun; } ;
struct Scsi_Host {int max_channel; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cxlflash_cfg*) ;
 struct Scsi_Host* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,int*) ;
 int FUNC_4 (int ) ;
 struct cxlflash_cfg* FUNC_5 (struct Scsi_Host*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
         struct device_attribute *VAR_1,
         const char *VAR_2, size_t VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_2(VAR_0);
 struct cxlflash_cfg *VAR_5 = FUNC_5(VAR_4);
 struct afu *VAR_6 = VAR_5->afu;
 int VAR_7;
 u32 VAR_8;

 VAR_7 = FUNC_3(VAR_2, 10, &VAR_8);
 if (!VAR_7 && (VAR_8 < 5) && (VAR_8 != VAR_6->internal_lun)) {
  VAR_6->internal_lun = VAR_8;






  if (VAR_6->internal_lun)
   VAR_4->max_channel = 0;
  else
   VAR_4->max_channel = FUNC_0(VAR_5->num_fc_ports);

  FUNC_1(VAR_5);
  FUNC_4(VAR_5->host);
 }

 return VAR_3;
}
