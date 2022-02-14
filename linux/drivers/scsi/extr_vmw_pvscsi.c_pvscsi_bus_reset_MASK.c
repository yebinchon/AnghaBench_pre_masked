
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct pvscsi_adapter {int hw_lock; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pvscsi_adapter*) ;
 int FUNC_1 (struct pvscsi_adapter*) ;
 int FUNC_2 (struct pvscsi_adapter*) ;
 int FUNC_3 (int ,struct scsi_cmnd*,char*) ;
 struct pvscsi_adapter* FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct scsi_cmnd *VAR_2)
{
 struct Scsi_Host *VAR_3 = VAR_2->device->host;
 struct pvscsi_adapter *VAR_4 = FUNC_4(VAR_3);
 unsigned long VAR_5;

 FUNC_3(VAR_0, VAR_2, "SCSI Bus reset\n");







 FUNC_5(&VAR_4->hw_lock, VAR_5);

 FUNC_2(VAR_4);
 FUNC_0(VAR_4);
 FUNC_1(VAR_4);

 FUNC_6(&VAR_4->hw_lock, VAR_5);

 return VAR_1;
}
