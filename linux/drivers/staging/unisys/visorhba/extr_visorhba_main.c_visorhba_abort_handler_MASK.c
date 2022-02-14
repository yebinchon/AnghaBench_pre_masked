
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visordisk_info {int ios_threshold; int error_count; } ;
struct scsi_device {struct visordisk_info* hostdata; } ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;struct scsi_device* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,struct scsi_device*) ;
 int FUNC_4 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_5(struct scsi_cmnd *VAR_5)
{

 struct scsi_device *VAR_6;
 struct visordisk_info *VAR_7;
 int VAR_8;

 VAR_6 = VAR_5->device;
 VAR_7 = VAR_6->hostdata;
 if (FUNC_1(&VAR_7->error_count) < VAR_4)
  FUNC_0(&VAR_7->error_count);
 else
  FUNC_2(&VAR_7->ios_threshold, VAR_1);
 VAR_8 = FUNC_3(VAR_3, VAR_6);
 if (VAR_8 == VAR_2) {
  VAR_5->result = VAR_0 << 16;
  VAR_5->scsi_done(VAR_5);
 }
 return VAR_8;
}
