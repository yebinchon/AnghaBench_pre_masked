
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {int dummy; } ;
struct scsi_device {int host; } ;
struct scsi_cmnd {struct scsi_device* device; } ;
struct ibmvfc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct scsi_device*,int ,char*) ;
 int FUNC_2 (struct ibmvfc_host*,struct scsi_target*,int ) ;
 int FUNC_3 (struct ibmvfc_host*) ;
 struct scsi_target* FUNC_4 (struct scsi_device*) ;
 struct ibmvfc_host* FUNC_5 (int ) ;
 int FUNC_6 (struct scsi_target*,unsigned long*,int ) ;

__attribute__((used)) static int FUNC_7(struct scsi_cmnd *VAR_8)
{
 struct scsi_device *VAR_9 = VAR_8->device;
 struct ibmvfc_host *VAR_10 = FUNC_5(VAR_9->host);
 struct scsi_target *VAR_11 = FUNC_4(VAR_9);
 int VAR_12;
 int VAR_13 = 0;
 int VAR_14 = VAR_1;
 unsigned long VAR_15 = 0;

 VAR_0;
 VAR_12 = FUNC_0(VAR_8);
 FUNC_3(VAR_10);
 if (VAR_12 != VAR_2) {
  FUNC_6(VAR_11, &VAR_15, VAR_6);
  VAR_13 = FUNC_1(VAR_9, VAR_3, "target");
 } else
  FUNC_6(VAR_11, &VAR_15, VAR_5);

 if (!VAR_15 && !VAR_13)
  VAR_14 = FUNC_2(VAR_10, VAR_11, VAR_7);

 if (VAR_12 == VAR_2 && VAR_14 != VAR_1)
  VAR_14 = VAR_2;

 VAR_4;
 return VAR_14;
}
