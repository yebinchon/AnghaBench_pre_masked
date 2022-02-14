
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct SL_WH_MASTER_TRIGGER_T {int dummy; } ;
struct TYPE_3__ {int MasterData; } ;
struct MPT3SAS_ADAPTER {int diag_trigger_lock; TYPE_1__ diag_trigger_master; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (TYPE_1__*,char const*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int,size_t) ;
 struct MPT3SAS_ADAPTER* FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_2,
 struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)

{
 struct Scsi_Host *VAR_6 = FUNC_0(VAR_2);
 struct MPT3SAS_ADAPTER *VAR_7 = FUNC_4(VAR_6);
 unsigned long VAR_8;
 ssize_t VAR_9;

 FUNC_5(&VAR_7->diag_trigger_lock, VAR_8);
 VAR_9 = FUNC_3(sizeof(struct SL_WH_MASTER_TRIGGER_T), VAR_5);
 FUNC_2(&VAR_7->diag_trigger_master, 0,
     sizeof(struct SL_WH_MASTER_TRIGGER_T));
 FUNC_1(&VAR_7->diag_trigger_master, VAR_4, VAR_9);
 VAR_7->diag_trigger_master.MasterData |=
     (VAR_1 + VAR_0);
 FUNC_6(&VAR_7->diag_trigger_lock, VAR_8);
 return VAR_9;
}
