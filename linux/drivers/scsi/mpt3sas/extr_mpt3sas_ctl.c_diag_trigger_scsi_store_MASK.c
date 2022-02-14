
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_3__ {scalar_t__ ValidEntries; } ;
struct MPT3SAS_ADAPTER {int diag_trigger_lock; TYPE_1__ diag_trigger_scsi; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (TYPE_1__*,char const*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int,size_t) ;
 struct MPT3SAS_ADAPTER* FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_1,
 struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_0(VAR_1);
 struct MPT3SAS_ADAPTER *VAR_6 = FUNC_4(VAR_5);
 unsigned long VAR_7;
 ssize_t VAR_8;

 FUNC_5(&VAR_6->diag_trigger_lock, VAR_7);
 VAR_8 = FUNC_3(sizeof(VAR_6->diag_trigger_scsi), VAR_4);
 FUNC_2(&VAR_6->diag_trigger_scsi, 0, sizeof(VAR_6->diag_trigger_scsi));
 FUNC_1(&VAR_6->diag_trigger_scsi, VAR_3, VAR_8);
 if (VAR_6->diag_trigger_scsi.ValidEntries > VAR_0)
  VAR_6->diag_trigger_scsi.ValidEntries = VAR_0;
 FUNC_6(&VAR_6->diag_trigger_lock, VAR_7);
 return VAR_8;
}
