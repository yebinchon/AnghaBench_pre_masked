
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct pvscsi_adapter {int use_msg; int hw_lock; int workqueue; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pvscsi_adapter*) ;
 int FUNC_2 (struct pvscsi_adapter*) ;
 int FUNC_3 (struct pvscsi_adapter*) ;
 int FUNC_4 (struct pvscsi_adapter*) ;
 int FUNC_5 (struct pvscsi_adapter*) ;
 int FUNC_6 (struct pvscsi_adapter*) ;
 int FUNC_7 (int ,struct scsi_cmnd*,char*) ;
 struct pvscsi_adapter* FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct scsi_cmnd *VAR_2)
{
 struct Scsi_Host *VAR_3 = VAR_2->device->host;
 struct pvscsi_adapter *VAR_4 = FUNC_8(VAR_3);
 unsigned long VAR_5;
 bool VAR_6;

 FUNC_7(VAR_0, VAR_2, "SCSI Host reset\n");

 FUNC_9(&VAR_4->hw_lock, VAR_5);

 VAR_6 = VAR_4->use_msg;

 if (VAR_6) {
  VAR_4->use_msg = 0;
  FUNC_10(&VAR_4->hw_lock, VAR_5);





  FUNC_0(VAR_4->workqueue);
  FUNC_9(&VAR_4->hw_lock, VAR_5);
 }







 FUNC_3(VAR_4);

 FUNC_1(VAR_4);
 FUNC_2(VAR_4);

 FUNC_4(VAR_4);
 VAR_4->use_msg = VAR_6;
 FUNC_5(VAR_4);
 FUNC_6(VAR_4);

 FUNC_10(&VAR_4->hw_lock, VAR_5);

 return VAR_1;
}
