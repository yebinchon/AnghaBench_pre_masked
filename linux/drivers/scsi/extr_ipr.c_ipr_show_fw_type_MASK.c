
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipr_ioa_cfg {int sis64; TYPE_1__* host; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;
struct TYPE_2__ {int host_lock; } ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_1);
 struct ipr_ioa_cfg *VAR_5 = (struct ipr_ioa_cfg *)VAR_4->hostdata;
 unsigned long VAR_6 = 0;
 int VAR_7;

 FUNC_2(VAR_5->host->host_lock, VAR_6);
 VAR_7 = FUNC_1(VAR_3, VAR_0, "%d\n", VAR_5->sis64);
 FUNC_3(VAR_5->host->host_lock, VAR_6);
 return VAR_7;
}
